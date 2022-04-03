#include <iostream>
#include <locale.h>
#include <stdlib.h>    //bibliotecas para funcionamento do código
#include <math.h>

using namespace std;

int main(){

 int contador = 1;
 int decimal;
 int binario[11];
   do{
           int opcao;
           setlocale (LC_ALL,"portuguese");

            cout <<" " << endl;
            cout <<"********************* " << endl;
            cout <<"CONVERSOR DE NÚMEROS" << endl;
            cout <<"********************* " << endl;
            cout <<" " << endl;

            cout <<" " << endl;
            cout <<"ESCOLHA UMA OPÇÁO:" << endl;
            cout <<" " << endl;
            cout <<"[1 - DECIMAL PAPA BINARIO] " << endl;
            cout <<"[2 - BINÁRIO PARA DECIMAL]" << endl;
            cout <<"[0 - SAIR] " << endl;
            cout <<" " << endl;
            cin>> opcao;
            system("clear||clS");

                if (opcao == 1) {
                    cout << " "<< endl;
                    cout << "Você escolheu Decimal papa Binário, Digite um número en Decimal (até 2047); " <<endl;
                    cin >> decimal;
                    cout <<"O número digitado foi: " <<decimal <<endl;

                        for (int cont = 10; cont > -1; cont--) {
                            if (decimal % 2 == 0) {
                            binario[cont] = 0;
                                }else{
                                    binario[cont] = 1;
                                }
                                decimal = decimal / 2;
                        }
                        cout << ("em binário fica: ");
                        for (int i = 0; i < 11; i++){
                            cout << binario[i];
                        }
                }else{
                    if (opcao == 2){
                        int binario;
                        int decimal = 0;
                         cout << " "<< endl;
                         cout << "você escolheu Binário para Decimal "<< endl;
                         cout << " Digite um número em Binario(até 10 Posições) "<< endl;
                         cin >> binario;
                         int i = 0;
                         for (int i = 0; i < 11; i++){ //aqui delimita o tamanho do número a ser transformado
                          decimal = decimal + pow (2, i)*(binario%10);
                          binario = binario / 10;

                         }cout << decimal <<endl;

                    }else{
                        if ( opcao == 0){
                            cout << " " <<endl;
                            cout << " Saindo.... " <<endl;
                            contador = opcao;
                        }else{
                        cout<< " " <<endl;
                        cout << "Você digitou uma Opção invalida, tente novamente. " << endl;

                        }

                    }

                }

    }while (contador > 0);
    return 0;
}




