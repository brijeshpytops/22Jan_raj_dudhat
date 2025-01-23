// what is for loop in c

// A for loop is a control flow statement that allows you to execute a block of code a specified number of times.

// Syntax:

// for (initialization; condition; increment/decrement) {
    // block of code
// }


// Example - 1 :

#include<stdio.h>

int main() {
    int table = 4;
   for(int start = 1; start<=10; start+=1){
       printf("%d * %d = %d\n",table, start, table*start);
   }

    return 0;
}

// Example - 2 :

#include<stdio.h>

int main() {
   for(int start = 1; start<=10; start+=1){
       printf("%d\n", start);
   }

    return 0;
}


// Example - 3 :

#include<stdio.h>

int main() {
   for(int start = 10; start>=0; start--){
       printf("%d\n", start);
   }
    return 0;
}


// Example - 4 :

#include<stdio.h>

int main() {
   for(int start = 10; 1==1; start--){
       printf("%d\n", start);
   }
    return 0;
}

// Example - 5 :

#include<stdio.h>

int main() {
   for(int start = 1; start<=10; start++){
       printf("Square: %d - Cube: %d\n ", start*start, start*start*start);
   }
    return 0;
}