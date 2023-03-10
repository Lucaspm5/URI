using System;

class Program
{
    static void Main(string[] args)
    {
        int[,] tabela = { {120, 85, 85, 70, 56, 50, 34},
                          {0, 0, 0, 0, 0, 0, 0} }; // tabela de alimentos e quantidades de vitamina C

        int t = int.Parse(Console.ReadLine()); // número de casos de teste
        while (t != 0)
        {
            for (int i = 0; i < t; i++)
            {
                string[] entrada = Console.ReadLine().Split(); // leitura da entrada
                int n = int.Parse(entrada[0]); // quantidade consumida
                int alimento = -1; // índice do alimento na tabela

                // determinação do índice do alimento na tabela
                switch (entrada[1])
                {
                    case "suco":
                        alimento = 0;
             break;
                    case "morango":
                        alimento = 1;
                        break;
                    case "mamao":
                        alimento = 2;
                        break;
                    case "goiaba":
                        alimento = 3;
                        break;
                    case "manga":
                        alimento = 4;
                        break;
                    case "laranja":
                        alimento = 5;
                        break;
                    case "brocolis":
                        alimento = 6;
                        break;
                }

                tabela[1, alimento] += n; // atualização da quantidade consumida do alimento
            }

            int total = 0; // total de vitamina C consumida
            for (int i = 0; i < 7; i++)
            {
                total += tabela[0, i] * tabela[1, i]; // cálculo da quantidade de vitamina C consumida de cada alimento
            }

            // verificação do consumo diário recomendado
            if (total >= 110 && total <= 130)
            {
                Console.WriteLine(total + " mg");
            }
            else if (total < 110)
            {
                Console.WriteLine("Mais " + (110 - total) + " mg");
            }
            else if (total > 130)
            {
                Console.WriteLine("Menos " + (total - 130) + " mg");
            }

            tabela[1, 0] = tabela[1, 1] = tabela[1, 2] = tabela[1, 3] = tabela[1, 4] = tabela[1, 5] = tabela[1, 6] = 0; // reinicialização da tabela
            t = int.Parse(Console.ReadLine()); // leitura do próximo número de casos de teste
        }
    }
}
