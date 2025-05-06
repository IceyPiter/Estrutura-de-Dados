#include <iostream>
using namespace std;

class Lampada{
    private:
    int voltagem;
    int potencia;
    string cor;
    int luminosidade;
    bool ligada;
    public:
    Lampada(int v, int p, string c, int l){
    voltagem = v;
    potencia = p;
    cor = c;
    luminosidade = l;
    ligada = false;
    }
    
    void acender(){
        ligada = true;
        cout << "A Lampada acendeu!" << endl;
    }
    void apagar(){
        ligada = false;
        cout << "A Lampada apagou!!" << endl;
    }
    
    void iluminar(){
        if(ligada)
            cout << "A Lampada está iluminando " << luminosidade << " lumens na cor " << cor << "." << endl;
        else
            cout << "A Lampada apagada não ilumina" << endl;
    }
    
    void exibirInfo(){
        cout << "\nVoltagem " << voltagem
        << "\nPotencia " << potencia << "\nCor " << cor
        << "\nLuminosidade " << luminosidade << "\n" << endl;
    }
};

int main()
{
    Lampada lampada1(200, 60, "Branca", 700);
    lampada1.exibirInfo();
    lampada1.acender();
    lampada1.iluminar();
    lampada1.apagar();

    return 0;
}
