#include <stdio.h>

void shellSort(int arr[], int n) {
    for(int gap=n/2;gap>0;gap/=2) {
        for(int i=gap;i<n;i++) {
            int temp = arr[i];
            int j;
            for(j=i;j>=gap && arr[j-gap]>temp;j-=gap)
                arr[j] = arr[j-gap];
            arr[j]=temp;
        }
    }
}

int main() {
    int n;
    printf("Shell Sort\nEnter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    shellSort(arr,n);

    printf("Sorted array: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
