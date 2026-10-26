// To implement Min and Maximum finding algorithm.

#include <stdio.h>

void maxMin(int a[], int low, int high, int *max, int *min)
{
    int mid, max1, min1;

    if (low == high)
    {
        *max = a[low];
        *min = a[low];
    }
    else if (high == low + 1)
    {
        if (a[low] > a[high])
        {
            *max = a[low];
            *min = a[high];
        }
        else
        {
            *max = a[high];
            *min = a[low];
        }
    }
    else
    {
        mid = (low + high) / 2;
        maxMin(a, low, mid, max, min);
        maxMin(a, mid + 1, high, &max1, &min1);

        if (max1 > *max)
            *max = max1;
        if (min1 < *min)
            *min = min1;
    }
}

int main()
{
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxMin(a, 0, n - 1, &max, &min);

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
