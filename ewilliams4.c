#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int *values;
	int i;

	values = (int *)malloc(sizeof(int)*5);

	for(i = 0; i < 5; i++)
		values[i] = 1;

	printf("The address of argc is: %p\n", &argc);
	printf("The address of the stack variable i is: %p\n", &i);
	printf("The address of heap variable values is: %p\n", &values);
	printf("The address of uninitialized data is: %p\n", &x);
	printf("The address of intialized data is: %p\n", &y);

	return EXIT_SUCCESS;

}
