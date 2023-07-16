#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first  numbers");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greater than %d & %d\n",a,b,c);
    }else if(b>a && b>c){
        printf("%d is greater than %d and %d\n",b,a,c);
    }else{
        printf("%d is greater than %d and %d\n",c,a,b);
    }return 0;
}