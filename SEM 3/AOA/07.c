// To implement Fractional Knapsack using Greedy Method.

#include <stdio.h>

int main()
{
    int n, i, j, capacity;
    float weight[20], profit[20], ratio[20], x[20];
    float temp, totalProfit = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weight and profit of each item:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &weight[i], &profit[i]);
        ratio[i] = profit[i] / weight[i];
        x[i] = 0;
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &capacity);

    /* Sort items in decreasing order of profit/weight ratio */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ratio[j] < ratio[j + 1])
            {
                temp = ratio[j];   ratio[j] = ratio[j + 1];   ratio[j + 1] = temp;
                temp = weight[j];  weight[j] = weight[j + 1]; weight[j + 1] = temp;
                temp = profit[j];  profit[j] = profit[j + 1]; profit[j + 1] = temp;
            }
        }
    }

    float remaining = capacity;

    for (i = 0; i < n; i++)
    {
        if (weight[i] <= remaining)
        {
            x[i] = 1;
            remaining = remaining - weight[i];
            totalProfit = totalProfit + profit[i];
        }
        else
        {
            x[i] = remaining / weight[i];
            totalProfit = totalProfit + x[i] * profit[i];
            break;
        }
    }

    printf("\nItem  Weight  Profit  Fraction taken\n");
    for (i = 0; i < n; i++)
        printf("%d     %.1f     %.1f     %.2f\n", i + 1, weight[i], profit[i], x[i]);

    printf("\nMaximum profit = %.2f\n", totalProfit);

    return 0;
}
