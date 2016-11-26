// 19/12/14 14:46

// Program to solve the problem Java v/s C++ on SPOJ

#include<stdio.h>
#include<string.h>

#define MAX 205
int validate(char*,int);

int main(){
	char str[MAX];
	int i;
	while(scanf("%s",str)!=EOF){
		int len = strlen(str);
		if(!validate(str,len)){
			printf("Error!\n");
			continue;
		}
		for(i=0;i<len;++i){
			if(str[i]=='_'){
				printf("%c",str[i+1]-32);
				i++;
			}
			else if(str[i]>=65&&str[i]<=90){
				printf("%c%c",'_',str[i]+32);
			}
			else{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

int validate(char*str,int len){
	int i,hasUscore=0,hasCaps=0;
	for(i=0;i<len;++i){
		if(str[i]=='_')
			hasUscore=1;
		if(str[i]>=65 && str[i]<=90)
			hasCaps=1;
		if(hasUscore&&hasCaps)
			return 0;
	}
	if(str[len-1]=='_' || str[0]=='_' || str[0]>=65&&str[0]<=90){
		return 0;
	}
	for(i=0;i<len;++i){
		if(str[i]=='_' && str[i+1]=='_' || str[i]=='_' && str[i+1]>=65 && str[i+1]<=90){ // consecutive underscores or undscr followed by Caps
			return 0;
		}
	}
	return 1;
}
