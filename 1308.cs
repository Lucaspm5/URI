using System;

class MainClass {
    public static void Main() {
        int t = int.Parse(Console.ReadLine());

        while (t-- > 0) {
            long n = long.Parse(Console.ReadLine());

            // Utilizando a fórmula da soma dos termos de uma PA:
            // a1 = 1, d = 1, an = ? (calcular)
            // n = (an - a1) / d + 1
            // an = a1 + (n - 1) * d
            // S = (a1 + an) * n / 2

            long an = (long) Math.Sqrt(2 * n);
            if (an * (an + 1) > 2 * n) an--;

            long S = (1 + an) * an / 2;
            if (S < n) {
                S += an + 1;
            }

            Console.WriteLine(an);
        }
    }
}
