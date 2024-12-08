#include <stdio.h>
  void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d: ", n);
    printNumbers(n);
    printf("\n");
    return 0;
}
