#include <stdio.h>

/**
 *main - Entry point
 *Description: prints alphabet in upper and lowercase
 *Return: Alaways 0 (Success)
 */

int main(void)
{
int ch;

for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar ('\n');

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar ('\n');

return (0);
}
