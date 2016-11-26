//#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
//using namespace std;

int main(){
	char str[6];
	int i;
	while(1){
		scanf(" %[^\n]s",str);
		unsigned long long int num=1,temp=0,temp1=1,i=0;
		if(!strcmp(str,"00e0")) break;
		if(str[3]!='0'){
			for(i=0;i<(str[3]-'0');++i) num *= 10;
			num = (str[1]-'0')*num;
			for(i=0;i<1+str[3]-'0';++i){
				temp1 *= 10;
			}
			num = num + temp1*(str[0]-'0');
		}
		else{
			num = 0;
			num = num + (str[1]-'0');
			num = num + 10*(str[0]-'0');
		}
		if(!(num&(num-1))){
			printf("%d\n",1);
		}
		else{
			for(i=(sizeof(unsigned long long int)*8)-1;i>=0;i--){
				if(num & (1<<i)){
					break;
				}
			}
			if(num>2)
				temp = temp | (1<<i);
			unsigned long long int diff = num - temp;
			printf("%llu\n",2*diff+1);
		}
		//printf("%llu %llu\n",num,temp);
	}
	return 0;
}
