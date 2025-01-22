// what is if in c

// if statement in C is used to execute a block of code only if a specified condition is true.

// Syntax:

// if (condition) {
    // block of code
// }

Example - 1 :
#include <stdio.h>

int main() {
    
    int bal = 1000, wb = 500;
    
    if (wb <= bal){
        printf("Withdrow successfully. \nNow, your remaining amount is: %d", bal-wb);
    }

    return 0;
}


Example - 2 :

#include <stdio.h>

int main() {
    
    int num = 0;
    
    if (num == 0){
        printf("Number is zero");
    }

    return 0;
}

// Note: The if statement in C is case-sensitive, meaning it will treat 'if' and 'IF' as different keywords.

// The if statement can be combined with other statements like else, else if, and switch. 