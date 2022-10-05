using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20220818
{
    internal class Program
    {
        static void Main(string[] args )
        {
            // inch를 받아 cm 단위를 구하는 프로그램
            double cm;
            string inch = Console.ReadLine();   //입력
            cm = double.Parse(inch) * 2.54;
            Console.WriteLine(int.Parse(inch) + "inch는 " + cm + "cm이다.");   //출력

            //kg단위를 받아 pound단위를 구하는 프로그램
            double pound;
            string kg = Console.ReadLine(); //입력
            pound = double.Parse(kg) * 2.20462262;
            Console.WriteLine(int.Parse(kg) + "kg는 " + pound + "pound이다."); //출력

            //원의 반지름을 입력받아 원의 둘레와 넓이를 구하는 코드를 작성하시오
            string radius = Console.ReadLine(); //입력
            double area, circum;
            double pi = 3.141592;
            area = double.Parse(radius) * double.Parse(radius) * pi;    //넓이 계산
            circum = double.Parse(radius) * 2 * pi; //둘레 계산
            Console.WriteLine("반지름 "+ radius + " 의 둘레: " + circum); //둘레 출력
            Console.WriteLine("반지름 " + radius + " 의 넓이: " + area); //넓이 출력
        }
    }
}
