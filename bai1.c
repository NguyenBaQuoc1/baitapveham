#include <stdio.h>
#include <math.h>

float getarea(float a , float b , float c);
int main()
{
    float a ,  b , c  ;
    printf("Nhap a , b , c :");
    scanf("%f%f%f" , &a , &b , &c );

    if((a+b>c) && (a+c)>b && (c+b)>a){
        printf("Dien tich tam giac la : %f" , getarea(a,b,c));
    }else printf("Du lieu khong hop le");
}
float getarea(float a , float b , float c)
{
    float s , p ;
    p = (a + b + c)/2 ; 
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s ;
}