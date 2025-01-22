// if ... else if

// syntax:

// if (condition) {
    // block of code
// } else {
    // block of code
// }

// Example - 1:

#include <stdio.h>

int main() {
    
    int bal = 1000, wb = 1500;
    
    if (wb <= bal){
        printf("Withdrow successfully. \nNow, your remaining amount is: %d", bal-wb);
    }else{
        printf("Insufficent balance");
    }

    return 0;
}


//  Example - 2:
#include <stdio.h>

int main() {
    
    int num = 5;
    
    if (num % 2 == 0){
        printf("%d is  Even", num);
    }else{
        printf("%d is odd", num);
    }
    return 0;
}