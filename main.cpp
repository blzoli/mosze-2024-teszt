#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // elírás: N_ELEMENTS 
    std::cout << '1-100 ertekek duplazasa' // hiányzik a pontosvessző, aposztróf helyett idézőjel kell
    for (int i = 0;) // for ciklus nincs megfelelően definiálva, csak az i van inicializálva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hibás a feltétel
    {
        std::cout << "Ertek:" // hiányzik az, hogy mit írjon ki, meg a pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs inicializálva helyesen
    for (int i = 0; i < N_ELEMENTS, i++) // hibás a vessző, pontosvessző kell
    {
        atlag += b[i] // hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
