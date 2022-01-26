#include <stdio.h>

int main()
{
    int n;
    printf("Enter a random number (1-5): \n");
    scanf("%d",&n);
    switch (n)
    {
        case 1: printf("FOOD ITEM: BURGER \n PRICE RS.129\n");
                break;
        case 2:printf("FOOD ITEM:FRENCH FRIES \n PRICE RS.99\n");
                break;
        case 3:printf("FOOD ITEM:PASTA \n PRICE RS.179\n");
                break;
        case 4:printf("FOOD ITEM:SANDWICH \n PRICE RS.149\n");
                break;
        case 5:printf("FOOD ITEM:PIZZA \n PRICE RS.239\n");
                break;
    }

    return 0;
}
