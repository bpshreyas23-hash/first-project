#include <stdio.h>

int main()
{
    int a = 0;
    float b, c;

    while (a != 5)
    {
        printf("=====================================\n");
        printf("        SIMPLE CALCULATOR\n");
        printf("=====================================\n");

        printf("Choose the operation you want to perform:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &a);

        if (a == 5)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &b, &c);

        switch (a)
        {
            case 1:
                printf("Result: %.2f\n", b + c);
                break;

            case 2:
                printf("Result: %.2f\n", b - c);
                break;

            case 3:
                printf("Result: %.2f\n", b * c);
                break;

            case 4:
                if (c == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %.2f\n", b / c);
                break;

            default:
                printf("Invalid operation\n");
        }
    }

    return 0;
}