import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int x = Math.min(a,b);
            int y = Math.max(a,b);
            System.out.printf("%d %d %d\n",a,b,getMax(x,y));
        }
        
    }

    private static int getMax(int a, int b) {
        int max = -1;
        for (int i = a; i <= b; i++) {
            int O_o = getIt(i,0);
            if (max < O_o){
                max = O_o;
            }
        }
        return max;
    }

    private static int getIt(int i, int j) {
        if (i == 1){
            return j + 1;
        }
        if (i % 2 == 0){
            return getIt(i/2,j+1);
        }else{
            return getIt(3*i+1,j+1);
        }
    }

}
