#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, salreceber, grat, imp;
    // Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do sal�rio
    cout << "\nDigite o sal�rio do funcion�rio: ";
    // Recebe o sal�rio
    cin >> sal;
    // Calcula a gratifica��o
    grat = sal * 5/100;
    // Calcula o imposto
    imp = sal * 7/100;
    // Calcula o sal�rio a receber
    salreceber = sal + grat - imp;
    // Mostra o sal�rio a receber
    cout << "\nSal�rio a receber = " << salreceber;
    // Para o programa a espera de um ENTER
    getch();
}

