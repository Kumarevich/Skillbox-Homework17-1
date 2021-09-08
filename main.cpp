#include <iostream>

void replace(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    std::cout << "a = " << *pa << "; b = " << *pb << std::endl;
}

int main() {
    int a, b;
    std::cout << "Input 'a': ";
    std::cin >> a;
    std::cout << "Input 'b': ";
    std::cin >> b;

    replace(&a, &b);

    return 0;
}
