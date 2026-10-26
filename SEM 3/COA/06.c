#include <stdio.h>

int main()
{
    int A = 0;          // Accumulator
    int Q, M;           // Quotient and Divisor
    int n = 8;          // Number of bits

    printf("Enter Dividend: ");
    scanf("%d", &Q);

    printf("Enter Divisor: ");
    scanf("%d", &M);

    // Restoring Division
    for(int i = 0; i < n; i++)
    {
        // Left shift [A,Q]
        A = (A << 1) | ((Q >> 7) & 1);
        Q = (Q << 1) & 255;

        // Subtract M from A
        A = A - M;

        if(A < 0)
        {
            // Restore A
            A = A + M;

            // Q0 = 0
            Q = Q & 254;
        }
        else
        {
            // Q0 = 1
            Q = Q | 1;
        }
    }

    printf("\nQuotient = %d", Q);
    printf("\nRemainder = %d", A);

    return 0;
}
