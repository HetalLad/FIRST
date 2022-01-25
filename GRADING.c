#include<stdio.h>
void main()
{
  int marks;
  printf("ENTER MARKS OBTAINED: \n");
  scanf("%d",&marks);
  if(marks>=90)
    printf("GRADE A\n");
  else if (marks >=80 && marks<90)
    printf("GRADE B\n");
  else if (marks >=70 && marks<80)
    printf("GRADE C\n");
  else if (marks >=60 && marks <70)
    printf("GRADE D\n");
  else
    printf("GRADE E\n");
}
