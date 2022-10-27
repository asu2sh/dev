using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DIP
{
    public enum Relationship
    {
        Parent, Child, Sibling
    }

    public class Person
    {
        public string Name;
    }
    public interface IRelationshipBrowser
    {
        IEnumerable<Person> FindAllChildrenOf(string name);
    }

    // low-lvl
    public class Relationships : IRelationshipBrowser
    {
        private List<(Person, Relationship, Person)> relations = new List<(Person, Relationship, Person)> ();

        public void AddParentAndChild(Person parent, Person child)
        {
            relations.Add((parent, Relationship.Parent, child));
            relations.Add((child, Relationship.Child, parent));
        }

        public IEnumerable<Person> FindAllChildrenOf(string name)
        {
            return relations.Where(
                x => x.Item1.Name == name && x.Item2 == Relationship.Parent)
                .Select(r => r.Item3);
        }
    }



    public class Program
    {
        public Program(IRelationshipBrowser browser)
        {
            foreach(var p in browser.FindAllChildrenOf("Asur"))
                Console.WriteLine($"Asur has a child called {p.Name}");
        }
        static void Main(string[] args)
        {
            var parent = new Person { Name = "Asur" };
            var child1 = new Person { Name = "hri" };
            var child2 = new Person { Name = "ary" };

            var relationships = new Relationships();
            relationships.AddParentAndChild(parent, child1);
            relationships.AddParentAndChild(parent, child2);

            new Program(relationships);
        }

    }
}
