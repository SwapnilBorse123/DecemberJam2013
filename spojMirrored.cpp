// 20/12/14 17:09

// Program to solve the problem Mirrored on SPOJ
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	printf("Ready\n");
	str[0] = 'a';
	while(getline(cin,str)){
		if(str[0]==' '&&str[1]==' ') break;
		if(!str.compare("db")||!str.compare("bd")||!str.compare("pq")||!str.compare("qp")){
			printf("Mirrored pair\n");
		}
		else{
			printf("Ordinary pair\n");
		}
	}
	return 0;
}
