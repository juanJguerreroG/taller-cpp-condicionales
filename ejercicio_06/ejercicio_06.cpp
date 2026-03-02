#include <iostream>

int main() {
    int a = 5, b = 10;

    int temp = a;
    a = b;
    b = temp;

    a = a + b;
    b = a - b;
    a = a - b;

    a ^= b;
    b ^= a;
    a ^= b;

    std::cout << "a: " << a << " b: " << b;

    return 0;
}
