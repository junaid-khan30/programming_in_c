/* datatype : */
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num<0){
        printf("The entered number %d is negative\n ",num);
    }if(num>0){
        printf("The entered number %d number is positive\n",num);
    }
    if(num==0){
        printf("The number is neither + nor - \n");
    }
    return 0;
}