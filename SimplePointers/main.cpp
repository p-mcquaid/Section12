#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int num{10};

    cout << "The value of num is: " << num << endl;                       // Value stored in num
    cout << "The size of variable num is: " << sizeof num << endl;        // How large the int varible is in bytes
    cout << "The address of variable num in memory is: " << &num << endl; // Where the variable is stored in memory (hexidecimal)

    cout << "---------Pointer------------" << endl;
    int *p;                                                   // Declaration of pointer p, initialised with a random address
    cout << "The value of p is: " << p << endl;               // what p is pointing to
    cout << "The size of pointer p is: " << sizeof p << endl; // how large pointer p is in bytes
    cout << "The address of p in memory is: " << &p << endl;  // where pointer p is stored in memory

    p = {nullptr}; // Null pointer, make pointer point to nothing. Gets rid of random address already stored in p
    cout << "The new value of p is: " << p << endl;

    cout << "---------Pointer's Size/Type------------" << endl;
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "Size of p1: " << sizeof p1 << endl;
    cout << "Size of p2: " << sizeof p2 << endl;
    cout << "Size of p3: " << sizeof p3 << endl;
    cout << "Size of p4: " << sizeof p4 << endl;
    cout << "Size of p5: " << sizeof p5 << endl;
    // Size to store the pointers should all be the same since, data type shouldn't affect it
    // i.e. int pointer should be the same size as a vector pointer even though vector is a more complex type

    cout << "---------Pointer's Type cont-----------" << endl;

    int score{10};
    double high_temp{37.5};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout << "Value of score: " << score << endl;
    cout << "Address of score: " << &score << endl;
    cout << "Address of score_ptr: " << score_ptr << endl;

    //score_ptr = &high_temp; 
    //compiler error, types do not match so address cannot be assigned

    return 0;
}