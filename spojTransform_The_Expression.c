// 16/08/14 19:25
 
// Program convert the given expression in the reverse polish notation (PostFix Expression)
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct stack{
	int top;
	char exp[401];
};
 
typedef struct stack* stackp;
 
void push(stackp stk,char ch);
char pop(stackp);
 
int main(){
	char temp;
	int tests,explen;
	unsigned i;
	struct stack stk;
	stk.top = -1;
	scanf("%d",&tests);
	while(tests--){
		scanf(" %[^\n\t]s",&stk.exp);
		explen = strlen(stk.exp);
		//printf("%d\n",explen);
		for(i=0;i<explen;++i){
			if(stk.exp[i]>=97&&stk.exp[i]<=122){
				printf("%c",stk.exp[i]);
			}
			else if(stk.exp[i]>=42&&stk.exp[i]<=47||stk.exp[i]==40||stk.exp[i]==94){
				push(&stk,stk.exp[i]);	
			}
			else if(stk.exp[i] == 41){
				while( (temp = pop(&stk)) != '(' ){
					printf("%c",temp);
				}
			}
			else{}
		}
		printf("\n");
	}
	return 0;
}
 
void push(stackp stk,char ch){
	stk->exp[++(stk->top)] = ch;
}
 
char pop(stackp stk){
	char temp;
	if(stk->top == -1){
		printf("Stack is empty!! code your algorithm well!!");
	}
	else{
		temp = stk->exp[(stk->top)--];
	}
	return temp;
}
