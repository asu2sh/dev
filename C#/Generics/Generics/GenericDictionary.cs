using System;

namespace Generics
{
    public class GenericDictionary<TKey, TValue>
    {
        public void Add(TKey key, TValue value)
        {
            Console.ForegroundColor = ConsoleColor.Blue;
            System.Console.WriteLine("Dictionary Created...");
        }
    }
}
