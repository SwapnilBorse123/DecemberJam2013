// 22/12/14 14:28

// Program to solve the problem Common Permutation on SPOJ

#include<bits/stdc++.h>

using namespace std;
#define MAX 1002
int min(int* timesa,int* timesb,int i);
int main(){
	char stra[MAX],strb[MAX];
	//scanf(" %[^\n]s",stra) && scanf(" %[^\n]s",strb)
	while(cin>>stra>>strb){
		int i,timesa[26]={0},timesb[26]={0},pa=0,pb=0,j;
		int lena = strlen(stra);
		int lenb = strlen(strb);
		if(lena==0 || lenb==0 || lena==0&&lenb==0){
		}
		else{
			for(i=0;i<lena;++i){
				pa = (pa | (1<<(stra[i]-'a')));
				timesa[stra[i]-'a']++;
			}
			for(i=0;i<lenb;++i){
				pb = (pb | (1<<(strb[i]-'a')));
				timesb[strb[i]-'a']++;
			}
			for(i=0;i<26;++i){
				if((1<<i)&pa && (1<<i)&pb){
					for(j=0;j<min(timesa,timesb,i);++j){
						printf("%c",'a'+i);
					}
				}
			}
			printf("\n");	
		}
	}
	return 0;
}

int min(int* timesa,int* timesb,int i){
	return timesa[i]<timesb[i] ? timesa[i] : timesb[i];
}
