using System;

class Program {
    static void Main(string[] args) {
        double x, y;
        string[] entrada = Console.ReadLine().Split(' ');
        x = double.Parse(entrada[0]);
        y = double.Parse(entrada[1]);
        if (x == 0 && y == 0) {
            Console.WriteLine("Origem");
        } else if (x == 0) {
            Console.WriteLine("Eixo Y");
        } else if (y == 0) {
            Console.WriteLine("Eixo X");
        } else if (x > 0 && y > 0) {
            Console.WriteLine("Q1");
        } else if (x < 0 && y > 0) {
            Console.WriteLine("Q2");
        } else if (x < 0 && y < 0) {
            Console.WriteLine("Q3");
        } else {
            Console.WriteLine("Q4");
        }
    }
}
