#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the executable.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc , char **argv __attribute__((unused)))
{
        printf("%d\n", *argv);
        return (0);
}
