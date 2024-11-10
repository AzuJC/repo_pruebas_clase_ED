
/*Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient, and remainder. Do not use ChatGPT.*/

 #include <stdio.h>
 

int main (void)
{
    /*Declare variables*/
    float value_1;
    float value_2;
    float sum;
    float product;
    float difference;
    float quotient;
    float remainder;

    /*User inputs and storage in the variables*/
    printf("Enter first value");
    scanf("%f", &value_1);

    printf("Enter second value");
    scanf("%f", &value_2);

    /*Performing calculations and storage*/
    sum         = value_1 + value_2;
    product     = value_1 * value_2;
    difference  = value_1 - value_2;
    quotient    = value_1 / value_2;
    remainder   = value_1 % value_2;

    /*Printing results*/
    printf("-----------------Results-----------------#\n");
    printf("Sum: %f\n", sum);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", quotient);
    printf("Remainder: %f", remainder);

    return 0;
}
