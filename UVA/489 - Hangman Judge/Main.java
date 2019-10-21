import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int turn = scanner.nextInt();
        int ___ = 0;
        while (turn != -1) {
            ___++;
            System.out.println("Round "+___);
            String original = scanner.next();
            String guess = scanner.next();
            int O_o = 0;
            int die = 0;
            HashSet<Character> hashSet_original = new HashSet<>();
            for (int i = 0; i < original.length(); i++) {
                hashSet_original.add(original.charAt(i));
            }
            ArrayList<Character> corrects = new ArrayList<>();
            ArrayList<Character> wrongs = new ArrayList<>();
            for (int i = 0; i < guess.length(); i++) {
                if (hashSet_original.size() == 0) {
                    break;
                }
                if (hashSet_original.contains(guess.charAt(i))) {
                    hashSet_original.remove(guess.charAt(i));
                    corrects.add(guess.charAt(i));
                } else if (!corrects.contains(guess.charAt(i)) && !wrongs.contains(guess.charAt(i))) {
                    wrongs.add(guess.charAt(i));
                    die++;
                }
                if (die == 7) {
                    System.out.println("You lose.");
                    O_o = -1;
                    break;
                }
            }
            if (hashSet_original.size() == 0) {
                System.out.println("You win.");
            }else if (O_o != -1) {
                System.out.println("You chickened out.");
            }
            turn = scanner.nextInt();
        }
    }
}
