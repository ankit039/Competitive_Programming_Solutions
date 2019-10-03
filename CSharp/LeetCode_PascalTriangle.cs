using System;
using System.Collections.Generic;

namespace PascalsTriangle
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input the Pascal's Triangle size: ");
            var triangleSize = Console.ReadLine();

            if (int.TryParse(triangleSize, out var size)) {
                var pascalTriangle = Generate(size);
                PrintPascalsTriangle(pascalTriangle);
            }
        }

        public static IList<IList<int>> Generate(int numRows) {
            IList<IList<int>> list = new List<IList<int>>();
            
            for (var i = 1; i <= numRows; i++) {
                list.Add(new List<int>());
                
                var count = 0;
                list[i - 1].Add(1);
                
                while (count < i - 1) {
                    if (i > 1 && count > 0) {
                        list[i - 1].Add(list[i - 2][count - 1] + list[i - 2][count]);
                    }
                    
                    count++;
                }
                
                if (i > 1) {
                    list[i - 1].Add(1);
                }
            }
        
            return list;
        }

        private static void PrintPascalsTriangle(IList<IList<int>> listOfLists) {
            for (var i = 0; i < listOfLists.Count; i++) {
                for (var j = 0; j < listOfLists[i].Count; j++) {
                    Console.Write($"{ listOfLists[i][j]} ");
                }

                Console.WriteLine();
            }
        }
    }
}
