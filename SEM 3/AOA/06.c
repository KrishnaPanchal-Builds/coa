// To implement Sum of Subset Algorithm using Backtracking Method.

#include <stdio.h>

int w[20], x[20], n, m;

void sumOfSubset(int k, int sum, int rem)
{
    int i;

    if (sum == m)
    {
        printf("Subset: { ");
        for (i = 1; i <= n; i++)
        {
            if (x[i] == 1)
                printf("%d ", w[i]);
        }
        printf("}\n");
        return;
    }

    if (k > n || sum > m || sum + rem < m)
        return;

    x[k] = 1;
    sumOfSubset(k + 1, sum + w[k], rem - w[k]);

    x[k] = 0;
    sumOfSubset(k + 1, sum, rem - w[k]);
}

int main()
{
    int i, total = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w[i]);
        total = total + w[i];
        x[i] = 0;
    }

    printf("Enter the required sum: ");
    scanf("%d", &m);

    printf("Subsets with sum %d are:\n", m);
    sumOfSubset(1, 0, total);

    return 0;
}
