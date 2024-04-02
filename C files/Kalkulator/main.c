#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    int choice;
    printf("Please enter the value of a and b:\n");
    scanf("%f%f",&a,&b);
   float s=a+b;
    float m=a-b;
     float p=a*b;
      float d=a/b;
      printf("1.Sum\n2.Subtract\n3.Product\n4.Divide\n");
      printf("Choose your option:\n");
      scanf("%d",&choice);
      switch(choice)
    {
    case 1:
        printf("%f\n",s);
        break;
    case 2:
        printf("%f\n",m);
        break;
    case 3:
        printf("%f\n",p);
        break;
    case 4:
        printf("%f\n",d);
        break;

    }

    return 0;
}
