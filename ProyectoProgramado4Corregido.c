/* Corregir los cinco errores.
Proyecto Programado #4
Daniel Miranda Milán
*/
#include<iostream>
using namespace std ;

int main(){

 int n,aux;//1 error no estaba el ; al final de la línea
    cout<<"Ingrese la cantidad de numeros :"; //Se le solicita al usuario la cantidad de numeros a ordenar
    cin>>n; //se guarda la cantidad en la variable n
 int V[n];
 for(int i=0;i<=n;i++){
  cout<<"\n Numero "<<i+1<<" = ";
  cin>>V[i]; //2 error faltaba el ; después de almacenar el valor en i
 }

 for(int i=0;i<=n;i++){ //Error 3 faltaba + en la inicialización
  for(int j=i+1;j<n;j++){
   if(V[j]<V[i]){
    aux=V[i]; //Hacía falta la i dentro
    V[i]=V[j]; // Hacía falta la j dentro
    V[j]=aux;
    
   }
  }
 }

 cout<<"Elementos Ordenados:"<<endl;
 for(int i=0;i<n;i++){
  cout<<V[i]<<endl;
 }
