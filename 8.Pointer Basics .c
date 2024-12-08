 #include <stdio.h>
  int main() {
    int num = 20;
     int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)ptr);
    printf("Value at address %p: %d\n", (void*)ptr, *ptr);
    
    return 0;
}
 
