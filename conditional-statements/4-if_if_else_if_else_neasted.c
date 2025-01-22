// nested if and if ... else if

// syntax:

// if (condition1) {
    // if (condition2){
        // block of code
    // }else{
        // block of code
    // }
// else{
    // block of code
// }
    
// # Example-1:

#include <stdio.h>

int main() {
    
    int age = -25;
    
    if (age < 0){
        printf("Invalid age");
    }else{
        if (age >= 0 && age <= 10){
            printf("Child");
        } else if (age >= 11 && age <= 18){
            printf("Teenager");
        } else if (age >= 19 && age <= 65){
            printf("Adult");
        } else{
            printf("Senior Citizen");
        }
    }

    return 0;
}

// # Example-2:

#include <stdio.h>

int main() {
    
    int bill_unit = -1;
    
    if (bill_unit < 0){
        printf("Invalid bill unit");
    }else{
        if (bill_unit >= 0 && bill_unit <= 100){
            printf("Total amount : %d", bill_unit * 5);
        }else if (bill_unit >= 101 && bill_unit <= 200){
            printf("Total amount : %d", bill_unit * 6);
        }else if (bill_unit >= 201 && bill_unit <= 300){
            printf("Total amount : %d", bill_unit * 7);
        }else{
            printf("Total amount : %d", bill_unit * 8);
        }
    }
    return 0;
}
