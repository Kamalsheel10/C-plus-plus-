#include <stdio.h>
void display(int setA[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", setA[i]);
    }
    printf("\n");
}
int basic_insertion(int setB[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        setB[i + 1] = setB[i];
    }
    setB[index] = element;
}
int main()
{
    int set1[100] = {1, 2, 4, 5, 67, 889};
    int size = 6, element = 20, index = 4;
    display(set1, size);
    basic_insertion(set1, size, element, 100, index);
    size++;
    display(set1, size);
    return 0;
}