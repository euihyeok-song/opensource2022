// Assignment 4(수정본) 

#include <stdio.h>

// disp_menu함수를 void형을 짜고 printf문으로 구성하여 main함수에서 disp_menu함수를 부를때 메뉴가 출력되도록 구성함.
void disp_menu(){
    printf("1.덧셈\n");
    printf("2.뺄셈 \n");
    printf("3.곱셈\n");
    printf("4.나눗셈\n");
    printf("5.나머지\n");
    printf("6.종료\n");
}

// add/sub/mul/div 함수를 실수형으로 짜고 매개변수 x,y를 받아 각각의 함수에 맞는 계산결과를 return 하도록 구성함.
double add(double x, double y){
    return x+y;
}

double sub(double x, double y){
    return x-y;
}

double mul(double x, double y){
    return x*y;
}

double div(double x, double y){
    return x/y;
}
           
double rem(double x, double y){
    return x%y;

// main함수내에서는 계산기를 만드는 프로그램이므로 계속적으로 메뉴를 선택하고 원하는 연산을 하기위해 while문으로 구성함.
// while문은 무한루프로 구성하였으며, while문이 돌때마다 disp_menu함수를 사용하여 메뉴가 계속 출력되게 하였고, 메뉴번호를 받아서 해당 계산에 이용되는 함수를 사용할 수 있게 함.
// disp_menu에서 5번.종료라는 항목을 추가하여, 계산기와 같이 연산결과 출력 후 계속해서 반복되다가 5번을 입력받으면 break되면서 계산기가 종료되도록 구성함.
// disp_menu에서 필요한 연산함수에 대한 번호를 입력하면 그에 맞춰서 실수를 2개 입력받아 해당하는 연산함수에 대입하여 결과가 나오도록 출력함.
int main(void)
{   
    int i;
    double x, y;
    while(1)
    {
        disp_menu();
        printf("번호를 선택하세요:");
        scanf("%d",&i);
        if ( i== 6 )
            break;
        printf("실수를 입력하시오:");
        scanf("%lf",&x);
        printf("실수를 입력하시오:");
        scanf("%lf",&y);
        if (i == 1)
        {
            printf("연산결과=%lf\n",add(x,y));
        }
        else if ( i == 2)
        {
            printf("연산결과=%lf\n",sub(x,y));
        }
        else if (i == 3)
        {
            printf("연산결과=%lf\n",mul(x,y));
        }
        else if (i = 4 )
        {
            printf("연산결과=%lf\n",div(x,y));
        }
        else
        {
            printf("연산결과=%lf\n",rem(x,y));
        }
    }
    return 0;
}
