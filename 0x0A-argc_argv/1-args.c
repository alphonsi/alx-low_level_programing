#include <stdio.h>

/**
 * main - Print number of arguments passed into this program
 * @argc: counts the number of arguments passed to aprogram
 * @argv: an array of size argc
 *
 * Return: always 0
 **/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
