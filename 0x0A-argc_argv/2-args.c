#include <stdio.h>
/**
* main - prints all argument its receive
* @argc - argument count
* @argv - argument vector
*
* Return: on success, 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
