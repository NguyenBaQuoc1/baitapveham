#include <stdio.h>

void array(int arr[] , int n);

int main()
{
    int arr[5] , i ;
    for(i=0 ; i < 5 ; i++)
    {
        printf("Nhap arr[%d]" , i+1);
        scanf("%d" , &arr[i]);
    }
    array(arr,5);
}

void array(int arr[] , int n)
{
    int i ;
    printf("Array alements are:\n");
    for(i=n-1 ; i >= 0 ; i--)
    {
        printf("%d" , arr[i]);
    }
}
