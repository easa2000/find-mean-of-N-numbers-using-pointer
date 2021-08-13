// find mean of n numbers using pointers
#include<stdio.h>
void main()
{
    int i, n, arr[20], sum = 0;
    int *pn = &n, *parr = &arr[0], *psum = &sum;
    float mean = 0.0, *pmean = &mean;

    printf("\n Enter the number of elements: ");
    scanf("%d",pn);

    printf("\n Enter the %d elements: ",*pn);
    for(i=0;i< *pn;i++)
        scanf("%d", parr + i);

    for(i=0;i<*pn;i++)
        *psum += *(parr + i);

    *pmean = (float) *psum / *pn;

    printf("\n The numbers you entered are: ");
    for(i=0;i<*pn;i++)
        printf("%d",*(parr + i));
        
    printf("\n The Sum is : %d",*psum);
    printf("\n The mean is : %.2f",*pmean);
       
}
