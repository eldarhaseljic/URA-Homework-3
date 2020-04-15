#include <iostream>
#include <algorithm>
#include <list>

int pronadjiNajmanji(std::list<int>&  niz ,int n){
  if(n<2) return *niz.begin();
  int sr = n/2;
  std::list<int> lijevi(sr);
  std::list<int> desni(n-sr);
  auto it = niz.begin();
  auto it1 = lijevi.begin();
  auto it2 = desni.begin();
  for(auto i = 0; i<sr ; ++i)
  {
    *it1=*it;
    ++it1;
    ++it;
  }
  for(auto i=sr; i<n; ++i)
  {
    *it2=*it;
    ++it2;
    ++it;
  }
  int mL = pronadjiNajmanji(lijevi , sr);
  int mD = pronadjiNajmanji(desni , n-sr);
  if(mL < mD) return mL;
  return mD;
}

int main(int argc, char *argv[])
{
  std::list<int> niz = {2 , 15 , 20 , 12 , -4 , 9 , 1 , 90 , -16 , 24 , 55 , -14};
  int N = niz.size();
  std::cout << "Elementi niza su :" << std::endl;
  auto it = niz.begin();
  for(auto i = 0; i<N;++i)
  {
    std::cout << *it << "\t" ;
    it++;
  }
  std::cout << std::endl;
  int min = pronadjiNajmanji(niz , N);
  std::cout << "Min u nizu je " << min << std::endl;
  return 0;
}
