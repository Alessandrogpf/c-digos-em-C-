/*Este código visa implementar o fatorial na linguagem C++*/

#include <iostream> //biblioteca de entrada e saída.
using namespace std;

int main(){
    
    int num, fat = 1; // Variáveis do tipo inteiro declaradas

    cout<<"Digite um número: "; // Interface para o usuário
    cin>>num; // Entrada de um número para o calculo do fatorial

    if(num>0){
    for(int i = 1; i <= num; i++)
    fat *= i;

    cout<< "O fatorial de "<< num << " é "<< fat << endl;
    }
    if(num == 0){
        fat = 1;
        cout<<"O fatorial de 0 é: "<<fat<<endl;
    }
    if (num<0){
        cout<<"Não é possível calcular o fatorial de números negativos!"<<endl;
    }
    
    return 0;

}
