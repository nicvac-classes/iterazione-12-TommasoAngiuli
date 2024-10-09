#include <iostream>
using namespace std;
int main() 
{
    int costomoto, risparmi, nuovirisparmi, nrisparmi;
    cout << "inserisci il prezzo della moto" << endl;
    cin >> costomoto;
    cout << " a quanto ammontano i tuoi risparmi?" << endl;
    cin >> risparmi;
    nrisparmi = 0;
    while (risparmi < costomoto) 
    {
        cout << "mancano " << costomoto - risparmi << " euro" << endl;
        cout << "inserisci i nuovi risparmi" << endl;
        cin >> nuovirisparmi;
        risparmi = risparmi + nuovirisparmi;
        cout << "hai " << risparmi << " euro" << endl;
        nrisparmi = nrisparmi + 1;
    }
    cout << "hai effettuato risparmi " << nrisparmi << " volte" << endl;
    cout << "hai accumulato " << risparmi << " euro" << endl;
    cout << "ti rimangono " << risparmi - costomoto << " euro" << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
