#include <stdio.h>
#include <string.h>

void countingSort(int arr[], int n) {
    int max = arr[0];
    for(int i=1;i<n;i++) if(arr[i]>max) max=arr[i];

    int count[max+1];
    memset(count,0,sizeof(count));

    for(int i=0;i<n;i++) count[arr[i]]++;

    int index=0;
    for(int i=0;i<=max;i++)
        while(count[i]-->0) arr[index++]=i;
}

int main() {
    int n;
    printf("Counting Sort\nEnter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements (non-negative integers): ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    countingSort(arr,n);

    printf("Sorted array: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
