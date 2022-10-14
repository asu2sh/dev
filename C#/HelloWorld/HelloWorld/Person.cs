
using System;

namespace HelloWorld
{
    public class Person
    {
        public string firstName = "Ashutosh";
        public string lastName = "Ray";
        public int birthYear = 1999;

        public int age()
        {
            return 2022 - birthYear;
        }

        public void greet()
        {
            Console.WriteLine("My name is {0} {1} & I am {2} years old", firstName, lastName, age());
        }

    }
}
