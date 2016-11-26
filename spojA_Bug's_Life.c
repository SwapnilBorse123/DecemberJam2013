// 02/12/14 14:17

// Program to solve the problem A Bug's Life on SPOJ

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 2002
#define IMAX 1000002

struct gnode{
	int vertex;
	char color;
	struct gnode* next;
};

typedef struct gnode* gnodep;

int main(){
	long long int noi;
	int nob,nos,i,flag=1,bug1,bug2,j;
	struct gnode* vertices[MAX];
	scanf("%d",&nos);
	scanf("%d %lld",&nob,&noi);
	for(i=0;i<nos;++i){
		for(j=0;j<noi;++j){
			scanf("%d",&bug1);
			scanf("%d",&bug2);
			gnodep p = newNode(bug1);
			vertices[bug1] = p
		}
	}
	return 0;
}

gnodep newNode(int n){
	gnodep p = (gnodep)malloc(sizeof(gnode));
	p->vertex = n;
	p->next = NULL;
	return p;
}
