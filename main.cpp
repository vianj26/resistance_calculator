#include <iostream>
#include "utils.h"

using namespace std;




int main()
{
    //Series connection example;
    Resistor r1(100), r2(200), r3(300), r4(300), r5(300);

    Resistor result_series =  r1 & r2;

    cout << result_series.resistance << endl;

    //Parallel connection example;
    Resistor result_parallel = r1 || r2;

    cout << result_parallel.resistance << endl;

    //Series-parallel example;
    Resistor result_compound = (r1 & r2) || (r3 & r4 & r5);

    cout << result_compound.resistance << endl;



    return 0;
}