#include<iostream>
using namespace std;
int main() {
   int i = 0, n;
   cin >> n;
   i |= (1 << n);
   cout << i;
   return 0;
}
