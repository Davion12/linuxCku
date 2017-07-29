#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>

int add(int a, int b)
{
	return a + b;
}

int main(int args, char* argv[])
{
	/*int a[3] = {12, 32, 25};
	int i;
	for(i = 0; i < 10; i++)
	{
		sleep(100);		
	}*/
	/*
	char *str = "good";
	while(*str != '\0')
	{
		putchar(*str++);
	}*/

	/*int (*p)(int, int) = add;
	printf("%p \nresult:%d", p, p(2, 3));
	free(p);*/
	
	int a[2] = {2, 3};
	printf("%d\n", a[3]);
	return 0;
}
