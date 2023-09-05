#include <iostream>

int main(int argc, char**argv)
{
    float l;

    std::cout << "Masukkan panjang segiempat : ";
    std::cin >> l;

    std::cout << "Hello world!" << std::endl;

    std::cout << "Luas segiempat adalah " << l*l << std::endl;
    
    return EXIT_SUCCESS;
}