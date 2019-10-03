using System;

/*
    https://leetcode.com/problems/toeplitz-matrix/
*/
namespace ToeplitzMatrix
{
    class Program
    {
        static void Main(string[] args)
        {
            var input = new int[3][]{ 
                new int[] { 1,2,3,4 }, 
                new int[] { 5,1,2,3 },
                new int[] { 9,5,1,2 }
            };

            var solution = Solve(input);

            Console.WriteLine(solution);
        }

        static bool Solve(int[][] matrix) {     
            for (int i = 0; i < matrix.Length - 1; i++) {
                for (int j = 0; j < matrix[i].Length - 1; j++) {
                    if (matrix[i][j] != matrix[i + 1][j + 1]) {
                        return false;
                    }
                }
            }
            
            return true;
        }
    }
}
