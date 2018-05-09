#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char** argv)
{
	int m;
	srand((unsigned int)time(NULL));
	m = rand();
	printf("random number is %d \n", m);
	system("PAUSE");
	return 0; 
}
