// 11/12/14 15:39

// Program to solve the problem Count On Cantor on SPOJ

#include<stdio.h>
#include<math.h>
int main(){
    long long int n , num ,i , j ,sub , sum , t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&num);
        n=ceil((-1+sqrt(1+8*num))/2);
        sub = num - n*(n-1)/2;
        sum = n+1;
        if (n%2==0)
            printf("TERM %lld IS %lld/%lld\n",num,sub,sum-sub);    
        else
            printf("TERM %lld IS %lld/%lld\n",num,sum-sub,sub);            
    }
    return 0;
}
