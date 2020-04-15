#include <iostream>
#include <algorithm>

int pronadjiNajmanji(int * niz ,int n){
  if(n<2) return niz[0];
  int sr = n/2;
  int lijevi[sr];
  int desni[n-sr];
  for(auto i = 0; i<sr ; ++i)
  {
    lijevi[i]=niz[i];
  }
  for(auto i=sr; i<n; ++i)
  {
    desni[i-sr]=niz[i];
  }
  int mL = pronadjiNajmanji(lijevi , sr);
  int mD = pronadjiNajmanji(desni , n-sr);
  if(mL < mD) return mL;
  return mD;
}

int main(int argc, char *argv[])
{
  int niz[] = {2 , 15 , 20 , 12 , -4 , 9 , 1 , 90 , -16 , 24 , 55 , -14};
  int N = sizeof(niz)/sizeof(niz[0]);
  std::cout << "Elementi niza su :" << std::endl;
  for(auto i = 0; i<N;++i)
  {
    std::cout << niz[i] << "\t" ;
  }
  std::cout << std::endl;
  int min = pronadjiNajmanji(niz , N);
  std::cout << "Min u nizu je " << min << std::endl;
  return 0;
}
