#include <iostream>
using namespace std;

template <class T>

class Swap
{
    T a, b;

    public:

        T swap(T a, T b)
        {
            T temp = a;
            a = b;
            b = temp;
            this->a = a;
            this->b = b;
        }

        void display()
        {
            cout << "a: " << a << "\nb: " << b << endl;
        }
};

int main() {

    int a, b;
    Swap<int> obj;
    obj.swap(1,2);
    cout << "Before swapping:\n";
    obj.display();
    Swap<float> obj2;
    obj2.swap(1.4,2.5);
    cout << "After swapping:\n";
    obj2.display();

return 0;
}