#include "stdio.h"
#include "string.h"

void _print_char(char *s, int index){
	if(index >= strlen(s))
	{
//		putchar('\n');
		return;
	}
	putchar(s[index]);
	_print_char(s, index+1);
}

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	_print_char(s, 0);
}


int main(){
	char hello[] = "Hello boy";
	_puts_recursion(hello);
}