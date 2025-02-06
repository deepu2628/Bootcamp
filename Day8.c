
//longest Even/Odd Subarray
/*#include<stdio.h>
int LengthEvenoddSubarray(int arr[],int n){
    int maxLength=1,Currentlength=1;
    for (int i=1;i<n;i++){

        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
         {

            Currentlength++;
    }
    else{
        if(Currentlength>maxLength){
            maxLength=Currentlength;
        }
        Currentlength=1;
    }
}
    return maxLength;
}

int main() {
    int arr[] = {5,3,1,2,7,4,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

   
    int length = LengthEvenoddSubarray(arr, n);
    printf(" longest Even/Odd   Length : %d\n", length);

return 0;
}*/


#include <stdio.h>

int findEquilibriumPoint(int arr[], int n) {
    
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Initialize left sum to 0
    int leftSum = 0;

    // Traverse the array to find the equilibrium point
    for (int i = 0; i < n; i++) {
        // Subtract the current element from the total sum to get the right sum
        totalSum -= arr[i];

        // Check if left sum equals right sum
        if (leftSum == totalSum) {
            return i; // Equilibrium point found
        }

        // Add the current element to the left sum for the next iteration
        leftSum += arr[i];
    }

    // If no equilibrium point is found, return -1
    return -1;
}

int main() {
    int arr[] = {2,3,-1,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibriumPoint(arr, n);

    if (equilibriumIndex != -1) {
        printf("Equilibrium point is at index %d\n", equilibriumIndex);
    } else {
        printf("No equilibrium point found\n");
    }

return 0;
}