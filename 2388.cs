using System;

class Program {
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int d = 0; //distância total percorrida
        for(int i = 0; i < n; i++) {
            string[] linha = Console.ReadLine().Split(' ');
            int t = int.Parse(linha[0]);
            int v = int.Parse(linha[1]);
            d += t * v;
        }
        Console.WriteLine(d);
    }
}
