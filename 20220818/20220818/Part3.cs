using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20220818
{
    internal class Part3
    {
        static void Main(string[] args)
        {
            Console.WriteLine("숫자 입력: ");   //옆에 붙지 않음. 왜일까
            int input = int.Parse(Console.ReadLine());  //입력과 형변환을 동시에

            if (input % 2 == 0)
            {
                Console.WriteLine("짝수입니다.");
            }
            else
            {
                Console.WriteLine("홀수입니다.");
            }

            //현재시간 구하기
            Console.WriteLine(DateTime.Now.Year);
            Console.WriteLine(DateTime.Now.Month);
            Console.WriteLine(DateTime.Now.Day);
            Console.WriteLine(DateTime.Now.Hour);
            Console.WriteLine(DateTime.Now.Minute);
            Console.WriteLine(DateTime.Now.Second);

            //오전과 오후 구분하기

            if (DateTime.Now.Hour < 12)
            {
                Console.WriteLine("오전입니다.");
            }
            else if (DateTime.Now.Hour >= 12)
            {
                Console.WriteLine("오후입니다.");
            }

            //삼항연산자
            //변수를 선언합니다
            string input1 = Console.ReadLine();
            int number = int.Parse(input1);

            //조건을 구분합니다
            Console.WriteLine(number > 0 ? "자연수입니다" : "자연수가 아닙니다.");

            //문자열 인식해주는 함수 Contains()
            Console.WriteLine("입력: ");
            String line = Console.ReadLine();

            if (line.Contains("안녕"))
            {
                Console.WriteLine("안녕하세요......!");
            }
            else
            {
                Console.WriteLine("^^");
            }
        }
    }
}
