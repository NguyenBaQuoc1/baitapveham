#include <stdio.h>
float check2(float cc , float cn , float ht );
float check(float cc , float cn , float ht );
int say(h);
void Break(int ans);
void Love(int ans);
void main()
{
    float cc , cn , ht ;
    float Tcc , Tcn , Tht ;
    int x , y ;
    char ans = 1 ;
    char h ; 
    printf("Nhap tieu chuan cua ban\n");
    printf("===========\n");
    printf("Chieu cao : ");
    scanf("%f" , &cc);
    printf("Can nang : ");
    scanf("%f" , &cn);
    printf("Hoc thuc : ");
    scanf("%f" , &ht);
    printf("Nhap tieu chuan cua doi tuong thuc te\n");
    printf("Chieu cao : ");
    scanf("%f" , &Tcc);
    printf("Can nang : ");
    scanf("%f" , &Tcn);
    printf("Hoc thuc : ");
    scanf("%f" , &Tht);
    x=check2(cc,cn,ht);
    y=check(Tcc,Tcn,Tht);
    if(x<y){
        printf("Hay la minh bat chap het yeu nhau di em <3 ?");
        printf("Y or N ?");
        fflush(stdin);
        h=getchar();
        if(ans == say(h)){
            Love(ans);
        }else Break(ans);
    } else printf("Khong du yeu cau");
}
float check(float cc , float cn , float ht )
{
    float k ; 
    k = (cc + cn + ht)/3;
    return k ;
}
float check2(float Tcc , float Tcn , float Tht )
{
    float s ;
    s= (Tcc + Tcn + Tht)/3;
    return s ;
}
int say(h)
{
    if(h == 'Y' || h == 'y')
    {
        return 1;
    } 
    return 0;
}
void Break(int ans)
{
    printf("Tiep tuc kiep FA 22 NAM");
}
void Love(int ans)
{
    printf("The la da co ny");
}