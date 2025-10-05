#include <stdio.h>
#include <string.h>  // for memset

// Counting Sort function
void countingSort(int arr[], int n) {
    int i;
    
    // Find the maximum element
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Initialize count array
    int count[max + 1];
    memset(count, 0, sizeof(count));

    // Store count of each element
    for (i = 0; i < n; i++)
        count[arr[i]]++;

    // Modify arr[] to have sorted elements
    int index = 0;
    for (i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

// Main function
int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    countingSort(arr, n);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
