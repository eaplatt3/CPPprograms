#include <iostream>

using namespace std;

class Student{
private:
    int* stdId;
public:
    Student(){}
    Student(int stdId){
        this->stdId=new int;
        *this->stdId=stdId;
    }
    Student(const Student &student){
        this->stdId=new int;
        *this->stdId=*student.stdId;
    }
    ~Student(){ delete stdId;  }
    
    int getStdId(){return *stdId;}
    
    //Changing the way + works
    Student operator+(const Student &std){
      Student tmpStd; tmpStd.stdId=new int;
      *tmpStd.stdId=*this->stdId + *std.stdId;
      return tmpStd;
    }
    
    //Changing the way = works 
    Student operator=(const Student &std){
      stdId=new int;
      *this->stdId=*std.stdId;
      return *this;
    }
    
	//overloading inseration operator
    friend ostream &operator<<(ostream &outdddd, Student std);
    
};
  //overloading inseration operator
  ostream &operator<<(ostream &outdddd, Student std){
  outdddd << "The Student ID is "<<std.getStdId() << endl;
  return outdddd;
}

int main() {
    Student  std1(121),std2(465),std3(2); // use the copy constructor
    std3.operator=(std1.operator+(std2));
    cout << std3 << endl;
}
