//  PersonType.cpp
//  Created by M_Alrajab on 9/17/17.
//  Copyright © 2017 M.Alrajab. All rights reserved.

#include "PersonType.hpp"
#include <iostream>
#include <string>

using namespace std;

void PersonType::print() const{
    cout << firstName << " " << lastName;
}

void PersonType::setFirstName(string first){
    firstName = first;
    
}

void PersonType::setLastName(string last) {
	lastName = last;
}

void PersonType::setMiddleName(string middle) {
	middleName = middle;
}


string PersonType::getFirstName() const{
    return firstName;
}

string PersonType::getLastName() const{
    return lastName;
}

string PersonType::getMiddleName() const {
	return middleName;
}

//constructor
PersonType::PersonType(string first, string last){
    firstName = first;
    lastName = last;
}

