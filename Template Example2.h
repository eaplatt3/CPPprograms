#include <iostream>
#include <string>
using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) {
  //if b is bigger then a return b or if a is larger then b return a
    return a < b ? b:a;
}

int main () {
    int i = 39,j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;
    
    string s1 = "Hello",s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
    
    return 0;
}