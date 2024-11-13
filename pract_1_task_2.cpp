#include <iostream>

int main() {
    // 1. Створення масиву з декількох елементів
    int arr[5] = { 10, 20, 30, 40, 50 };

    // 2. Оголошення двох вказівників, які вказують на різні елементи масиву
    int* ptr1 = &arr[1];  // Вказує на другий елемент (20)
    int* ptr2 = &arr[4];  // Вказує на п'ятий елемент (50)

    // 3. Обчислення різниці між вказівниками
    int distance = ptr2 - ptr1;

    // Виведення результату
    std::cout << "elements between ptr1 and ptr2: " << distance << std::endl;

    // 4. Виведення значень, на які вказують ці вказівники, та їх адрес
    std::cout << "Value ptr1: " << *ptr1 << ", Adress: " << ptr1 << std::endl;
    std::cout << "Value ptr2: " << *ptr2 << ", Adress: " << ptr2 << std::endl;

    return 0;
}
