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

//    Program to print an array in reverse order
    printf("\nPrint the array in reverse\n");
    for(loop=n-1; loop>=0; loop-- ) //here is the change
    {
        printf("%d \t", A[loop]);
    }
//    Program to calculate sum of an array
    int sum=0;
    for(loop=0; loop<n; loop++)
    {
        sum=sum+ A[loop]; //just like as series sum
    }
    printf("\nThe sum of array %d\n", sum);

//    Program to calculate average of an array
    float avg = sum / n;
    printf("\nAverage of array values is %.2f\n", avg);

    int largest = A[0];
    for(loop = 1; loop < n; loop++) {
        if( largest < A[loop] )
            largest = A[loop];
    }

    printf("\nLargest element of array is %d\n", largest);

    int smallest = A[0];

    for(loop = 1; loop < n; loop++) {
        if( smallest > A[loop] )
            smallest = A[loop];
    }

    printf("\nSmallest element of array is %d\n", smallest);

    return 0;
}