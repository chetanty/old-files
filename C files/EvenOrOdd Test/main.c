#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is EVEN");
    }
    else{
            printf("The number is ODD");
            }
    return 0;
}
