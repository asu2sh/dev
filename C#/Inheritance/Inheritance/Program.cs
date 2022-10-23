
using ClassLibrary1;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace Inheritance
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var customer = new Customer();


            var car = new Car("JH10 9211");


            Text text = new Text();
            Shape shape = text;

            text.Width = 200;
            shape.Width = 100;

            System.Console.WriteLine(text.Width);   //100


            //StreamReader reader = new StreamReader(new MemoryStream());


            var list = new ArrayList();
            list.Add(2);
            list.Add("Asu");

            var anotherList = new List<int>();

            Shape shapes = new Text();
        }
    }
}
