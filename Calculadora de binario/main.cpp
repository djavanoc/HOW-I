#include <iostream>
#include <locale.h>
#include <stdlib.h>    //bibliotecas para funcionamento do c�digo
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
            cout <<"CONVERSOR DE N�MEROS" << endl;
            cout <<"********************* " << endl;
            cout <<" " << endl;

            cout <<" " << endl;
            cout <<"ESCOLHA UMA OP��O:" << endl;
            cout <<" " << endl;
            cout <<"[1 - DECIMAL PAPA BINARIO] " << endl;
            cout <<"[2 - BIN�RIO PARA DECIMAL]" << endl;
            cout <<"[0 - SAIR] " << endl;
            cout <<" " << endl;
            cin>> opcao;
            system("clear||clS");

                if (opcao == 1) {
                    cout << " "<< endl;
                    cout << "Voc� escolheu Decimal papa Bin�rio, Digite um n�mero en Decimal (at� 2047); " <<endl;
                    cin >> decimal;
                    cout <<"O n�mero digitado foi: " <<decimal <<endl;

                        for (int cont = 10; cont > -1; cont--) {
                            if (decimal % 2 == 0) {
                            binario[cont] = 0;
                                }else{
                                    binario[cont] = 1;
                                }
                                decimal = decimal / 2;
                        }
                        cout << ("em bin�rio fica: ");
                        for (int i = 0; i < 11; i++){
                            cout << binario[i];
                        }
                }else{
                    if (opcao == 2){
                        int binario;
                        int decimal = 0;
                         cout << " "<< endl;
                         cout << "voc� escolheu Bin�rio para Decimal "<< endl;
                         cout << " Digite um n�mero em Binario(at� 10 Posi��es) "<< endl;
                         cin >> binario;
                         int i = 0;
                         for (int i = 0; i < 11; i++){ //aqui delimita o tamanho do n�mero a ser transformado
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
                        cout << "Voc� digitou uma Op��o invalida, tente novamente. " << endl;

                        }

                    }

                }

    }while (contador > 0);
    return 0;
}




