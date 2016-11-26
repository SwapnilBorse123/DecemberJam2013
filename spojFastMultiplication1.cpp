// 06/01/15 17:51

// SPOJ Fast Multiplication

#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
char * multiply(char a[],char b[]){
    static char mul[2*MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
    lb=strlen(b)-1;
    for(i=0;i<=la;i++){
            a[i] = a[i] - 48;
    }

    for(i=0;i<=lb;i++){
            b[i] = b[i] - 48;
    }
    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }
    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
        sum =0;
		y=0;
		for(j=1;j<=lb+1;j++){
			if(i <= la+j){
			 sum = sum + temp[y+i];
			}
			y += j + la + 1;
		}
		c[k++] = (sum+r) %10;
		r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}

int main(){
	int t;
	char num1[MAX],num2[MAX];
	scanf("%d",&t);
	while(t--){
		scanf("%s",num1);
		scanf("%s",num2);
		printf("%s\n",multiply(num1,num2));
	}
	return 0;
}
