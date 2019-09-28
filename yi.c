#include<stdio.h>
#include<unistd.h>

int main()
{
	char arr[101]= {0};
	char str[5]="|/-\\";
	int i=0;
	for(i=0;i<100;i++)
	{
		printf("[%-100s]\r [%-100%%],%c",arr,i,str[i%4]);
		arr[i]='*';
		sleep(1);
	}
	return 0;
}
