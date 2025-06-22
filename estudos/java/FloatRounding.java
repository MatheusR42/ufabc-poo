import java.util.Scanner;

public class FloatRounding {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get user input
        System.out.print("Enter a float number: ");
        float number = scanner.nextFloat();

        // Round down and up
        float roundedDown = (float) Math.floor(number * 100) / 100;
        float roundedUp = (float) Math.ceil(number * 100) / 100;

        // Print results
        System.out.printf("Original number: %.4f%n", number);
        System.out.printf("Rounded down (floor): %.2f%n", roundedDown);
        System.out.printf("Rounded up (ceil): %.2f%n", roundedUp);

        scanner.close();
    }
}
