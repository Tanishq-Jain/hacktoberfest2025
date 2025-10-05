#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Outer loop for each pass
    for (i = 0; i < n - 1; i++) {
        // Inner loop for pairwise comparisons
        for (j = 0; j < n - i - 1; j++) {
            // If current element is greater than next, swap them
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[100], n;

    // Taking array size input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calling bubble sort function
    bubbleSort(arr, n);

    // Printing sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
