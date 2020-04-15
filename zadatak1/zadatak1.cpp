#include <iostream>
#include <chrono>
#include <algorithm>
#include <thread>

#define RESET   "\033[0m"
#define BOLDRED "\033[1m\033[31m"

int millisecondsDelay = 500;
using namespace std;
void ispis(int* niz, int n, int trenutni){
    cout<<"\r";
    for(int i=0; i<n; i++){
        if (i==trenutni) {
            cout<<BOLDRED;
        } else {
            cout<<RESET;
        }
        cout<<niz[i]<<" ";
    }
    cout<<flush;
    cout<<RESET;
}

void merge(int * niz , int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
   
    for (i = 0; i < n1; i++)  L[i] = niz[l + i];
    for (j = 0; j < n2; j++)  R[j] = niz[m + 1+ j];

    i = 0; 
    j = 0; 
    k = l;
   while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]){niz[k++] = L[i++];}
        else  {	niz[k++] = R[j++]; }
ispis(niz, n1 + n2, k);
this_thread::sleep_for(chrono::milliseconds(millisecondsDelay)); }
    while (i < n1) niz[k++] = L[i++]; 
    while (j < n2) niz[k++] = R[j++];
}
 

void mergeSort(int *niz, int l, int r)
{ 
    if (l < r)
    {
      int m = l+(r-l)/2;
      mergeSort(niz, l, m);
      mergeSort(niz, m+1, r);
      merge(niz, l, m, r);
    }
}

int main(int argc, char *argv[])
{
  int niz[] = {3 , 13 , 98 , 34 , 21 , 44 , 99 , 56 , 9};
  int n = sizeof(niz)/sizeof(*niz);
  std::cout << "Nas niz prije sorta: " << std::endl;
  for (auto i = 0; i < n; ++i) 
  {
    std::cout << niz[i] << "\t" ;
  }

  std::cout << std::endl;
  std::cout << "Niz poslje sorta : " << std::endl;
  mergeSort(niz, 0, n-1);
  std::cout<< std::endl;
/*
  std::cout << "Nas niz poslje sorta: " << std::endl;
  for (auto i = 0; i < n; ++i) 
  {
   std::cout << niz[i] << "\t"; 
  }
  std::cout << std::endl;
*/
  return 0;
}
