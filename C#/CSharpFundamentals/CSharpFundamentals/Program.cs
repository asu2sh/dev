using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace CSharpFundamentals
{
    public enum ShippingMethod
    {
        RegularMail = 1,
        AirMail = 2,
        Express = 3
    }

    public class Person
    {
        public int Age;
    }

    class Program
    {
        static void Main(string[] args)
        {
            //int[] numbers = new int[3];

            var numbers = new int[3];
            numbers[0] = 1;

            Console.WriteLine(numbers[0]);
            Console.WriteLine(numbers[1]);
            Console.WriteLine(numbers[2]);

            var name = new string[3] { "Asu", "tosh", "Ray" };
            Console.WriteLine(name[0] + name[1] + " " + name[2]);

            var firstName = "Ashutosh";
            var lastName = "Ray";

            string myFullName = string.Format("My name is {0} {1}", firstName, lastName);
            var names = new String[3] { "John", "Jack", "Mary" };
            var formattedNames = String.Join(",", names);
            Console.WriteLine(formattedNames);

            var method = ShippingMethod.Express;
            Console.WriteLine((int)method);

            var methodId = 2;
            Console.WriteLine((ShippingMethod)methodId);

            var methodName = "RegularMail";
            var shippingMethod = (ShippingMethod)Enum.Parse(typeof(ShippingMethod), methodName);
            Console.WriteLine(shippingMethod);
            Console.WriteLine(typeof(ShippingMethod));

            var array1 = new int[3] { 1, 2, 3 };
            var array2 = array1;
            array2[0] = 0;
            Console.WriteLine(array1[0]);

            var person = new Person() { Age = 20 };
            MakeOld(person);
            Console.WriteLine(person);
            Console.WriteLine(person.Age);

            //Console.WriteLine("What's your name?");
            //var num = Console.ReadLine();
            //Console.Write("My name is " + num);
            //Console.WriteLine("My name is: " + num);

            //var random = new Random();
            //var buffer = new char[10];

            //for (var i = 0; i < 10; i++)
            //{
            //    Console.Write((char)('a' + random.Next(0, 26)));
            //    buffer[i] = (char)('a' + random.Next(0, 26));
            //}
            //Console.WriteLine();

            //var password = new String(buffer);

            //Console.WriteLine(password);

            var random = new Random();
            var rand = random.Next(1, 10);
            Console.WriteLine(rand);

            for (var i = 1; i <= 5; i++)
            {
                Console.WriteLine(random.Next(0, 10) + 1);
            //    var num = Console.ReadLine();
            //    var num1 = int.Parse(num);
            //    if (num1 == rand)
            //        Console.WriteLine("You Won");
            //    else
            //        Console.WriteLine("You Lost");
            }


            var numbersArray = new [] { 1, 2, 3, 4, 6, 5 };

            Console.WriteLine(numbersArray);
            Console.WriteLine(numbersArray.Length);

            var index = Array.IndexOf(numbersArray, 4);
            Console.WriteLine(index);

            //Array.Clear(numbersArray, 1, 3);

            foreach(var i in numbersArray)
                 Console.WriteLine(i);

            var arr2 = new int[3];

            Array.Copy(numbersArray, arr2, 3);

            foreach(int i in arr2)
                Console.WriteLine(i);

            Array.Sort(numbersArray);


            var numList = new List<int>() { 1, 2, 3, 4, 5 };

            numList.Add(6);
            numList.AddRange(new int[3] { 9, 8, 7 });


            foreach (int i in numList)
                Console.WriteLine(i);

            var dateTime = new DateTime(2020, 1, 1);
            Console.WriteLine(dateTime);

            var now = DateTime.Now; 
            Console.WriteLine(now);

            var today = DateTime.Today;
            Console.WriteLine(today);

            var yesterday = today.AddDays(-1);

            var timeSpan = new TimeSpan(1, 30, 05);
            Console.WriteLine(timeSpan);

            Console.WriteLine(TimeSpan.FromDays(5));

            var start = DateTime.Now;
            var end = DateTime.Now.AddMinutes(5);

            var duration = end - start;

            Console.WriteLine(duration);


            var fullName = "Ashutosh Ray ";
            Console.WriteLine("Trim: {0}", fullName.Trim());
            Console.WriteLine("ToUpper: {0}", fullName.Trim().ToUpper());

            var idx = fullName.IndexOf(' ');
            Console.WriteLine(idx);

            var FirstName = fullName.Substring(0, idx);
            var LastName = fullName.Substring(idx + 1);

            Console.WriteLine(idx + "\n" + FirstName + " \n" + LastName);

            // Summarising Text
            var sentence = "This is going to be a really really really really really long text.";
            const int maxmLength = 5;

            if (sentence.Length < maxmLength)
                Console.WriteLine(sentence);
            else
            {
                var words = sentence.Split(' ');
                var totalCharacters = 0;
                var summaryWOrds = new List<string>();

                foreach(var word in words)
                {
                    totalCharacters += word.Length + 1;
                    if(totalCharacters > maxmLength)
                      break;
                    summaryWOrds.Add(word);
                }

                var summary = String.Join(" ", summaryWOrds) + "...";
                Console.WriteLine(summary);
            }


            var builder = new StringBuilder("Hi");

            builder.Append('-', 5);
            Console.WriteLine(builder);

            builder.Insert(2, new string('e', 3));
            Console.WriteLine(builder);

            builder.Remove(5, 5);
            Console.WriteLine(builder);

            builder.Replace('e', 'i');
            Console.WriteLine(builder);

            builder.Clear();
            Console.WriteLine(builder);


            //Working With Files

            File.Copy(@"c:\temp\myfile.jpg", @"d:\temp\myfile.jpg", true);

        }

        public static void MakeOld(Person person)
        {
            person.Age += 10;
        }
    }
}
