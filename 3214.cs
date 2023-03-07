using System;

class Program {
    static void Main(string[] args) {
        int E, F, C;
        string[] valores = Console.ReadLine().Split(' ');
        E = int.Parse(valores[0]);
        F = int.Parse(valores[1]);
        C = int.Parse(valores[2]);

        int total_vazia = E + F;
        int total_bebidas = 0;

        while (total_vazia >= C) {
            int new_drinks = total_vazia / C;
            total_bebidas += new_drinks;
            total_vazia = total_vazia % C + new_drinks;
        }

        Console.WriteLine(total_bebidas);
    }
}
