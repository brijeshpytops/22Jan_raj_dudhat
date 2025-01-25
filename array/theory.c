// What is a array in c?

// An array is a collection of elements of the same data type.

// Syntax:

// data_type array_name[size];

// singel dim.

// Example - 1:

#include<stdio.h>

int main() {
    int score[] = {
        10, 20, 30, 40, 50, 60, 70, 80, 90, 100
    };
    
    // array index always start with 0
    // Access element from array
    
    // printf("%d\n", score[0]);
    // printf("%d\n", score[1]);
    // printf("%d\n", score[2]);
    // printf("%d\n", score[3]);
    // printf("%d\n", score[4]);
    // printf("%d\n", score[5]); // provide grabage values or 0
    
    int len = sizeof(score)/sizeof(score[0]);
    
    for(int start = 0; start<len; start++){
        printf("%d\n", score[start]);
    }
    
    printf("Total size: %d", len);
    return 0;
}

// 2 Dim array

// syntax:

data_type array_name[row][col];

#include<stdio.h>

int main() {
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    
    // access elements of the 2D array
    
    // printf("%d\n", matrix[0][0]);
    // printf("%d\n", matrix[0][1]);
    // printf("%d\n", matrix[0][2]);
    // printf("%d\n", matrix[1][0]);
    // printf("%d\n", matrix[1][1]);
    // printf("%d\n", matrix[1][2]);
    return 0;
}