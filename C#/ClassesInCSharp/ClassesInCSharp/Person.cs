using System;

namespace ClassesInCSharp
{
    public class Person
    {
        public string Name;
        private DateTime _birthDate;

        public Person(DateTime birthdate)
        {
            BirthDate = birthdate;
        }
        public DateTime BirthDate { get; private set; }

        public int Age
        {
            get
            {
                var timeSpan = DateTime.Today - BirthDate;
                var years = timeSpan.Days / 365;

                return years;
            }
        }

        public void SetBirthDate(DateTime birthDate)
        {
            _birthDate = birthDate;
        }

        public DateTime GetBirthDate()
        {
            return _birthDate;
        }

        public void Introduce(string to)
        {
            Console.WriteLine("Hi {0}, I am {1}.", to, Name);
        }

        //public static Person Parse(string str)
        //{
        //    var person = new Person();
        //    person.Name = str;

        //    return person;
        //}
    }
}
