#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int superacao = 0;
    int incompetencia = 0;
    int funcionarioContador = 1;
    int resultado;

    while (funcionarioContador <= 10)
    {
        cout << "Digite o valor das vendas que o funcionario realizou nesse ano:";
        cin >> resultado;

        if (resultado >= 10000)
            superacao = superacao + 1;
        else
            incompetencia = incompetencia + 1;

        funcionarioContador = funcionarioContador + 1;
    }
    cout << "Você se superou, parabens!" << superacao << "\nMelhore ou procure outro rumo!" << incompetencia << endl;

    if (superacao > 14)
    { 
       cout << "Muito bem, patrao, seus funcionarios são show! Promova um aumento salarial digno e merecido." << endl;
    }
    else 
        cout << "Ok, patrao, esta na hora de corrigir seus funcionarios ou sua empresa ira falir." << endl;
    return 0;
} 