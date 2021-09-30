//INITIALIZATION AND PRINTING OF AN ARRAY BY USING FUNCTIONS

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
int main()
{
      int num;
    printf("ENTER THE NUMBER\n");
     scanf("%d", &num);
     
     int arr[num];
     printf("ENTER THE NUMBERS IN AN ARRAY \n");
     read_array(arr,num);
     
      printf(" THE NUMBERS IN AN ARRAY ARE \n");
     display_array(arr,num);
     
     
    return 0;
}
