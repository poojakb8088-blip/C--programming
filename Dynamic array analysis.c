#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max, min, sum = 0;
    int search, count = 0, found = 0;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if(a == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    max = min = a[0];

    for(i = 0; i < n; i++)
    {
        sum += a[i];

        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", (float)sum / n);

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            count++;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    printf("\nFrequency = %d", count);

    printf("\nReverse array: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    free(a);

    return 0;
}