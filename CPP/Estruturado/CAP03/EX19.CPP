#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{ float a_degrau, a_usuario, qtd_degraus;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da altura do degrau
	cout << "\nDigite a altura do degrau: ";
	// Recebe a altura do degrau
	cin >> a_degrau;
	// Mostra mensagem antes da leitura da altura desejada pelo usu�rio
	cout << "\nDigite a altura desejada pelo usu�rio: ";
	// Recebe a altura desejada pelo usu�rio
	cin >> a_usuario;
	// Calcula o total de degraus necess�rios
	qtd_degraus = a_usuario / a_degrau;
	// Mostra total calculado
	cout << "\nTotal de degraus necess�rios: " << qtd_degraus;
	// Para o programa a espera de um ENTER
	getch();
}
