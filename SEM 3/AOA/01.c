// To implement Insertion Sort and Comparative analysis of large values of 'n'.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int sizes[] = {1000, 5000, 10000, 20000, 50000};
    int count = 5, k, i;
    clock_t start, end;
    double timeTaken;

    printf("Insertion Sort - Comparative Analysis\n");
    printf("%-10s %-15s\n", "n", "Time (sec)");

    for (k = 0; k < count; k++)
    {
        int n = sizes[k];
        int *a = (int *)malloc(n * sizeof(int));

        for (i = 0; i < n; i++)
            a[i] = rand() % 100000;

        start = clock();
        insertionSort(a, n);
        end = clock();

        timeTaken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("%-10d %-15f\n", n, timeTaken);
        free(a);
    }
    return 0;
}
