#include <stdio.h> #include <string.h>

int main()
{
char binary[100], onesComp[100], twosComp[100]; int i, len, carry = 1;
printf("Enter a binary number: "); scanf("%s", binary);
len = strlen(binary);

// 1's Complement
for (i = 0; i < len; i++)
{
if (binary[i] == '0')
onesComp[i] = '1'; else
onesComp[i] = '0';
}
onesComp[len] = '\0';

// 2's Complement
strcpy(twosComp, onesComp);
for (i = len - 1; i >= 0; i--)
{
if (carry == 1)
{
if (twosComp[i] == '1') twosComp[i] = '0';
else
{
twosComp[i] = '1';
carry = 0;
}
}
}

printf("\nOriginal: %s\n", binary); printf("1's Complement:%s\n", onesComp); printf("2's Complement:%s\n", twosComp);

return 0;
}
