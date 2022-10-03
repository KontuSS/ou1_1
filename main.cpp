#include <iostream>

int Licz(int a, int b)
{
    return a*b;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 4*5=" << Licz(4,5) << std::endl;
    return 0;
}