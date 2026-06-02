#include <stdio.h>

void sortAscending(int arr[], int n) {
    int temp;

    for (int i =0; i < n  -1; i++){
        for (int j = 0; j<n-1-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main() {
    int arr[100], n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }   

    sortAscending(arr, n);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}