#include<iostream>
void move2(int * A,int N, int *novi)
{
  int j=0;
  for(auto i=N-2; i<N;++i)
  {
    novi[j++] = A[i];
  }
  for(auto i=0; i<N-2;++i)
  {
    novi[j++] = A[i];
  }
}


int min_in_cirkular(int * novi, int N)
{
 int low = 0;
  int high = N;
  while(low<high)
  {
  int sr = (high+low)/2;
  if(novi[sr]<novi[sr-1])
  {
    return novi[sr];
  }

  if(low < sr && novi[sr]>novi[sr+1])
    return novi[sr+1];
  if(novi[sr]<novi[N-1])
  {
   high = sr - 1; 
  }else low = sr +1;
  } return novi[low];
}

int main(int argc, char *argv[])
{
  int A [] = {1 , 2 , 3 , 4 , 5 ,6};
  int N = sizeof(A)/sizeof(A[0]);
  std::cout << "Elementi niza su: " << std::endl;
  for(auto i = 0; i<N; ++i)
  {
    std::cout << A[i] << "\t" ;
  }
  std::cout << std::endl;
  int min1 = min_in_cirkular(A , N);
  std::cout << "Min u nepomjerenom nizu je "<< min1 << std::endl;
  
  int novi[N];
  move2(A,N,novi);
  std::cout << "Elementi pomjerenog niza su " << std::endl;
  for(auto i = 0; i<N;++i)
  {
  std::cout << novi[i] << "\t";
  }
  std::cout  << std::endl; 
  int min = min_in_cirkular(novi , N);
  std::cout << "Min u pomjerenom nizu je "<< min << std::endl;
  return 0;
}
