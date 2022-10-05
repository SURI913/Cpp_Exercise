using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _22020823
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            Console.WriteLine(random.NextDouble());
            Console.WriteLine(random.Next(10, 100));
            Console.WriteLine(random.Next(10,100));
            Console.WriteLine(random.Next(10, 100));
            Console.WriteLine(random.Next(10,100));

            //변수를 선언합니다
            List<int> list = new List<int>() { 1, 2, 3, 4 };
            

            //반복을 수행합니다.
            foreach (var item in list)
            {
                Console.WriteLine("Count: "+list.Count + "\titem: " + item);
            }
        }
    }
}
