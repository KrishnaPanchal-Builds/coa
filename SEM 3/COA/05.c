#include <stdio.h>
int main()
{
    int multiplicand, multiplier;
    int product;
    printf("Enter multiplicand: ");
    scanf("%d", &multiplicand);
    printf("Enter multiplier: ");
    scanf("%d", &multiplier);
    // Booth's Algorithm
    int A = 0;
    int Q = multiplier;
    int M = multiplicand;
    int Q_1 = 0;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int Q0 = Q & 1;

        if (Q0 == 1 && Q_1 == 0)
            A = A - M;
        else if (Q0 == 0 && Q_1 == 1)
            A = A + M;

        // Arithmetic right shift
        Q_1 = Q & 1;
        Q = (Q >> 1) | ((A & 1) << (n - 1));
        A = A >> 1;
    }

    product = (A << n) | (Q & ((1 << n) - 1));

    printf("Product = %d\n", product);

    return 0;
}
