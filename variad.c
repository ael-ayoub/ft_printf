#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...) {
    int total = 0;// this //count //i 
    int i = 0;

    va_list args;   //args            // Declare a va_list variable
    va_start(args, count);     // Initialize it to start after 'count'

        va_arg(args,int);
        va_arg(args,int);
        va_arg(args,int);
        va_arg(args,int);
        total += va_arg(args,int);
        i++;

    va_end(args);               // Clean up the va_list
    return total;
}

int main() {
    printf("Sum: %d\n", sum(3, 1, 2, 3)); // Outputs Sum: 6
    return 0;
}
