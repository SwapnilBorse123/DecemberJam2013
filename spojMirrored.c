// 20/12/14 17:09

// Program to solve the problem Mirrored on SPOJ

#include<stdio.h>
#include<string.h>

int main(){
	string str;
	printf("Ready\n");
	str[0] = 'a';
	while(getline(cin,str)){
		//scanf(" %[^\n\t]s",str);
		if(str[0]==' '&&str[1]==' ') break;
		if(!strcmp("db",str) || !strcmp("bd",str) || !strcmp("pq",str) || !strcmp("qp",str)){
			printf("Mirrored pair\n");
		}
		else{
			printf("Ordinary pair\n");
		}
	}
	return 0;
}
