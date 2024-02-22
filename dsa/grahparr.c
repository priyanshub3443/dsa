#include <stdio.h>

void displayArrayOnGraph(int arr[], int size) {
    // Assuming each element of the array represents the height of a bar in the graph
    for (int i = 0; i < size; i++) {
        printf("%d: ", i);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Example array
    int myArray[] = {3, 1, 4, 1, 5, 9, 2, 6};

    // Size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Display the array on a graph
    displayArrayOnGraph(myArray, size);

    return 0;
}
