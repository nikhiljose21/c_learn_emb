#include "calcfun.h"


int main()
{
    char op;
    float num1, num2, result=0.0f;


    printf("Input two numbers \n");
    scanf("%f %f", &num1, &num2);

    printf("Select the operation to perform [+ - * /] \n");
    scanf("%c", &op);


    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    /* Print the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}
