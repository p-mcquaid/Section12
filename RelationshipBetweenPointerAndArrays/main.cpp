#include <iostream>
#include <random>
#include <time.h>
#include <vector>

using namespace std;

void return_random_int(vector<int> &v);

int main()
{

#pragma region Get Length
    int length{0};
    cout << "Enter the size of the array: ";
    cin >> length;
#pragma endregion

    vector<int> scores(length);
    return_random_int(scores);

    // Score Pointer
    int *score_ptr{&scores.front()};
    cout << "Value of score pointer: " << score_ptr << endl;

    cout << "Values in scores" << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores.at(i) << endl;
    }

    cout << "-----Array Subscript Notation-----" << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores[i] << endl;
    }

    cout << "-----Pointer Subscript Notation-----" << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << score_ptr[i] << endl;
    }

    cout << "-----Pointer Offset Notation-----" << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << *(score_ptr + i) << endl;
    }
    
    return 0;
}

void return_random_int(vector<int> &v)
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(1, 100);

    for (size_t i = 0; i < v.size(); i++)
    {
        v.at(i) = dist(rng);
    }
}
