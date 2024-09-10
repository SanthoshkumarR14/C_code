#include <stdio.h>

int main() {
    int arr[100], n, i, smallest, largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}

