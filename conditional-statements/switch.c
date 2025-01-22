// switch case

// syntax:

// switch (expression) {

//     case constant1:
            // block of code;
            // break;

//     case constant2:
            // block of code;
            // break;

//     ...

//     default:
            // block of code;


// Example - 1:

#include <stdio.h>

int main() {
    
    // 0 - monday....6 - sunday
    int day = 18;
    switch(day+1){
        case 1:
            printf("Today is Monday");
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("Today is Wednesday");
            break;
        case 4:
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
        default:
            printf("Invalid day");
    }
    
    return 0;
}




// Example - 2:

#include <stdio.h>

int main() {
    
    char grade = 'A';
    switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Satisfactory");
            break;
        case 'D':
            printf("Needs improvement");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
    }
    
    return 0;
}