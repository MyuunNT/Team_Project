
#include <stdio.h>


// Function for division (with zero check)
double div(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;  // Return 0 on error, but ideally handle better
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to consume newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
           //result = add(num1, num2);
            break;
        case '-':
            //result = sub(num1, num2);
            break;
        case '*':
            //result = mul(num1, num2);
            break;
        case '/':
            result = div(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %g\n", result);
    return 0;
    //coba kek gimana tes tes tes
}
 