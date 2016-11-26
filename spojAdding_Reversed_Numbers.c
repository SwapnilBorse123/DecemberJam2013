// 02/12/14 22:02

// Program to solve the problem Adding Reversed Numbers on SPOJ

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 10001

int main(){
	char input[MAX];
	char ans[MAX];
	int n,i=0,j=0,k=0,numa,numb,sum,carry=0,ind=0;
	scanf("%d",&n);
	while(n--){
		i=0;j=0;carry=0;ind=0;
		scanf(" %[^\n]s",input);
		while(input[i]!=' '){
			i++;
		}
		j = i+1;i=0;
		while(input[i]!=' ' && input[j]!='\0'){
			numa = input[i] - '0';
			numb = input[j] - '0';
			sum = numa+numb+carry;
			carry = sum/10;
			sum = sum % 10;
			ans[ind++] = (char)(sum + '0');
			i++;j++;
		}
		if(input[i] == ' '){
			while(input[j]!='\0'){ // if the latter part is longer than the first part
				numb = input[j]-'0';
				sum = numb+carry;
				carry = sum/10;
				sum = sum%10;
				ans[ind++] = (char)(sum + '0');
				j++;
			}
			if(input[j] == '\0'){ // if both the parts of the string are equal
				ans[ind++] = (char)(carry + '0');
			}
		}
		if(input[j] == '\0'){
			while(input[i]!=' '){ // if the first part
				numa = input[i] - '0';
				sum = numa+carry;
				carry = sum/10;
				sum = sum%10;
				ans[ind++] = (char)(sum + '0');
				i++;
			}
		}
		ans[ind] = '\0';
		k = 0;
		while(ans[k] == '0'){
			k++;
		}
		while(ans[k]!='\0'){
			printf("%c",ans[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}
