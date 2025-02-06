#include<stdio.h>

//1.print all the sub array.
/*
int subArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf("%d",arr[k]);
            }
            printf("\n");
        }
    }
}
int main(){
    int arr[]={5,3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    subArray(arr,n);
    return 0;
}
*/

//2.maximum sum of sub arrays.
/*
int maxsum(int arr[],int n){
    int start=arr[0];
    int end=arr[0];
    for(int i=0;i<n;i++){
        start=arr[i]>end+arr[i]?arr[i]:end+arr[i];
        start=(start>end)?start:end;
    }
    return start;
}
int main(){
    int arr[]={-5,4,3,6,4,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxsum(arr,n);
    printf("maximum sum of subarray is %d\n",result);
    return 0;
  */

 //3.find to k size of sub array.
 /*
 int sizeofSubArray(int arr[],int k,int n){
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            printf("%d",arr[j]);
        }
        printf("\n");
    }
 }
 int main(){
    
    int n,k;
    printf("Enter the size of array array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of subarray:");
    scanf("%d",&k);
    if(k>n||k<=0){
        printf("Invalid subarray size.\n");
        return 1;
    }
    printf("subarray of size %d are \n",k);
    sizeofSubArray(arr,k,n);
    return 0;
 }
 */
//4.sum of k size of array.
/*
int sumofKSize(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum +=arr[i];
    }
    printf("sum of first subarray: %d\n",sum);
    for(int i=k;i<n;i++){
        sum +=arr[i]-arr[i-k];
        printf("sum of subarray starting at index %d: %d\n",i-k+1,sum);
    }
}
int main(){
    
    int n,k;
    printf("Enter the size of array array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of subarray:");
    scanf("%d",&k);
    if(k>n||k<=0){
        printf("Invalid subarray size.\n");
        return 1;
    }
    sumofKSize(arr,n,k);
    return 0;
 }
 */
/*

// Q5.Function to print the union of two arrays

void printUnion(int arr1[], int size1, int arr2[], int size2) {
    printf("Union of the two arrays: ");
    
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");
}

// Q6. Function to print the intersection of two arrays

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the two arrays: ");
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, size1, arr2, size2);

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}
*/

//Q7.Function to check set bit
/*int main() {
    int num, n;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to check (0-based index): ");
    scanf("%d", &n);

    if (num | (1 << n))
        printf("Bit %d is SET (1).\n", n);
    else
        printf("Bit %d is NOT SET (0).\n", n);

  return 0 ;
}/**/
