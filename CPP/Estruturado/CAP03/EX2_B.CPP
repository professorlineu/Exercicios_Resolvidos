#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float nota1, nota2, nota3, soma, media;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    //Formata a sa�da para duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura das tr�s notas
    cout << "\nDigite as tr�s notas: ";
    // Recebe as tr�s notas
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    // Soma as notas digitadas
    soma = nota1 + nota2 + nota3;
    // Calcula a m�dia
    media = soma/3;
    // Mostra o resultado da m�dia
    cout << "\nM�dia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
