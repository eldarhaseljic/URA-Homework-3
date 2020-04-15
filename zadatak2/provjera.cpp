#include <iostream>
#include <algorithm>

int najblizi(int *niz, int n ,int br)
{
  if(n==1) return niz[0];
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
  int mL = najblizi(lijevi , sr, br);
  int mD = najblizi(desni ,n-sr ,br);
  if(mL == br) return mL;
  if(mD == br) return mD;
  if(mD>mL && mD<br) return mD;
  else return mL;
}

int main(int argc, char *argv[])
{
  int niz []= {1 , 2 , 4 , 5 , 6 , 7 , 8 , 9};
  int N = sizeof(niz)/sizeof(niz[0]);
  std::cout << "Elementi niza su :" << std::endl;
  for(auto i = 0; i<N;++i)
  {
    std::cout << niz[i] << "\t" ;
  }
  std::cout << std::endl;
  int br = 11;
  int min = najblizi (niz ,N, br);
  std::cout << "Najblizi je  " << min << std::endl;
  return 0;
}
