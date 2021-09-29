#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int conteoMultiplos=0;
    int arreglo[50000];
    cin>>n;
    if(n>=50000){
        exit(-1);
    }else{
        //guarda valores en el arreglo
        for(int i=0;i<n;i++){
            cin>>arreglo[i];
            //cuenta cuantos multiplos de 3 hay
            if(arreglo[i]%3==0){
                conteoMultiplos++;
            }
            //comprueba si los numeros del arreglo son negativos
            for(int j=0;j<n;j++){
                if(arreglo[j]<0){
                    exit(-1);
                }
            }
        }
        if(conteoMultiplos==0){
            cout<<"no hay triples";
        }else{
            cout<<conteoMultiplos<<endl;
            //imprime el arreglo mostrando solo los multiplos de 3 con divisiones exactas
            for(int i=0;i<n;i++){
                if(arreglo[i]%3==0){
                    cout<<i+1<<" ";
                }
            }
        }
    }
        return 0;
}
