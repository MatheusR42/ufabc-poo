import java.util.Scanner;

public class DoubleFormatter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a double
        System.out.print("Enter a number: ");
        double number = scanner.nextDouble();

        // Print the number with 2 decimal places
        System.out.printf("Formatted number: %.2f%n", number);

        scanner.close();
    }
}
