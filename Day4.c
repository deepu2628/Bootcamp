
///Q.1 find the second largest element
#include <stdio.h>
#include <limits.h>  
// Function to find the second largest element
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements\n");
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1; // No second largest element found
    else
        return secondLargest;
}

// Main function to test the program
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1)
        printf("The second largest element is %d\n", secondLargest);
    else
        printf("No second largest element found\n");

return 0;
}


//Q2. To check the array is sorted
#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

// Main function to test the program
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    if (isSorted(arr, n))
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted.\n");

return 0;
}

#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left < right) {
        // Swap elements at left and right indices
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        // Move pointers towards the center
        left++;
        right--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the program
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    printf("Original array: ");
    printArray(arr, n);

    reverseArray(arr, n); // Reverse the array

    printf("Reversed array: ");
    printArray(arr, n);

return 0;
}

#include <stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n; // If array has 0 or 1 elements, return as is.

    int j = 0; // Index for the new unique elements array

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i]; // Store unique elements
        }
    }

    arr[j++] = arr[n - 1]; // Store the last element

    return j; // Return new array size
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the program
int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5}; // Sorted input array
    int n = sizeof(arr) / sizeof(arr[0]); // Array size

    printf("Original array: ");
    printArray(arr, n);

    // Function call to remove duplicates
    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    printArray(arr, n);

return 0;
}