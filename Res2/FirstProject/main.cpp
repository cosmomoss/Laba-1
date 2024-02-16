#include <iostream>

int main()
{

    ////\\\\////\\\\////\\\\

    setlocale(LC_ALL, "Rus");

    ////\\\\////\\\\////\\\\



    short sh = 100; // 2 байта, -2^15...2^15 - 1
    unsigned short sh1 = 0; // 2 байта, 0...2^16 - 1

    int in; // 4 байта, -2^31..2^31 -1
    unsigned int in1; // 4 байта, 0..2^32 -1

    long long big; // 8 байт, -2^63..2^63 -1
    unsigned long long big1; // 8 байт, 0..2^64 -1

    long li; // 4 байта, -2^31..2^31 -1
    unsigned long li1; // 4 байта, 0...2^32 - 1

    float f; // 4 байта, 7 значащих цифр

    double d; // 8 байт, 15 значащих цифр


    ////\\\\////\\\\////\\\\

     
    
    unsigned short x, y, z; // при использовании типа данных большего диапазона чисел, объём будет переполнен 

    std::cin >> x >> y >> z;

    unsigned long long V = x * y * z;

    std::cout << V << " - объём заданного паралелепипеда";


}

