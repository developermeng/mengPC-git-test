#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	unsigned int t = 0x1234;
	char t1,t2;
	t1 = ((char*)&t)[0];
	t2 = ((char*)&t)[1];
	printf("origin %x, low %x, high %x",t,t1,t2);
	return 0;
}
