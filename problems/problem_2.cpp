#include <iostream>
using namespace std;

int main() {
   

   double i, j, k;
cin >> i >> j >> k;
    float result;
    // write your code here;
    result  = (i>j) ? i : ((i>k)? i: (j>k) ? j :k);
cout << result;
    return result;
}
