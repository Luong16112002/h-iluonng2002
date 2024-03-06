#include <iostream>

bool is_prime(int number) {
    if (number < 2) {
        return false;
    } 
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    // Nhập số nguyên từ người dùng
    std::cout << "Nhập vào một số nguyên: ";
    std::cin >> num;

    if (is_prime(num)) {
        std::cout << num << " là số nguyên tố." << std::endl;
    } else {
        std::cout << num << " không phải là số nguyên tố." << std::endl;
    }

    return 0;
}