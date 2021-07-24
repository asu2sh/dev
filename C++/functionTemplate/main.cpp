#include <iostream>

/* Syntax:

template <typename T>
T functionName(T parameter1, T parameter2, ...){
    // code
}

--> A function template starts with the keyword template,
 followed by template parameter(s) inside <>
  which is followed by the function definition.

--> In the above code, T is a template argument
 that accepts different data types (int, float, etc.),
  and typename is a keyword.

--> When an argument of a data type is passed to functionName(),
 the compiler generates a new version of functionName() 
 for the given data type.

 Calling a Function Template:
 --> Once we've declared and defined a function template,
  we can call it in other functions or templates
   (such as the main() function) with the following
  Syntax:
    functionName<dataType>(parameter1, parameter2, ...);
*/

template <typename T>
T add(T num1, T num2){
    return (num1 + num2);
}

int main(){

    int result1;
    double result2;

    result1 = add<int>(2, 3);
    result2 = add<double>(2.3, 3.4);

    std::cout << result1 << "\n" << result2 << std::endl;

}