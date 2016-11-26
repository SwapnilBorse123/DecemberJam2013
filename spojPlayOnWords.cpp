// 14/02/15 19:10

// SPOJ A Play With Words

#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[1005],str1[1005];
	int i=0,n,tests;
	scanf("%d",&tests);
	while(tests--){
		int hashf[26]={0},hashl[26]={0},count=0;
		scanf("%d",&n);
		if(n==1){
			scanf(" %[^\n]s",&str);
			printf("Ordering is possible.\n");
		}
		else if(n==2){
			scanf(" %[^\n]s",&str);
			scanf(" %[^\n]s",&str1);
			if(!strcmp(str,str1)){
				printf("The door cannot be opened.\n");
			}
			else{
				hashf[str[0]-'a']++;
				hashl[str[strlen(str)-1]-'a']++;
				hashf[str1[0]-'a']++;
				hashl[str1[strlen(str1)-1]-'a']++;
				for(i=0;i<26;++i){
					if(hashf[i]!=hashl[i])count++;
				}
				if(count>2){
					printf("The door cannot be opened.\n");
				}
				else{
					printf("Ordering is possible.\n");
				}
			}
		}	
		else{
			while(n--){
				scanf(" %[^\n]s",&str);
				hashf[str[0]-'a']++;
				hashl[str[strlen(str)-1]-'a']++;
			}
			for(i=0;i<26;++i){
				if(hashf[i]!=hashl[i])count++;
			}
			if(count>2){
				printf("The door cannot be opened.\n");
			}
			else{
				printf("Ordering is possible.\n");
			}
		}
	}
	return 0;
}
