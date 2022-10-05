using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20220818
{
    internal class _7
    {
        static void Main(string[] args)
        {
            Console.WriteLine("년도를 입력하시오: ");
            string input = Console.ReadLine();
            int month = int.Parse(input);
            switch (month)
            {
                case 0:
                    Console.WriteLine("원숭이");
                    break;
                case 1:
                    Console.WriteLine("닭");
                    break ;
                case 2:
                    Console.WriteLine("개");
                    break;
                case 3:
                    Console.WriteLine("돼지");
                    break;
                case 4:
                    Console.WriteLine("쥐");
                    break;
                case 5:
                    Console.WriteLine("소");
                    break;
                case 6:
                    Console.WriteLine("범");
                    break;
                case 7:
                    Console.WriteLine("토끼");
                    break;
                case 8:
                    Console.WriteLine("용");
                    break;
                case 9:
                    Console.WriteLine("뱀");
                    break;
                case 10:
                    Console.WriteLine("말");
                    break;
                default:
                    Console.WriteLine("양");
                    break;
            }
        }
    }
}
