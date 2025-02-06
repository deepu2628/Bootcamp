#include<stdio.h>
#include<string.h>
#include<ctype.h>
//1.function to find the factorial of a number.
/*
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial is not defined for negative numbers.\n");

    }else{
        printf("Factorial of %d is %d\n",num,factorial(num));
    }
    return 0;
}
*/

//2.function to print fibonacci sequence.
/*
int fibonacci(int n){
    int first=0,second=1,next;
    printf("Fibonacci sequence up to %d terms:\n",n);
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d ",first);
            continue;
        }
        if(i==1){
            printf("%d ",second);
            continue;
        }
        next=first + second;
        first=second;
        second=next;
        printf("%d ",next);
    }
    printf("\n");

}
int main(){
    int terms;
    printf("Enter the number of terms in fibonacci sequence:");
    scanf("%d",&terms);
    if(terms<=0){
        printf("Please enter a positive integer:");
    }else{
        fibonacci(terms);
    }
    return 0;
}
*/

//3.function to find sum of n natural number.
/*
int main(){
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of natural number is %d ",sum);
    return 0;
}
*/

//4.function to print the nth term of fibonacci series.
/*
int fibonacci(int n){
    if(n<=1){
        return n;

    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the term number(n):");
    scanf("%d",&n);
    printf("The %dth term of the fibonacci series is: %d\n",n,fibonacci(n));
    return 0;
}
*/

//5.function to print number 1 to n.
/*
int main(){
    int n,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(n=1;n<=num;n++){
        printf("%d ",n);
        
    }
    return 0;
}
*/

//6.function to find the sum of digit of number.
/*
int main(){
    int num,sum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0){
        remainder=num % 10;
        sum +=remainder;
        num/=10;
    }
    printf("The sum of the digit is %d\n",sum);

    return 0;
}
*/

//7.function to print number from n to 1.
/*
int main(){
    int n,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(n=num;n>=1;n--){
        printf("%d ",n);
    }
    return 0;
}
*/

//8.function to find the power of two using recursion.
/*
int powerOfTwo(int n){
    if(n==0){
        return 1;
    }
    return 2*powerOfTwo(n-1);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("power of %d is %d\n",n,powerOfTwo(n));

    return 0;
}
*/

//9.function to count the digit in a number using recursion.
/*
int countDigit(int num){
    if(num==0){
        return 0;
    }else{
        return 1 + countDigit(num/10);
    }
}
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number<0){
        number=-number;
    }
    printf("The number of digit is: %d\n",countDigit(number));
    return 0;
}
*/

//10.function to reverse a string using recursion.
/*
void reverseString(char str[],int start,int end){
    if(start>=end)
        return;
    
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;

    reverseString(str,start+1,end-1);

}
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]='\0';
    int length=strlen(str);
    reverseString(str,0,length-1);
    printf("Reversed string: %s\n",str);
    return 0;
}
*/

//11.function to check if a string is palindrome using recursion.
/*
int isPalindrome(char str[],int start,int end){
    if(start>=end)
    return 1;
    if(tolower(str[start])!=tolower(str[end]))
    return 0;

    return isPalindrome(str,start+1,end-1); 
}
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int length=strlen(str);
    if(isPalindrome(str,0,length-1)){
        printf("The string is a palindrome.\n");
    }else{
        printf("The sing is not a palindrome.\n");
    }
    return 0;
}
*/

//12.function to find the GCD.
/*
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    printf("The GCD of %d and %d is: %d\n",num1,num2,gcd(num1,num2));
    return 0;
}
*/

//13.function to perform binary search.

int BinarySearch(int n, int key, int arr[]){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={4,5,2,3,7,10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the element to search:");
    scanf("%d",&key);
    int result=BinarySearch(n,key,arr);
    if(result==-1){
        printf("Element %d is not found\n",key);
    }else{
        printf("Element %d found at index %d\n",key,result);
    }
return 0;
}