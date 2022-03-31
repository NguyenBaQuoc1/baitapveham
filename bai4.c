#include <stdio.h>

int indexmin(int num[] , int i);
void main()
{
    int num[10] , i  , x;
    for(i=0 ; i < 10 ; i++)
    {
        printf("Nhap num[%d]" , i+1);
        scanf("%d" ,&num[i]);
    }
    indexmin(num,10);
    x=indexmin(num,10);
    printf("So be nhat la %d" , x);
}
int indexmin(int num[] , int i)
{
    int temp , min;
    min = num[0];
    for(i=1 ; i < 10 ; i++)
    {
        if(num[i] < min){
            min=num[i];
        }
    }
    return min;
}