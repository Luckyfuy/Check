#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int p = 1000000000;
    srand(time(nullptr));
    int a = rand() % p, b = rand() % p;
    a = (rand() % 2 == 0 ? -a : a), b = (rand() % 2 == 0 ? -b : b);
    std::cout << a << " " << b << std::endl;
    return 0;
}