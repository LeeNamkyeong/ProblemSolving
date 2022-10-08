#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {

	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("%d\n", square(n, 1));


}

int square (int num, int result)
{	
	if (num == 0)
		return result;

	result *= 2;

	square (num - 1, result);
	
}