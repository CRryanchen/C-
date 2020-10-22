// stone1.cpp -- user-defined conversion functions
// compile with stonewt1.cpp
#include <iostream>
#include "11.19_stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert ro int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";

    return 0;
}