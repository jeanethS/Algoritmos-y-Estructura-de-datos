#include <stdio.h>
void selecionDirecta(int a[],int n);
void imprimir(int a[], int n);
 int main (){
 int a[]={51, 21, 39, 80, 35};
 int n=5;
 selecionDirecta(a, n);
 imprimir(a, n);

 }
void selecionDirecta(int a[],int n){
    int i,j, menor, indice;
    for (i = 0; i<n-1; i++){
    menor = a[i];
    indice = i;
    for (j = i; j<=n-1; j++){
        if(a[j]<menor){
            menor = a[j];
            indice = j;
        }
    }
    a[indice]=a[i];
    a[i]=menor;
 }
}
 void imprimir (int a[], int n){
     int i;
 for (i = 0; i<=n-1; i++){
    printf("%d ", a [i]);
 }
}
