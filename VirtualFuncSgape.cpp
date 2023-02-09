#include <iostream>
using namespace std;

class Shape
{
	double x, y;

	public:

		void getData(double x, double y)
		{
			this->x = x;
			this->y = y;
		} virtual void displayArea() = 0;
};

class Triangle : public Shape
{
	double b, h;

	public:

		void displayArea()
		{
			cout << 1/2 * b * h << endl;
		}
};

class Rectangle : public Shape
{
	double l, b;

	public:

		void displayArea()
		{
			cout << l * b << endl;
		}
};

int main() {

	int choice;
	double x, y;
	Shape *S;

	cout << "1. Triangle\n2. Rectangle\nSelect: ";
	cin >> choice;
	if (choice == 1) 
	{
		Triangle T;
		S = &T;
		cout << "Enter the breadth and height of the Tirangle: ";
		cin >> x >> y;
		S->getData(x,y);
		S->displayArea();
	}
	else if (choice == 2)
	{
		Rectangle R;
		S = &R;
		cout << "Enter the length and breadth of the Rectangle: ";
		cin >> x >> y;
		S->getData(x,y);
		S->displayArea();
	}
	else
	{
		cout << "Invalid Operation!";
	}

return 0;
}