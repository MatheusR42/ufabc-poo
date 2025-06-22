import java.util.Scanner;

public class PrintChars {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for input
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Print each character on a new line
        for (int i = 0; i < input.length(); i++) {
            System.out.println(input.charAt(i));
        }

        scanner.close();
    }
}
