#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float nota1, nota2, nota3, media;
    //Limpa a tela
    system("cls");
    // Recebe as tr�s notas
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    // Calcula a m�dia
    media = (nota1 + nota2 + nota3)/3;
    //Formata a mensagem de sa�da para duas casas decimais
    cout << setprecision(2);
    // Mostra o resultado da m�dia
    cout << "\n" << media;
    // Para o programa a espera de um ENTER
    getch();
}
