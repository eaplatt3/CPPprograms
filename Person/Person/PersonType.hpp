//  PersonType.hpp
//  Created by M_Alrajab on 9/17/17.
//  Copyright © 2017 M.Alrajab. All rights reserved.

#ifndef PersonType_hpp
#define PersonType_hpp

#include <stdio.h>
#include <string>
using namespace std;
class PersonType{
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.
    
    void setFirstName(string first);
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last
    
	void setLastName(string last);

	void setMiddleName(string middle);

    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.
    
    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.
    
	string getMiddleName() const;

    PersonType(string first = "", string last = "");
    //Constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; lastName = last
    
private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
	string middleName;
};
#endif /* PersonType_hpp */
