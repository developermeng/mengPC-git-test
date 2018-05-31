#include<stdio.h>
#include<stdlib.h>

void QuickSort(int[],int,int);

int main(int argc, char **argv)
{
	int a[6] = {11, 3, 444, 32, 1, 23};
	int i = 0;
	QuickSort(a, 0, 5);
	while(i < 6)
	{
		printf("%d ", a[i]);
		i++;
	}
	return 0;
}

void QuickSort(int input[], int left, int right)
{
	int l = left;
	int r = right;
	int temp = input[left];

	if(left >= right) //important!
	{
		return;
	}

	while(l != r)
	{
		while(r > l && input[r] > temp)
		{
			r--;
		}
		if(r > l)
		{
			input[l] = input[r];
		}
		while(r > l && input[l] <temp)
		{
			l++;
		}
		if(r > l)
		{
			input[r] = input[l];
		}
	}
	input[l] = temp;
	QuickSort(input, left, l-1);
	QuickSort(input, l+1, right);
}
