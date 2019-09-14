#include <iostream>
int main()
{
    int a, b, sum = 0, carry = 0;
    std::cin >> a >> b;
    do
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    while (carry);
    std::cout << sum << std::endl;
    return 0;
}