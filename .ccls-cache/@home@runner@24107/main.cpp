#include <iostream>

using namespace std;
int main(void) {
  double pi4 = 0.;
  long n;
  long j = 1;
  
  cout << "Number of iterations? ";
  cin >> n;
  
  for(int i=0; i<n; i++){
    pi4 = pi4 + ((1./j)-(1./(j+2)));// число пі плюс два останні дроби, які віднімаються(тобто р=р+1/5-1/7 і тд)
    j=j+4;//збільшуємо j
  }
  
  cout.precision(20);//скільки знаків після коми(20)
  cout << "Pi = " << (pi4 * 4.) << endl;
  return 0;
}
