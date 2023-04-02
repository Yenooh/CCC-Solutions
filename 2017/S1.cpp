#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int sw[n];
  int se[n];
  int sumsw = 0;
  int sumse = 0;
  int counter = 0;
  for (int i = 0; i < n; i++)
  {
      cin >> sw[i];
  }
  for (int i = 0; i < n; i++)
  {
      cin >> se[i];
  }
  for (int i = 0; i < n; i++){
      sumsw = sumsw + sw[i];
      sumse = sumse + se[i];
      if (sumse == sumsw){
          counter = i + 1;
      }
  }
  cout << counter;
  return 0;
}
