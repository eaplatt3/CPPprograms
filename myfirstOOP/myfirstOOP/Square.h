//Class Def.
class Square
{
private:
	int sideA;
	int sideB;

//Members
public:
	//Constructor ***Required***
	Square(int a, int b)
	{
		sideA = a;
		sideB = b;

	}
	Square()
	{
		sideA = 0;
		sideB = 0;
	}

	//Mutators
	void setSideA(int s)
	{
		sideA = s;
	}

	void setSideB(int p)
	{
		sideB = p;
	}

	//
	int getSideA()
	{
		return sideA;
	}

	int getSideB()
	{
		return sideB;
	}
	//Member Functions
	void print();
	
	void area();

	void perimeter();

}; 