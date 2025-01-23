// What is while loop

// A while loop is a repeating statement that executes a block of code as long as a specified condition is true.

// Syntax:

// while (condition) {
    // block of code
// }

// Example - 1

#include<stdio.h>

int main() {
    
    // 1,... - True
    // 0 - False
    // infinity while
    int infinity = 1;
    
    while(infinity){
        printf("Tops Technologies Pvt. Ltd.\n");
    }


    return 0;
}


// # Example- 2

#include<stdio.h>

int main() {
    
    // 1,... - True
    // 0 - False
    // infinity while
    int infinity = 0;
    
    while(infinity){
        printf("Tops Technologies Pvt. Ltd.\n");
    }


    return 0;
}


// # Example - 3

#include<stdio.h>

int main() {
    
    // 1,... - True
    // 0 - False
    // infinity while
    int infinity = 1;
    int score;
    
    while(infinity){
        printf("Enter your score : ");
        scanf("%d", &score);
        
        printf("You entered a score is: %d\n", score);
       
    }


    return 0;
}

// # Example - 4

#include<stdio.h>

int main() {

    // finite while
    int start = 1, end = 10;
    
    while(start <= end){
        printf("%d\n", start);
        start++;
        // start += 1;
        // start = start + 1;
    }


    return 0;
}

// # Example - 5

#include<stdio.h>

int main() {

    // finite while
    int start = 1, end = 15, table = 4;
    
    while(start <= end){
        printf("%d * %d = %d\n",table, start, table*start);
        start++;
        // start += 1;
        // start = start + 1;
    }


    return 0;
}