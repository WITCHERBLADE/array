//FIND THE LARGEST AND THE SMALLEST NUMBERS IN AN ARRAY BY USING FUNCTIONS

#include <stdio.h>
#define max 50
void read_array(int a[],int n)
{
      for(int i=0;i<n;i++)
      {
            scanf("%d", &a[i]);
      }
      
}
void display_array(int a[],int n)
{
      for(int i=0;i<n;i++)
      {
            printf("%d\n", a[i]);
      }
      
}
int largest_num(int a[],int n)
{
      int large=a[0];
      for(int i=1;i<n;i++)
      {
            if(a[i]>large)
            {
                  large=a[i];
            }
      }
      return large;
}
    int smallest_num(int a[],int n)
{
      int small=a[0];
      for(int i=1;i<n;i++)
      {
            if(a[i]<small)
            {
                  small=a[i];
            }
      } 
      return small;
}
int main()
{
      int num;
    printf("ENTER THE NUMBER\n");
     scanf("%d", &num);
     
     int arr[num];
     printf("ENTER THE NUMBERS IN AN ARRAY \n");
     read_array(arr,num);
     
    int LARGEST , SMALLEST;
     
    LARGEST= largest_num(arr,num);
   SMALLEST=smallest_num(arr,num);
     
     printf("THE LARGEST AND THE SMALLEST NUMBERS ARE %d AND %d ",LARGEST,SMALLEST);
 return 0;
}
