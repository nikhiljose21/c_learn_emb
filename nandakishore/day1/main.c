#include "calcfun.h"


int main()
{
    int opt;
    float num1, num2, result=0.0f;


    printf("Input two numbers \n");
    scanf("%f %f", &num1, &num2);

    printf("Select the choice(1-4) to perform the operation [1.Addition, 2. Subtraction, 3.Multiplication, 4.Division] \n");
    scanf("%d", &opt);


    switch(opt)
    {
        case 1: 
            result = add(num1, num2);
            break;

        case 2: 
            result = sub(num1, num2);
            break;

        case 3: 
            result = mult(num1, num2);
            break;

        case 4: 
            result = divi(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    /* Print the result */
    printf("%.2f %c %.2f = %.2f", num1, opt, num2, result);

    return 0;
}
