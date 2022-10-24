using System;

namespace Generics
{
    public class GenericList<T>
    {
        public void Add(T value)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("Book Added...");
        }
        public T this[int index]
        {
            get { throw new NotImplementedException(); }
        }
    }
}
