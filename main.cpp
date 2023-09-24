#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS helyett a helyes: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // pontosvessző hiányzik a sor végén és idézőjel kell
    for (int i = 0; ) //hiányzik a felső limit, illetve a lépésmérték
    {
        b[i] = i * 2; //i-1. tömbelemtől kéne számolni
    }
    for (int i = 0; i; i++) //rossz az intervallum megadás
    {
        std::cout << "Ertek:" //érték kiiratás és pontosvessző a sorvégén hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //vessző helyett pontosvessző kell
    {
        atlag += b[i] //pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
