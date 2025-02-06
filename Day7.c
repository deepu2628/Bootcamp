
//program to sort array which contains only
#include <stdio.h>

void sortArray(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0 ,i;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else if (arr[i] == 2) {
            count2++;
        }
    }
    
    int i = 0;
    
    for ( ;i < count0; i++) {
        arr[i] = 0;
    }
    for ( ;i < count0 + count1; i++) {
        arr[i] = 1;
    } 
    for ( ;i < n; i++) {
        arr[i] = 2;
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 0, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf(" array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sortArray(arr, n);
    printf("Sorted_array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}


//UnionArrays

/* #include <stdio.h>
void unionOfArrays(int arr1[], int e1, int arr2[], int e2) {
    int i = 0, j = 0;
    printf("Union: ");
    while (i < e1 && j < e2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        }
        else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < e1) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < e2) {
        printf("%d ", arr2[j]);
        j++;
    }
    
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1,2,9,8,7,6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    
    unionOfArrays(arr1, n1, arr2, n2);
    

return 0;
}*/

