#include	<iostream>
using	namespace	std;
const	int	SIZE = 3;		//	Arrays	will	be	2-D	3x3	arrays
							//	Function	prototype
void	inputMagicSq(int[][SIZE],int);
void	showArray(int[][SIZE]);
bool	isMagicSquare(int[][SIZE]);
int	main()
{
	int	array1[SIZE][SIZE];
	cout << "Enter	square	elements	3x3.	\n\n";
	
	inputMagicSq(array1, SIZE);

	cout << "You	entered.	\n\n";
	//ToDo	2:		call	showArray	to	print	elements
	showArray(array1);
	//ToDO	3:	check	if	the	square	is	magic	or	not
	cout << "\n";
	cout << ( (isMagicSquare(array1))? "this is a Magic" : "Its Not Magic") << endl; //Conditional operater 

	system("pause");

	return	0;
}
void showArray(int arr[][SIZE])
{
	for (int row = 0; row < SIZE; row++)//rows of the square
	{
		for (int col = 0; col < SIZE; col++)//columns of the square
			cout << arr[row][col] << "\t";
		cout << endl;
	}
}

void inputMagicSq(int arr[][SIZE], int size)
{

	for (int row = 0; row < SIZE; row++)//rows of the square
	{
		for (int col = 0; col < SIZE; col++)//columns of the square
			cin >> arr[row][col];
	}
}

bool	isMagicSquare(int	A[][SIZE])
{
	int	sum1 = 0, sum2 = 0, sum3 = 0;

	//	ToDo:	Check	column	sums
	for (int row = 0; row < SIZE; row++)
	{
		sum1 += A[row][0];
		sum2 += A[row][1];
		sum3 += A[row][3];

	}
	if (!(sum1 == sum2	&&	sum2 == sum3))
		return	false;

	//	If	column	sums	are	OK,	check	row	sums
	//	But	first	reinitialize	the	accumulators
	sum1 = sum2 = sum3 = 0;
	for (int col = 0; col < SIZE; col++)
	{
		sum1 += A[col][0];
		sum2 += A[col][1];
		sum3 += A[col][3];
	}
	if (!(sum1 == sum2	&&	sum2 == sum3))
		return	false;
	//	If	row	sums	are	also	OK,	compute	the	2	diagonal	sums
	//	Let	sum3	continue	to	hold	the	value	the	diagonal	sums	should	equal
	sum1 = A[0][0] + A[1][1] + A[2][2];		//	Right	diagonal
	sum2 = A[0][2] + A[1][1] + A[2][0];		//	Left	diagonal
	if (!(sum1 == sum2	&&	sum2 == sum3))
		return	false;
	//	If	we	got	this	far.	Everthing	adds	up	to	the	same	value.
	return	true;
}
