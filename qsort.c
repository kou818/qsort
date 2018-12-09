#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q)
{

return (*(int *)p - *(int *)q);

}


int array[] = {100,3,200,4,300,2,400,5};

int main()
{

int index = 0;
int size = 0;

size = sizeof(array)/sizeof(array[0]);

qsort(array, size, sizeof(array[0]), compare);

for (index=0; index < size; index++)
{
printf("%d ", array[index]);
}

return (0);

}