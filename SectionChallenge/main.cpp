#include <iostream>

using namespace std;

// Function Protoypes
int *apply_all(const int *const arr_1, size_t size_arr_1, const int *const arr_2, size_t size_arr_2);
void print(const int *const arr, size_t size);

int main()
{
    const size_t array_1_size{5};
    const size_t array_2_size{3};

    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 20, 30};

    int *results{nullptr};

    cout << "Array 1" << endl;
    print(array_1, array_1_size);

    cout << "Array 2" << endl;
    print(array_2, array_2_size);

    results = apply_all(array_1, array_1_size, array_2, array_2_size);
    constexpr size_t results_size(array_1_size * array_2_size);

    cout << "Print Expression" << endl;
    print(results, results_size);

    delete[] results;
    return 0;
}

void print(const int *const arr, size_t size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int *apply_all(const int *const arr_1, size_t size_arr_1, const int *const arr_2, size_t size_arr_2)
{
    int *new_storage{nullptr};

    new_storage = new int[size_arr_1*size_arr_2];

    int pos{0};
    for (size_t i{0}; i < size_arr_1; i++)
    {
        for (size_t j{0}; j < size_arr_2; j++)
        {
            new_storage[pos] = arr_1[i] * arr_2[j];
            pos++;
        }
    }
    return new_storage;
}
