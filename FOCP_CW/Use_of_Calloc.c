#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *nums;
    int size;

    printf("Enter size of array");
    scanf("%d", &size);

    nums = (int *)calloc(size, sizeof(int));

    if(nums == NULL)
    {
        printf("Not Enough memory!\n");
        return 1;
    }

    printf("\nArray elements\n");

    // First loop
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(nums+i));
    }

    // Second loop
    for(int i = 0; i < size; i++)
    {
        printf("Enter numbers : ");
        scanf("%d", nums+i);
    }

    printf("\nArray elements\n");

    // Third loop
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(nums+i));
    }

    free(nums);

    return 0;
}
