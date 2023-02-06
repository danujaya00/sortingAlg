#include <stdio.h>
int array[] = {1, 23, 12, 91, 53, 6};
int swap(int *v1, int *v2)
{
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
    return 0;
}
int main()
{
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < (5-j); i++)//if this comes 6 it checks last value with lv+1 basically 0
        {
            if (array[i] > array[i + 1])
            {
                swap(&array[i], &array[i + 1]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", array[i]);
    }
}