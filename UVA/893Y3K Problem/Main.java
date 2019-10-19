import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            int n = scanner.nextInt();
            int day = scanner.nextInt();
            int month = scanner.nextInt();
            int year = scanner.nextInt();
            if (year + n + day + month == 0){
                break;
            }
            GregorianCalendar gregorianCalendar = new GregorianCalendar(year, month - 1, day);
            gregorianCalendar.add(Calendar.DAY_OF_YEAR, n);
            System.out.println(gregorianCalendar.get(Calendar.DAY_OF_MONTH) + " " +
                    (gregorianCalendar.get(Calendar.MONTH) + 1) + " " + gregorianCalendar.get(Calendar.YEAR));
        }
    }
}
