#include <stdio.h>

int main() {
    int n;
    int arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Insertion sort logic: place arr[i] in its correct position
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            // Swap arr[j] and arr[j-1]
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
