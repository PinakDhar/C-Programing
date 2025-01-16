#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the smallest
    int smallest = arr[0];

    // Loop through the array to find the smallest element
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest=arr[i];
        }
    }

    printf("The smallest element is: %d\n", smallest);

    return 0;
}
