#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    int sHora, sMin, vHora, vMin;
    cout << "Ola, Bem Vinda ao 'Que Horas ela Volta?', um aplicativo destinado a Informar que horas você deve retornar de seu intervalo\n";
    cout << "Abaixo, digite A Hora e o Minuto que entrou em intervalo (separados)\n";
    cout << "Qual era a Hora? ";
    cin >> sHora;
    cout << "E o Minuto? ";
    cin >> sMin;
    sMin = sMin+70;
    if (sMin >= 60)
    {
        sMin -=60;
        sHora++;
    }

    cout << "Voce volta as: " << sHora << ":" << sMin << endl;
    cout << "Aproveite o Intervalo :) \n";

    return 0;
}