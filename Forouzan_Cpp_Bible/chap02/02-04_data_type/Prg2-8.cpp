#include <iostream>
using namespace std;

int main()
{
  // 변수 선언
  int x;
  unsigned long int y;

  // 할당
  x = 1456;
  y = -14567; // Logical Error

  // 출력
  cout << x << endl;
  cout << y << endl;
  cout << 1234 << endl;
  cout << 143267L << endl;

  return 0;
}