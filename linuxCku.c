#include<ctype.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


typedef struct Buffer{
	char str[10];
	int a[10];
}buffer;

void calloc_function(void)
{
	//�����ڴ淽��1
	struct TIME *pr = calloc(sizeof(buffer), 10);
	if(NULL == pr)
	{
		printf("alloca memory failed");
	}
	else
	{
		printf("success alloca memory");
	}
	free(pr);

	printf("the memory size is:%d",getpagesize());
}

void time_asc_print(void)
{
	//��ʾ��ǰϵͳʱ�䣬���ַ����ĸ�ʽ
	time_t timesample;
	time(&timesample);
	printf("%s\n", asctime(gmtime(&timesample)));
	printf("%s\n", ctime(&timesample));
}

void connectTwoString(void)
{
	//�����ַ�������
	char str1[10] = "12345";
	char str2[10] = "67890";
	printf("%s", strcat(str1, str2));
}



int main(int args, char* argv[])
{
	
	connectTwoString();
	return 0;
}
