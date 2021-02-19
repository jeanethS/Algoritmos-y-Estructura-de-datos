#include <stdio.h>

#include <stdlib.h>

#include<time.h>

void generar (int a[], int n);

void imprimir (int a[], int n);

void insercionDirecta(int a[], int n);

int main ()
{


  int n;
  printf ("inserte tamaño del arreglo\n");

  scanf ("%d", &n);
  srand (time (0));
  int arr[n];
  generar (arr, n);
  insercionDirecta(arr, n);
  imprimir (arr, n);
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
    return;
}

void insercionDirecta(int a[], int n){
    int i, j, aux;
    for (i=1;i<n;i++)
    {
        aux=a[i];
        j=i-1;

        while(aux<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=aux;
    }
    return;
}
