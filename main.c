#include <stdio.h>
int main(){
    int choise;
    char name[20];
    printf("\t\t///////////////////////*WELCOME TO AB CALCULATOR*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    printf("Enter Your name\t");
    scanf("%s", &name);
    printf("You are welcome %s\t **which operation do you want to perform**\t", name);
    printf("\n(1)Addition");
    printf("\n(2)Multiplication");
    printf("\n(3)Division");
    printf("\n(4)Subtraction");
    // collecting user choice
    printf("\nEnter your choice::");
    scanf("%d", &choise);
    // condition
    switch (choise)
    {
    case 1:
        int num1, num2, sum;
        printf("\nEnter first number:");
        scanf("%d", &num1);
        printf("\nEnter second number:");
        scanf("%d", &num2);
        sum = num1 + num2;
        printf("\nThe sum of your numbers is %d", sum);
        break;
    case 2:
        int n1, n2, s;
        printf("Enter first number:");
        scanf("%d", &n1);
        printf("Enter the second number:");
        scanf("%d", &n2);
        s = n1 * n2;
        printf("\nthe multiplication of your numbers is %d", s);
    case 3:
        int N1, N2, N3;
        printf("Enter first number");
        scanf("%d", &N1);
        printf("Enter the second number");
        scanf("%d", &N2);
        N3 = N1 / N2;
        printf("the division of your numbers is %d", N3);
    case 4:
        int i, p, q;
        printf("Enter the first number");
        scanf("%d", &i);
        printf("Enter the second number");
        scanf("%d", &p);
        q = i - p;
        printf("the subtraction of your numbers is %d", q);


            default :
                printf("\nIT SEEMS LIKE YOU CHOOSE INVALID INPUT");
                break;
    }


    return 0;
}