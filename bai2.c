#include <stdio.h>

int check(int num);
int main()
{
    int num[100] , i , n ;
    printf("Nhap n : ");
    scanf("%d" , &n);

    for(i=0 ; i < n ; i++)
    {
        printf("Nhap so num[%d]" , i+1);
        scanf("%d" , &num[i]);
    }
    for(i=0 ; i < n ; i++)
    {
        int x ;
        x = check(num[i]);
        if(x==0 ){
            printf("%d la boi so cua 50\n" , num[i]);
        }
        if(x==1){
            printf("%d khong la boi cua 50 \n" , num[i]);
        }
    }
   
    
}
int check(int num)
{
    if(num%50==0)
    {
        return 0;
    } else return 1;
}
