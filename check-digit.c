#include<stdio.h>
int main(){

    int num1,num2;
    
    printf("Enter the first number here : ");
    scanf("%d",&num1);

    printf("Enter the second number here : ");
    scanf("%d",&num2);

    int test1 = num1,test2 = num2;
    int count1 = 0,count2 = 0;

    while (test1 != 0){
        test1 = test1/10;
        count1++;
    }
    while (test2 != 0){
        test2 = test2/10;
        count2++;
    }

    int count = count1,a,b;

    if(count1 == count2){
        while(count != 0){
            a = num1%10;
            b = num2%10;
            num1 = num1/10;
            num2 = num2/10;
            if(a == b){
                count--;
            }
            else{
                printf("The both number you enter is not same!!!!!!!!");
                break;
            }
        }
    }
    else{
        printf("The both number you enter is not same!!!!!!!!");
    }

    if(count == 0){
        printf("The both number you enter is same!!!!!!!!");
    }

    return 0;
}