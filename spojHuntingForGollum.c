// 21/12/14 13:08

// Program to solve the problem Hunting for Gollum on SPOJ

#include<stdio.h>
#include<string.h>

#define NMAX 305
#define MMAX 5000
char p[NMAX][NMAX],t[MMAX][MMAX];

int main(){
	int n1,n2,m1,m2,i,j,k,l,len,same=1,stop=0,notfound=1;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;++i){
		scanf(" %[^\n]s",p[i]);
	}
	scanf("%d %d",&m1,&m2);
	for(i=0;i<m1;++i){
		scanf(" %[^\n]s",t[i]);
	}
	for(i=0;i<m1;++i){
		for(j=0;j<m2;++j){
			if(t[i][j] == p[0][0]){
				same = 0;stop=0;
				for(k=0;k<n1&&!stop;++k){
					for(l=0;l<n2;++l){
						if(p[k][l]==t[k+i][l+j]){
							same++;
						}
						else{
							stop = 1;
							break;
						}
					}
				}
				if(same == n1*n2){
					printf("(%d,%d)\n",i+1,j+1);
					notfound=0;
				}
				same = 0;
			}
		}
	}
	if(notfound){
		printf("NO MATCH FOUND...\n");
	}
	return 0;
}
