#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl;

    // Changing reference to pointer
    *score_ptr = 200;

    cout << *score_ptr << endl; // 2000
    cout << score << endl;      // 200

    cout << "\n---------------------" << endl;
    double high_temp{100.7}, low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl; // 107.4
    temp_ptr = &low_temp;      // Sets point to look at the address that contains low temp
    cout << *temp_ptr;         // 37.4

    cout << "\n---------------------" << endl;
    string name{"Paul"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;
    name = "Fearghal";
    cout << *string_ptr << endl;

    cout << "\n---------------------" << endl;
    vector<string> stooges{"Larry", "Curley", "Moe"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;
    cout << vector_ptr << endl;

    cout << "First Stooge: " << (*vector_ptr).at(0) << endl;

    cout << "Stooges:" << endl;
    for (auto stooge : *vector_ptr)
        cout << stooge << " ";
    cout << endl;

    return 0;
}