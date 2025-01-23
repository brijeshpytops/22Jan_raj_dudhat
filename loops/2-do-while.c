// what is do while loop in c

// A do-while loop is a loop that executes a block of code once, then checks a condition before executing the block again.

// Syntax:

// do {
    // block of code
    // condition
// } while (condition);

// Example - 1:

#include<stdio.h>

int main() {
    
    int start = 1, end = 10, table = 4;
    
    do{
        printf("%d * %d = %d\n",table, start, table*start);
        start++;
    }while(start <= end);

    return 0;
}

