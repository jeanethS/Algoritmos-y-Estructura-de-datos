#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define NO_ENCONTRADO "NO ENCONTRADO"
void generar (int a[], int n);
void imprimir (int a[], int n);
int busquedasecuencial(int a[], int n, int elem);
int main ()
{
  int n, elem;
  printf ("inserte tamaño del arreglo\n");
  scanf ("%d", &n);
  srand (time (0));
  int arr[n];
  generar (arr, n);
  imprimir (arr, n);
  printf ("inserte el número a buscar\n");
  scanf ("%d", &elem);
  printf("El número se encuentra en la posición: %d", busquedasecuencial(arr,n,elem));
  return 0;
}

void generar (int a[], int n)
{
  int i = 0;
  for (i = 0; i <= n - 1; i++)
    {
      a[i] = rand () % 1000;
    }
  return;
}

void imprimir (int a[], int n)
{
  int i;
  for (i = 0; i <= n - 1; i++)
    {
      printf ("%d ", a[i]);
    }
}
int busquedasecuencial(int a[], int n, int elem){
    int i =0;
    while(a[i]!=elem&&i<(n-1)){
        i=i+1;
    }
    if(a[i]==elem)
        return i;
    else
    return NO_ENCONTRADO;
}