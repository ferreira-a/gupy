
#include <bits/stdc++.h>

using namespace std;
/*
2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

IMPORTANTE:
Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;
*/
int main()
{

    int n;
    int f1=0, f2=1, f3=0;
    cout<<"Entre um numero:"<<endl;
    cin>>n;
    if(n < 0)
    {
     cout<<"ERRO! Apenas numeros naturais."<<endl;
     main();
    }

    if(n == 0)
        cout<<"n ="<<n<< "pertence � sequencia"<<endl;
    else
    {
        cout<<"0 - 1";
        while(f3 < n)
        {
            f3 = f1 + f2;      //obtem termo atual a partir do 3�
            cout<<" - "<<f3;   //printa termo atual
            f1 = f2;
            f2 = f3;
        }

        if(f3 == n)
            cout<<endl<<"n ="<<n<< " pertence � sequencia"<<endl;
        else
            cout<<endl<<"n  ="<<n<< " n�o pertence � sequencia"<<endl;
    }

    return 0;
}
