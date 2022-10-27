using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SRP
{
    public class Journal
    {
        private readonly List<string> entries = new List<string>();

        private static int count = 0;

        public int AddEntry(string text)
        {
            entries.Add($"{++count}: {text}");
            return count;
        }

        public void RemoveEntry(int index)
        {
            entries.RemoveAt(index);
        }

        public override string ToString()
        {
            return String.Join(Environment.NewLine, entries);
        }
    }

    public class Persistence
    {
        public void SaveToFile(Journal j, string filename, bool overwrite = false)
        {
            if (overwrite || !File.Exists(filename))
                File.WriteAllText(filename, j.ToString());
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            var journal = new Journal();
            journal.AddEntry("I killed a bug today.");
            journal.AddEntry("I am following the 3h rule today.");

            Console.WriteLine(journal);

            var p = new Persistence();
            var filename = @"C:\Users\skull\Desktop\journal.txt";
            p.SaveToFile(journal, filename, true);

            Process.Start(filename);

        }
    }
}
