#include <stdio.h>
int linearSearch(int set1[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (set1[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int setA[] = {23, 344, 5667, 3, 234, 435, 234, 69};
    int element = 69, size = sizeof(setA) / sizeof(int);
    int searchindex = linearSearch(setA, size, element);
    printf("The element %d was found at the index %d", element, searchindex);
    return 0;
}