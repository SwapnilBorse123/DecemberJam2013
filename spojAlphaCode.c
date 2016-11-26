// 12/12/14 23:01

// Program to solve the problem Alpha Code on SPOJ

#include<stdio.h>
#include<string.h>

#define MAX 5002

int main(){
	char str[MAX];
	int len,i,num;
	while(1){
		scanf(" %[^\n]s",str);
		if(!strcmp(str,"0")){
			break;
		}
		len = strlen(str);
		long long int ans[len];
		ans[0] = 1;
		for(i=1;i<len;++i){
			num = (str[i-1]-'0')*10 + (str[i]-'0');
			if(str[i] == '0' && num >26){
				ans[i] = 0;
			}
			else if(str[i]== '0' && num<26){
				ans[i] = ans[i-1];
			}
			else if(str[i-1] == '0' || str[i+1] == '0'){
				ans[i] = ans[i-1];
			}
			else if(num>=1 && num<=26){
				if(i == 1 && str[i] == '0'){
					ans[i] = ans[i-1];
				}
				else{
					if(i ==1){
						ans[i] = ans[i-1] + 1;		
					}
					else{
						ans[i] = ans[i-1] + ans[i-2];
					}
				}
			}
			else if(num > 26){
				ans[i] = ans[i-1];
			}
		}
		printf("%lld\n",ans[len-1]);
	}
	return 0;
}
