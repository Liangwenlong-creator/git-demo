#include <iostream>
#include "swap.h"


using namespace std;

int main()
{
    
    int a=5, b=7;
    cout << "before swap: " << a << " " << b <<endl;
    swap(a, b);
    // cout << "after swap: " << a << " " << b <<endl;
    return 0;
}
