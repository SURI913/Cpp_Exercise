using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _22020823
{
    class FirstClass
    {

    }

    class SecondClass
    {

    }
    class Class1
    {
        //클래스 내부에 클래스 생성
        class FirstClass
        {

        }

        class SecondClass
        {

        }
        static void Main(string[] args)
        {
            //파일 자동으로 생성해주는 기능
            Product product = new Product();

        }
    }

    internal class Product
    {
        public Product()
        {
            //요기에  짠
        }
    }
}
