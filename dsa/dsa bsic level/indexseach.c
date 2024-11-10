#include <stdio.h>

// Function to perform index sequential search
int indexSequentialSearch(int arr[], int n, int key) {
    int index = -1;

    // Assuming the array is sorted in ascending order
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;  // Stop searching once the key is found
        }
        else if (arr[i] > key) {
            break;  // Stop searching if we've passed the possible location of the key
        }
    }

    return index;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 50, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = indexSequentialSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
