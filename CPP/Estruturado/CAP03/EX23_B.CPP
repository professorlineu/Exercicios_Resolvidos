#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float num, f;
    double i, a;
    // Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do n�mero real
    cout << "\nDigite um n�mero real: ";
    // Recebe um n�mero real
    cin >> num;
    // Extrai a parte inteira do n�mero,
    // armazenando-a na vari�vel i e extrai a parte
    // fracion�ria do n�mero, armazenando-a na vari�vel f
    f = modf(num, &i);
    // Arredonda o n�mero para baixo
    a = floor(num);
    // Mostra a parte inteira do n�mero digitado
    cout << "\nParte inteira do n�mero: " << i;
    // Mostra a parte fracion�ria do n�mero
    cout << "\nParte fracion�ria do n�mero: " << f;
    // Mostra o arredondamento do n�mero
    cout << "\nArredondamento do n�mero: " << a;
    // Para o programa a espera de um ENTER
    getch();
}
