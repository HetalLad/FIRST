#include <stdio.h>

int main() 
{
    int a,b;
    printf("\n ENTER THE VALUES OF A AND B:");
    scanf("%d%d",&a,&b);
    //swapping two numbers
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n THE VALUES OF A AND B ARE %d AND %d.",a,b);
    
    return 0;
}
