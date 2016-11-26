// 17/12/14 15:12

// Program to solve the problem Fashion Shows on SPOJ

#include<stdio.h>
#include<stdlib.h>

#define MAX 1001

void quicksort(int*,int,int);

int main(){
	int n,i,tests,men[MAX],women[MAX];
	long int sum=0;
	scanf("%d",&tests);
	while(tests--){
		scanf("%d",&n);
		for(i=0;i<n;++i){
			scanf("%d",&men[i]);
		}
		for(i=0;i<n;++i){
			scanf("%d",&women[i]);
		}
		quicksort(men,0,n-1);
		quicksort(women,0,n-1);
		for(i=0;i<n;++i){
			sum += men[i]*women[i];
		}
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}

void quicksort(int *x,int first,int last){
    int pivot,j,temp,i;
     if(first<last){
         pivot=first;
         i=first;
         j=last;
         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);
    }
}
