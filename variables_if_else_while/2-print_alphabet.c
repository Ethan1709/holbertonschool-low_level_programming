#include <stdio.h>

/**
 *main - Entry point
 *Description: prints alphabet in lowercase
 *Return: Alawys 0 (Success)
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

putchar ('\n');

getch();

return(0);

}
