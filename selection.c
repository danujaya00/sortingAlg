#include <stdio.h>
int array[] = {22, 1, 12, 91, 53, 6};
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
    int min;
    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j =(i+1); j < (6); j++)//if we use 5 it stops before the last element
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(&array[i], &array[min]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", array[i]);
    }
}