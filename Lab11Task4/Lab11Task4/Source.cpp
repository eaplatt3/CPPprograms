#include	<iostream>
#include	<vector>
using	namespace	std;
class	Student {
private:
	int	gpa;
	string	name;
public:
	Student*	next; //Points to another Student *Linked List*
	Student(int	g, string	n, Student*	nxt) { gpa = g; name = n;	next = nxt; }
	string	getName() { return	name; }
	int	getGpa() { return	gpa; }
};
int	main() {
	Student*	nStd = nullptr;
	bool	flg = false;
	string	tmpName; int	gpa;
	do {
		cout << "Enter	name:	";	cin >> tmpName;
		cout << "Enter	GPA:	";	cin >> gpa;
		nStd = new	Student(gpa, tmpName, nStd);
		cout << "Do	you	want	to	continue	(1	for	YES/	0	for	NO)	>	"; cin >> flg;
	} while (flg);

	Student	*ptrStd = nStd;
	//	clearing	the	memory	is	not	discussed	in	this	example
	return	0;
}