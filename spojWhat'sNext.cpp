// 08/01/15 15:10

// SPOJ What's Next

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,temp;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0)break;
		else if(a==b && b==c){ // if all three are same
			printf("GP %d\n",a);
		}
		else if(b-a == c-b){
			printf("AP %d\n",c+(b-a));
		}
		else if(c/b == b/a){
			printf("GP %d\n",c*(b/a));
		}
	}
	return 0;
}
