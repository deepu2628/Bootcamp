
//Q.1 To find the sum of digits
/*#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0;  
    return (num % 10) + sumOfDigits(num / 10);  
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;  
    }
    printf("Sum of the digits: %d\n", sumOfDigits(num));

return 0;
}*/

// Q2.find the index given key
#include<stdio.h>
int returnIndex(int arr[],int n,int key){
    
    for(int i=0;i<=n;i++)
        if(arr[i]==key){
        return i;
     }

        return -1;
     
}
int main(){
    int arr[]={5,7,10,1,2,3,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("enter key:");
    scanf("%d",&key);
    int i=returnIndex(arr,n,key);
    if(i==-1){
        printf("key not found");
    }else{
        printf("key found at %d",i);
    }
return 0;

}