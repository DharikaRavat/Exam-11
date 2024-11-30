#include <stdio.h>

int main() {
	
    int cal,num1,num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &cal);
    
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    
    printf("Enter two numbers: ");
    scanf("%d", &num2);

    switch (cal) {
        case '+':
            printf("Total : %d\n", num1 + num2);
            break;
        case '-':
            printf("Total : %d\n", num1 - num2);
            break;
        case '*':
            printf("Total : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Total : %d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator\n");
    }

}
