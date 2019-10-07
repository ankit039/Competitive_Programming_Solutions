import java.util.Scanner;

/**
 * A narcissistic number or a Armstrong number, is a number that is the sum of
 * its own digits each raised to the power of the number of digits.
 * 
 * @see <a href="https://en.wikipedia.org/wiki/Narcissistic_number">Narcissistic number From Wikipedia</a>
 *
 */
public class NarcissisticNumber {

	private int countDigits(int number) {
		int count = 0;
		while(number > 0) {
			number /= 10;
			++count;
		}		
		return count;
	}
	
	private int pow(int base, int exp) {
		if (exp == 0) return 1;
		if (exp == 1) return base;
		
		if (0 == exp % 2) return pow (base * base, exp / 2);
		else return base * pow (base * base, exp / 2);
	}
	
	public boolean isNarcissisticNumber(int number) {
		int temp = number;
		int numDigits = countDigits(number);
		int sum = 0;
		
		while (temp > 0) {
			int digit = temp % 10;
			sum += pow(digit, numDigits);
			temp /= 10;
		}		
		return (sum == number);
	}
	
	public static void main(String[] args) {
		NarcissisticNumber narcissisticNumber = new NarcissisticNumber();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int num = sc.nextInt();
		String s = narcissisticNumber.isNarcissisticNumber(num) ? "is a narcissistic number" : "is not a narcissistic number";
		System.out.println(num + " " + s);
		sc.close();
	}
}
