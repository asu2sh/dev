using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP
{
    public class Rectangle
    {
        public virtual int Width { get; set; }
        public virtual int Height { get; set; }
        public Rectangle()
        {

        }
        public Rectangle(int width, int height)
        {
            Width = width;
            Height = height;
        }
        public override string ToString()
        {
            return $"{nameof(Width)}: {Width}, {nameof(Height)}: {Height}"; 
        }
    }

    public class Square : Rectangle
    {
        public override int Width
        {
            set { base.Width = base.Height = value; }
        }

        public override int Height
        {
            set { base.Height = base.Width = value; }
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Rectangle rect = new Rectangle(2, 3);
            Console.WriteLine($"{rect} has area {Area(rect)}");

            Rectangle sq = new Square();
            sq.Width = 5;
            Console.WriteLine($"{sq} has area {Area(sq)}");
        }

        static public int Area(Rectangle r) => r.Width * r.Height;
    }
}
