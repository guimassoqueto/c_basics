#include <iostream>

using namespace std;

template <class T>
class Arithmetic {
    private:
        T n1;
        T n2;
    public:
        Arithmetic(T n1, T n2);
        T add();
};

template<class T>
Arithmetic<T>::Arithmetic(T n1, T n2) {
    this->n1 = n1;
    this->n2 = n2;
}

template<class T>
T Arithmetic<T>::add() {
    T result = n1 + n2;
    return result;
}

int main() {
    Arithmetic<int> integers(5, 3);
    cout << "Sum: " << integers.add() << endl;

    Arithmetic<float> floats(5.2, 3.4);
    cout << "Sum: " << floats.add() << endl;
}