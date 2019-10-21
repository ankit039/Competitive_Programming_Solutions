import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int O_o = 0;
        while (n != 0 && m != 0){
            // To avoid "representation error":
            if (O_o != 0) {
                System.out.println();
            }
            O_o++;
            System.out.printf("Field #%d:\n",O_o);
            char [][] arr = new char[n][m];
            for (int i = 0; i < n; i++) {
                String line = scanner.next();
                for (int j = 0; j < m; j++) {
                    arr[i][j] = line.charAt(j);
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    getMineStatus(arr,i,j);
                }
                System.out.println();
            }
            n = scanner.nextInt();
            m = scanner.nextInt();
        }

    }

    private static void getMineStatus(char[][] arr, int i, int j) {
        if (arr[i][j] == '*'){
            System.out.print('*');
            return;
        }
        int ____ = 0;
        try{
            if (arr[i-1][j-1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i-1][j] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i-1][j+1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i][j-1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i][j+1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i+1][j-1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i+1][j] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        try{
            if (arr[i+1][j+1] == '*'){
                ____++;
            }
        }catch (Exception ignored){
        }
        System.out.print(____);
    }

}
