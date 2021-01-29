#include <stdio.h>

// Fibonacci Series : 0, 1, 1, 2, 3, 5, 8, 13,..........

// Generate the Fibonacci series till the n-th term

void main() 
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("\n Enter the number of terms: ");

    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
	{
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}

