//THIS CODE IS FOR CALCULATING TAX ACCORDING TO INCOME AND MARITAL STATUS
#include <stdio.h>
int main() {
    float income,tax;
    char maritalStatus;
    
    printf("Enter your income in Rs: ");
    scanf("%f", &income);
    printf("Enter your marital status (S/M): ");
    scanf(" %c", &maritalStatus);
    if(income>250000 && income<=500000 && maritalStatus=='S')
    {
        tax=0.02*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else if(income>250000 && income<=500000 && maritalStatus=='M')
    {
        tax=0.05*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else if(income>500000 && income<=1000000 && maritalStatus=='S')
    {
        tax=0.05*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else if(income>500000 && income<=1000000 && maritalStatus=='M')
    {
        tax=0.1*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else if(income>1000000 && maritalStatus=='S')
    {
        tax=0.1*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else if(income>1000000 && maritalStatus=='M')
    {
        tax=0.2*income;
        printf("Tax to be paid: Rs. %.2f", tax);
    }
    else
    {
        printf("No tax to be paid");
    }
    return 0;
}

