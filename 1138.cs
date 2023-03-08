using System;

public class Program
{
    static void Main(string[] args)
    {
        int a, b;

        while (true)
        {
            string[] line = Console.ReadLine().Split(' ');
            a = int.Parse(line[0]);
            b = int.Parse(line[1]);

            if (a == 0 && b == 0) break;

            for (int i = 0; i < 10; i++)
            {
                Console.Write("{0}", Digits(b, i) - Digits(a - 1, i));
                Console.Write(i == 9 ? "\n" : " ");
            }
        }
    }

    static long Digits(int n, int d)
    {
        long res = 0, pot = 1, rem = 0;
        while (n > 0)
        {
            int x = n % 10;
            n /= 10;

            if (x > d) res += (n + 1) * pot;
            else res += n * pot;
            if (x == d) res += rem + 1;

            if (d == 0) res -= pot;

            rem += pot * x;
            pot *= 10;
        }
        return res;
    }
}
