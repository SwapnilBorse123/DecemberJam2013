// 17/12/14 22:41

// Program to solve the problme Uncle Jack on SPOJ

#include<stdio.h>
int main(){
	int j,arr[100000]={1},n=1,m,d=1,ind=0,count,temp=0;
	while(1){
		scanf("%d %d",&n,&d);
		if(n==0&&d==0)break;
		if(d == 0){
			printf("%d\n",1);
		}
		else{
			count = d;
			temp = n;
			while(temp>0){
				arr[ind] = temp%10;
				temp = temp/10;
				ind++;
			}
			m = ind; ind = 0;temp = 0;
			while(count>1){
				while(ind<m){
					int tmp = n * arr[ind] + temp;
					arr[ind] = tmp%10;
					temp = tmp/10;
					ind++;
				}
				while(temp > 0){
					arr[ind] = temp % 10;
					temp = temp / 10;
					ind++;
				}
				m = ind;
				ind = temp = 0;
				count--;
			}
			for(j=m-1;j >= 0;j--){
				printf("%d",arr[j]);
			}
			printf("\n");	
		}
	}
	return 0;
}
