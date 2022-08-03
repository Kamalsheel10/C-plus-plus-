#include <stdio.h>
int binarySearch(int set1[], int size, int element)
{
    int high, low, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (set1[mid] == element)
        {
            return mid;
        }
        if (set1[mid] <= element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int setA[] = {1, 2, 3, 5, 69, 78, 89, 90, 99};
    int size = sizeof(setA) / sizeof(int);
    int element = 69;
    int searchIndex = binarySearch(setA, size, element);
    printf("The element at %d was found at index %d", element, searchIndex);
    return 0;
}