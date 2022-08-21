#include <iostream>

using namespace std;

template <class T>
class Arithmetic {
    private:
        T number1;
        T number2;
    public:
        Arithmetic(T n1, T n2) {
            number1 = n1;
            number2 = n2;
        }
        T add() {
            return number1 + number2;
        }
        T sub() {
            return number1 - number2;
        }
};

int main() {
    Arithmetic<int> ar(5,3);
    cout << "Sum: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;
}