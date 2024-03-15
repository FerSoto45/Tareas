#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
    cout << "Ingrese 5 números (juntos): ";
    string numero;
    cin >> numero;
    if(numero== " "){
    	cout<<"ingrese un numero"<<endl;
	}else{
    string numeroRevertido;
    for (int i = numero.length() - 1; i >= 0; --i) {
        numeroRevertido += numero[i];
    
    cout << "Datos ordenados: " << numeroRevertido << endl;
}
}
    return 0;
}
