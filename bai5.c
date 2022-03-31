#include <stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
float div(float a, float b);
void main()
{
    int a , b , lc  ;
    int k ;
    float ketqua;
    do{
        printf("Nhap a va b : ");
        scanf("%d%d" , &a , &b);       
        printf("Lua chon");
        printf("==========\n");
        printf("1.Tinh Tong\n");
        printf("2.Tinh Hieu\n");
        printf("3.Tinh Tich\n");
        printf("4.Tinh Thuong\n");
        printf("5.Thoat\n");
        printf("==========\n");
        printf("Chon : ");
        scanf("%d" , &lc);
        switch(lc)
        {
            case 1 : 
                    ketqua = sum(a,b);
                    printf("Tong a va b la %.f\n" , ketqua);
                    break;
            case 2 :
                    ketqua = sub(a,b);
                    printf("Hieu a va b la %.f\n" , ketqua);
                    break;
            case 3 : 
                    ketqua = multi(a,b);
                    printf("Tich a va b la %.f\n" , ketqua);
                    break;
            case 4 : 
                    ketqua = div(a,b);
                    printf("Thuong a va b la %.2f\n" , ketqua);
                    break;                   
        }
        printf("Nhap 5 de thoat\n");
        printf("Nhap 6 de tiep tuc\n");
        fflush(stdin);
        scanf("%d" , &k);
    }while( k != 5);
}
int sum(int a, int b)
{
    int s ;
    s = a + b ;
    return s;
}
int sub(int a , int b)
{
    int s ;
    s = a - b;
    return s;
}
int multi(int a , int b)
{
    int s ;
    s = a * b;
    return s;
}
float div(float a , float b)
{
    float s ;
    s = a / b;
    return s;
}