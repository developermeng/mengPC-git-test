#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int t = 0x1234;
	char t1 = ((char*)&t)[0];
	char t2 = ((char*)&t)[1];
	printf("t1 = %x , t2 = %x",t1,t2);
	return 0;
}
