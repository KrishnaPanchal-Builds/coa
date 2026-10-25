#include <stdio.h> #include <string.h>

void decimalToBinary(int decNum)
{
int binary[32]; int i = 0;
if (decNum == 0)
{
printf("0"); return;
}

while (decNum > 0)
{
binary[i] = decNum % 2; decNum = decNum / 2; i++;
}

while (i > 0)
{
printf("%d", binary[--i]);
}
}

void hexToBinary(char hexNum[])
{
int i;

for (i = 0; hexNum[i] != '\0'; i++)
{
switch (hexNum[i])
{
case '0': printf("0000"); break;
case '1': printf("0001"); break;
case '2': printf("0010"); break;
case '3': printf("0011"); break;
case '4': printf("0100"); break;
case '5': printf("0101"); break;
            case '6': printf("0110"); break;
case '7': printf("0111"); break;
case '8': printf("1000"); break;
case '9': printf("1001"); break; case 'A':
case 'a': printf("1010"); break; case 'B':
case 'b': printf("1011"); break; case 'C':
case 'c': printf("1100"); break; case 'D':
case 'd': printf("1101"); break; case 'E':
case 'e': printf("1110"); break; case 'F':
case 'f': printf("1111"); break; default:
printf("Invalid hexadecimal number"); return;
}
}
}

int main()
{
int decNum;
char hexNum[20];

printf("Enter a Decimal number: "); scanf("%d", &decNum);
printf("Binary equivalent: "); decimalToBinary(decNum);
printf("\n\n");

printf("Enter a Hexadecimal number: "); scanf("%s", hexNum);

printf("Binary equivalent: "); hexToBinary(hexNum);

printf("\n");

return 0;
}
