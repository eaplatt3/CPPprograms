#include <iostream>
using namespace std;
class Student {
public:
    Student (){ cout << "Student: no parameters\n"; }
    Student (int a){ cout << "Student: int parameter\n"; }
};

class Junior : public Student {
public:
    Junior (int a){ cout << "Junior: int parameter\n\n"; }
};

class Sophomore : public Student {
public:
    Sophomore (int a) : Student (a){ cout << "Sophomore: int parameter\n\n"; }
};

int main () {
    Junior maya(0);
    Sophomore james(0);
    return 0;
}
