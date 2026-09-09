
#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 4, 3, 9, 0};
    int n = 6;

    // Traversing the array
    printf("Array elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Linear search
    int search = 9;
    int found = 0;

    printf("\nLinear Search\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("%d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("%d was not found in the array\n", search);
    }

    // Finding maximum element
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("\nMaximum element = %d\n", largest);

    // Finding minimum element
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Minimum element = %d\n", smallest);

    // Insertion at a particular position
    int value = 99;
    int position = 3;

    printf("\nInsertion\n");
    printf("Before insertion: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Shift elements to the right
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    printf("\nAfter inserting %d at index %d: ", value, position);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Insertion at the end
    arr[n] = 102;
    n++;

    printf("\nAfter inserting 102 at the end: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Deletion from a particular position
    int delete_position = 3;

    printf("\n\nDeletion\n");
    printf("Before deletion: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Shift elements to the left
    for (int i = delete_position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nAfter deleting element at index %d: ", delete_position);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Deletion of the last element
    n--;

    printf("\nAfter deleting the last element: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```
