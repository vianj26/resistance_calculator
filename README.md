INSTALLATION:

-No prerequisite needed aside from default libraries in c++.
-utils.cpp and utils.h runs independently from the main.cpp, you can just copy the code.
-I use vs code in this but this will work on any IDE compatible with c++.

COMPILATION:
-edit the main.cpp to your content and compile 2 files (main.cpp and utils.cpp)

-if you are compiling using clang:
cl main.cpp utils.cpp

-if you are compiling using g++:
g++ main.cpp utils.cpp

-if you just want the obj file of utils.cpp(to use for your own project):
cl -c utils.cpp
g++ -c utils.cpp

make sure that you still include utils.h file when you transfer utils.cpp files in your own project.


DESIGN:
-utils.cpp and utils.h declares a class named "Resistor" with variable resistance.
-the class overloads & and || symbols to simulate series and parallel connection respectively.
-for those not familiar in c++ or in programming in general, main.cpp has example on how to implement this.


# resistance_calculator
Simple resistance calculator with operator overloading

How to use it?

& - resistors are connected in series.
Example: Calculate the total resistance of R1 (100 ohms) and R2 (200 ohms) connected in series.
CODE:
```cpp
#include <iostream>

using namespace std;

int main()
{
  Resistor r1(100), r2(200);

  double result = r1 & r2;

  cout << result.resistance <<endl;
}
```
OUTPUT: 300

|| - resistors are connected in parallel.
Example: Calculate the total resistance of R1 (100 ohms) and R2 (200 ohms) connected in parallel.
CODE:
```cpp
#include <iostream>

using namespace std;

int main()
{
  Resistor r1(100), r2(200);

  double result = r1 || r2;

  cout << result.resistance <<endl;
}
```
OUTPUT: 66.6667

With a more complex circuit connections, you can use parenthesis to specify what should prioritize first.

Example: A series of 100 ohms resistor and 200 ohms resistor is parallel with a series of three 300 ohms resistor.

CODE:
```cpp
#include <iostream>

int main()
{
  Resistor r1(100), r2(200), r3(300), r4(300), r5(300);

  Resistor result = (r1 & r2) || (r3 & r4 & r5);

  cout << result.resistance << endl;
}
```
OUTPUT: 225

License:

This project is open-source and available under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code for your projects.
