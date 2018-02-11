//  main.cpp
//  Created by M_Alrajab on 9/17/17.
//  Copyright © 2017 M.Alrajab. All rights reserved.
//  Test Program personType

#include <iostream>
#include <string>
#include "PersonType.hpp"
using namespace std;
int main(){
    PersonType student("Moaath", "Alrajab");
    student.print();
    cout << endl;
    return 0;
}
