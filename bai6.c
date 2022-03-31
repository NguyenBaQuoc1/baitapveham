#include <stdio.h>
float dientich(float chieudai , float chieurong);
float chuvi(float chieudai , float chieurong);
void main()
{  
    float chieurong , chieudai  , s , c , k;
    int lc ;
    do{      
        printf("Nhap chieu dai : \n");
        scanf("%f" , &chieudai);
        printf("Nhap chieu rong : \n");
        scanf("%f" , &chieurong);
        printf("===============");
        printf("Ban muon ? \n 1. Tinh dien tich \n 2. Tinh chu vi \n");
        scanf("%d" , &lc);
        switch(lc)
        {
            case 1 :
                    s=dientich(chieudai,chieurong);
                    printf("Dien tich la %.f\n" , s);
                    break;
            case 2 :
                    c=chuvi(chieudai,chieurong);
                    printf("Chu vi la %.f\n" , c);
                    break;
        }
        printf("Nhap ki tu bat ki de tiep tuc \n");
        printf("Nhap N de ket thuc \n");
        fflush(stdin);
        k = getchar();
    }while(k != 'N');
}
float dientich(float chieudai , float chieurong)
{
    int s ;
    s=(chieudai + chieurong) * 2;
    return s ;
}
float chuvi(float chieudai , float chieurong)
{
    int c ;
    c = chieudai * chieurong ;
    return c ;
}