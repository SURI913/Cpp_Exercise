using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20220818
{
    internal class _8
    {
        static void Main(string[] args)
        {
            Console.WriteLine("달을 입력하시오: ");
            string input = Console.ReadLine();
            int month = int.Parse(input);

            if (month >= 3 && month <= 5)
            {
                Console.WriteLine("봄");
            }
            else if (month >= 6 && month <= 8)
            {
                Console.WriteLine("여름");
            }
            else if (month >= 9 && month <= 11)
            {
                Console.WriteLine("가을");
            }
            else
            {
                Console.WriteLine("겨울");
            }
        }
    }
}
