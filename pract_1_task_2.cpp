#include <iostream>

int main() {
    // 1. ��������� ������ � �������� ��������
    int arr[5] = { 10, 20, 30, 40, 50 };

    // 2. ���������� ���� ���������, �� �������� �� ��� �������� ������
    int* ptr1 = &arr[1];  // ����� �� ������ ������� (20)
    int* ptr2 = &arr[4];  // ����� �� �'���� ������� (50)

    // 3. ���������� ������ �� �����������
    int distance = ptr2 - ptr1;

    // ��������� ����������
    std::cout << "elements between ptr1 and ptr2: " << distance << std::endl;

    // 4. ��������� �������, �� �� �������� �� ���������, �� �� �����
    std::cout << "Value ptr1: " << *ptr1 << ", Adress: " << ptr1 << std::endl;
    std::cout << "Value ptr2: " << *ptr2 << ", Adress: " << ptr2 << std::endl;

    return 0;
}
