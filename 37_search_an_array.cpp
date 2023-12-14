#include <iostream>

int search(int array[], int target, int arraySize);

int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int target;

    std::cout << "Enter element to search for: ";
    std::cin >> target;

    int index = search(array, target, arraySize);

    if (index != -1) {
        std::cout << target << " is at index " << index << "\n";
    } else {
        std::cout << target << " is not in the array!\n";
    }

    return 0;
}

int search(int array[], int target, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}
