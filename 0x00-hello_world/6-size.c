#include <stdio.h>
/**
  * main - new main
  *
  * Return: 0 successful
  */
int main(void)
{
	printf("size of a char: %lu byte(S)", sizeof(char));
	printf("size of a int: %lu byte(S)", sizeof(int));
	printf("size of a long int: %lu byte(S)", sizeof(long int));
	printf("size of a long long int: %lu byte(S)", sizeof(long long int));
	printf("size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
