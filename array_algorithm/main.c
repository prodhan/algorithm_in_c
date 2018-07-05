#include <stdio.h>

int main() {
    int n=0;
    printf("Enter the array size\n");
    scanf("%d", &n);
    int A[n];

//    Program to take input within an array
    int i;
    printf("Enter the array Items one by one\n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

//    Program to print an array
    int loop;
    printf("Print the array\n");
    for(loop = 0; loop < n; loop++) {
        printf("%d \t", A[loop]);
    }

    // program to insert operation into an array
    int location, value;
    printf("Enter a position to insert\n");
    scanf("%d", &location);
    printf("Enter a Value to insert\n");
    scanf("%d", &value);

    for(i=n-1; i>=location; i--){
        A[location+1] = A[location]; //Make a space to insert
    }

    A[location] = value; //assign the value on free location
    int na=n+1; //reform the array size

    printf("The array elements after insertion :\n");
    for(loop = 0; loop < na; loop++) {
        printf("%d \t", A[loop]);
    }

    // program to delete operation into an array
    int position;
    printf("Enter a position to delete\n");
    scanf("%d", &position);

    for(i=0; i<position; i++){
        A[position-1] = A[position]; //Make delete operation
    }

    n=n-1; //reform the array size

    printf("The array elements after deletion :\n");
    for(int l = 0; l <= n; l++) {
        printf("%d \t", A[l]);
    }
    return 0;
}