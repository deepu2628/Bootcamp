//WPA factorial using recursion
/*#include <stdio.h>
// Function to calculate factorial using recursion
long long factorial_recursive(int n) {
    if (n == 0 || n == 1) 
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Compute factorial using both methods
        
        printf("Factorial (Recursive) of %d is: %lld\n", num, factorial_recursive(num));
    }

return 0;
}*/

//fibonacci sequence

/*#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input: Number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
return 0;
}*/

//WAP SUM OF NATURAL NUMBER

/*/#include <stdio.h>

// Recursive function to calculate sum
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    printf("Sum of first %d natural numbers = %d\n", n, sumOfNaturalNumbers(n));

return 0;
}*/
//fibonacci serise
/*#include<stdio.h>

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
        int main(){
            int n ;
            printf("Enter n :");
            scanf("%d",&n);
            printf("The %d th term of fibonacci serise is :%d\n",n,fibonacci(n));
            return 0;
        }*/

       // ArmStrongs
     /** #include<stdio.h>
      #include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate sum of nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

return 0;
}*/

//cube_free
#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer n:");
    scanf("%d",&n);
    int a=find_largest_cube_divisior(n);
    int b=n/(a*a*a);

    if(is_cube_free(b)){
        printf("n=%d can be expressed as %d^3* %d where %disncube-free.\n",n,a,b,b);
    }
    else{
        printf("Error:b is not cube-free.check the logic.\n");
    }
    return 0;
}