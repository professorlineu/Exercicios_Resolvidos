#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float custo, convite, qtd;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do custo do espet�culo
	cout << "\nDigite o custo do espet�culo: ";
	// Recebe o custo do espet�culo
	cin >> custo;
	// Mostra mensagem antes da leitura do pre�o do convite
	cout << "\nDigite o pre�o do convite: ";
	// Recebe o pre�o do convite
	cin >> convite;
	// Calcula o total de convites necess�rios para cobrir as despesas
	qtd = custo / convite;
	// Mostra quantidade calculada
	cout << "\nQuantidade de convites necess�ria: " << qtd;
	// Para o programa a espera de um ENTER
	getch();
}
