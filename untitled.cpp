#include <iostream>
using namespace std;
int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
int gcd(int a, int b)

{

  if (b == 0) return a;

  return gcd(b, a % b);

}
