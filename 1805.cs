using System;

class Program {
    static void Main() {
        long a, b, soma;
        string[] valores = Console.ReadLine().Split();
        a = long.Parse(valores[0]);
        b = long.Parse(valores[1]);
        soma = (b - a + 1) * (a + b) / 2;
        Console.WriteLine(soma);
    }
}
