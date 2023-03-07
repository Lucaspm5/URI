using System;

class MainClass {
  public static void Main (string[] args) {
    string line;
    long n1, n2, sum;

    while ((line = Console.ReadLine()) != null) {
      string[] input = line.Split(' ');
      n1 = long.Parse(input[0]);
      n2 = long.Parse(input[1]);
      sum = n1 ^ n2;
      Console.WriteLine(sum);
    }
  }
}
