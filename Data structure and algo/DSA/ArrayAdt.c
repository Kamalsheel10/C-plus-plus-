#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void creatArray(struct myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("The marks of the student %d is %d\n", i + 1, (a->ptr)[i]);
    }
}
void set(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the marks: ");
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myArray marks;
    creatArray(&marks, 10, 2);
    set(&marks);
    show(&marks);

    return 0;
}