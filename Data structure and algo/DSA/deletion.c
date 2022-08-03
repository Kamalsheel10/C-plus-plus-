#include <stdio.h>
void display(int set1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", set1[i]);
    }
    printf("\n");
}
void inddeletion(int set1[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        set1[i] = set1[i + 1];
    }
}
int main()
{
    int setA[100] = {1, 2, 4, 5, 69, 78};
    int size = 6, index = 2;
    display(setA, size);
    inddeletion(setA, size, index);
    size--;
    display(setA, size);

    return 0;
}