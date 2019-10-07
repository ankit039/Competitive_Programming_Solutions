//Finding the factorial of user entered Integer.
/*
    user is asked to input the Integer which needs to be used for calculating the factorial.
*/

import java.util.Scanner;

public class MyFactorial{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter an Integer: ");
        int x = scan.nextInt();
        System.out.println("Factorial of " +x+  " is "+fac(x));
    }
    static int fac(int n){
        if(n == 1)
            return n;
        else
            return (n * fac(n-1));
    }
}