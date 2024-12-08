   #include <stdio.h>
int main() {
    char ch;
    float n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    switch (ch) {
        case '+':
             printf("Result: %.2f\n", n1 + n2);
              break;
        case '-':
             printf("Result: %.2f\n", n1 - n2);
              break;
        case '*':
             printf("Result: %.2f\n", n1 * n2);
              break;
        case '/':
            if (n2 != 0)
                printf("Result: %.2f\n", n1 / n2);
            else
                printf("Error: Division by zero.\n");
            break;

        default:
            printf("Invalid operator\n");
    }
    return 0;
}
