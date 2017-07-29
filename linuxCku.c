#include<ctype.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct Time{
	char str[10];
	int a[10];
}time;

int main(int args, char* argv[])
{
	//分配内存方法1
	struct TIME *pr = calloc(sizeof(time), 10);
	if(NULL == pr)
	{
		printf("alloca memory failed");
	}
	else
	{
		printf("success alloca memory");
	}
	free(pr);
	return 0;
}
