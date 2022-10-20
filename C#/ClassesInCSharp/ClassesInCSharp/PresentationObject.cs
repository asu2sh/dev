using System;

namespace ClassesInCSharp
{
    public class PresentationObject
    {
        public int Width { get; set; }
        public int Height { get; set; }
        public void Copy()
        {
            Console.WriteLine("Object Copied");
        }
        public void Duplicate()
        {
            Console.WriteLine("Object Duplicated.");
        }
    }
}
