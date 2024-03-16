#include <iostream>

// Evite usar 'using namespace std;' diretamente no escopo global
// Prefira qualificar os elementos do namespace std
using std::cout;
using std::endl;

// A função main deve ter uma das assinaturas padrão: 'int main()' ou 'int main(int argc, char *argv[])'
int main() {

   int numero[10]= {5,8,1,2,6,7,3,9,3};
    int menor =0;

   for(int i=1; i<=9; i++){
    
if(numero[i]>menor)
    cout << endl;
    numero[i]=maior;
    i=0;
    maior =  numero[i];

       cout <<numero[i]<< endl;

   }





    return 0;
}
