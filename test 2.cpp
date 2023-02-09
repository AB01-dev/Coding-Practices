#include <iostream>
using namespace std;

template <class T>

class Swap
{
	T a, b;

	public:

		void display()
		{
			cout << a << " " << b << endl;
		}

		T swap(T a, T b)
		{
			T temp = a;
			a = b;
			b= temp;
			this->a = a;
			this->b = b;
		}
};

int main() 
{
	Swap <int> obj;
	obj.swap(1,2);
	obj.display();
	Swap <float> obj2;
	obj2.swap(1.2, 2.1);
	obj2.display();

return 0;
}