#include <iostream>
#include <memory>

int main() {
    //с использованием "сырых" указателей
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr1 = &arr[0];
    std::cout << "4th element of the array: " << *(ptr1 + 3) << std::endl;

    //с использованием умных указателей
    std::unique_ptr<int[]> arr2(new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    int* ptr2 = arr2.get();
    std::cout << "4th element of the array: " << *(ptr2 + 3) << std::endl;

    return 0;
}
