#include <stdio.h>
int array[] = {22, 35, 4, 1, 21, 30};

int main()
{
    int temp, i;
    for ( i = 1; i < 6; i++)
    {
        temp=array[i];
        int j=i-1;
        while (j>=0 &&  array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    for (i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("\n");
}