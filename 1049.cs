using System;

class Program
{
    static void Main()
    {
        string a, b, c;
        a = Console.ReadLine();
        b = Console.ReadLine();
        c = Console.ReadLine();

        if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c') Console.WriteLine("aguia");
        if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o') Console.WriteLine("pomba");
        if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o') Console.WriteLine("homem");
        if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h') Console.WriteLine("vaca");
        if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm') Console.WriteLine("pulga");
        if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r') Console.WriteLine("lagarta");
        if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h') Console.WriteLine("sanguessuga");
        if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o') Console.WriteLine("minhoca");
        
    }
}
