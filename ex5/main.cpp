#include <bits/stdc++.h>
using namespace std;
/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo;
b) Evite usar fun��es prontas, como, por exemplo, reverse;
*/
int main() {
    string str;
    getline(cin,str);
    string inversa;
    for(int i = str.size(); i >=0; i--)
    {
        inversa += str[i];

    }
    cout<<inversa;

    return 0;
}
