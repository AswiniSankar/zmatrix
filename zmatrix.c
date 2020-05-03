/*
enter the limit for matrix
3
3
enter the elements
1
2
3
4
5
6
7
8
9
   1   2   3
   4   5   6
   7   8   9


   1    2    3 
        5      
   7    8    9 


*/
#include<stdio.h>
int main()
{
  int i,j,r,c,a[20][20];
  printf("enter the limit for matrix\n");
  scanf("%d%d",&r,&c);
  printf("enter the elements\n");
  for(i=0;i<r;i++)
   for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
 for(i=0;i<r;i++)
   {for(j=0;j<c;j++)
     printf("%4d",a[i][j]);
    printf("\n");}
  printf("\n\n");
  for(i=0;i<r;i++)
  {for(j=0;j<c;j++)
    {
       if(i==0||(i+j)%(c-1)==0||i==r-1)
          printf("%4d ",a[i][j]);
       else
        printf("     ");
    }
    printf("\n");
  }
 printf("\n");
 return 0;
}
