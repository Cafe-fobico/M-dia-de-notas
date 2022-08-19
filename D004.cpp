#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, faltas, media;

    cout << "Primeira nota do aluno: ";
    cin >> nota1;
    cout << "Segunda nota do aluno: ";
    cin >> nota2;
    cout << "Quantidade de faltas do aluno: ";
    cin >> faltas;

    media = ((nota1+nota2)/2);

    if (media >= 7 and (faltas <= 36))  {
        cout << "Aluno Aprovado";
    }

    if ((media >= 4) and (media <= 7 ) and (faltas <=36)) {
        cout << "Realizaçao do Exame Final";
    }

    if ((media < 4) and (faltas >36 )) {
        cout << "Reprovado";
    }

    if (faltas >36) {
        cout << "Reprovado";
    }


    return 0;
}
