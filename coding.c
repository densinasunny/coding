#include <stdio.h>
void main()
{
    int  j, sum = 0;

    printf("input number :\n");
 
    for (j = 1; j <= 4; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nsum of digits : %d\n", sum);
}
