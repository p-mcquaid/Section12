#include <iostream>
#include <vector>

using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    cout << "a:" << a << endl;
    *a = *b;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    *b = temp;
    cout << "b:" << b << endl;
}

void display(const vector<string> *v)
{
    for (auto str : *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
    {
        cout << *array++ << endl;
    }
    

}

int main()
{
#pragma region Part 1
    int value{10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "--------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;

#pragma endregion

#pragma region Part 2
    int x{100}, y{95};
    cout << "\nx: " << x << endl;
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

#pragma endregion

#pragma region
    cout << "---------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "\n--------------" << endl;
    int scores[]{100,98,96,32,-1};
    display(scores,-1);

#pragma endregion

                                 return 0;
}