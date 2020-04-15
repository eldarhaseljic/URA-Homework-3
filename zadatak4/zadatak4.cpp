#include <iostream>
#include <algorithm>

int divide (int * niz , int low , int high)
{
  int pivot = niz[high-1];
  int pIndex = low;
  for(int i=low; i<high-1; i++)
  {
    if(niz[i]<=pivot)
    {
      int tmp = niz[i];
      niz[i] = niz[pIndex];
      niz[pIndex] = tmp;
      pIndex++;
    }
  }
  niz[high-1]=niz[pIndex];
  niz[pIndex]=pivot;
  return pIndex;
}

void quickSort (int * niz, int low , int high)
{
  if(low>=high) return;
  int sr = divide(niz , low , high);
  quickSort(niz , low , sr);
  quickSort(niz , sr+1 , high);
}



int main(int argc, char *argv[])
{
  int N = 20000;
  int niz [N];
  int j=0;
  for(auto i = 0; i<N ; ++i)
  { 
    niz[i]=i;
  }
  std::random_shuffle(niz , niz+N);
  std::cout << "Elementi niza su :" << std::endl;
  for(auto i = 0; i<N ;++i)
  {
    std::cout << niz[i] << "  ";
    ++j;
    if(j==10)
    {
      std::cout << std::endl;
      j=0;
    }
   }
  std::cout << std::endl;
  quickSort(niz , 0 , N);
  std::cout << "Elementi niza nakon sorta su: " << std::endl;
  for(auto i = 0; i<N ;++i)
  {
    std::cout << niz[i] << "  ";
    ++j;
    if(j==10)
    {
      std::cout << std::endl;
      j=0;
    }
  }
  std::cout << std::endl;
  int niz2[] = {3,1,2,7,6,5,4};
  int x = sizeof(niz2)/sizeof(niz2[0]);
  std::cout << "Elementi drugog niza su :" << std::endl;
  for(auto i = 0; i<x ;++i)
  {
    std::cout << niz2[i] << "  ";
  }
  std::cout << std::endl;
  quickSort(niz2 , 0 , x);
  std::cout << "Elementi drugog niza nakon sorta su: " << std::endl;
  for(auto i = 0; i<x ;++i)
  {
    std::cout << niz2[i] << "  ";
  }
  std::cout << std::endl;
  return 0;
}
