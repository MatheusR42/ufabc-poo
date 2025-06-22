import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        // Integer division
        System.out.println("Integer division (a / b): " + (a / b));
        
        // Real division (cast to double to get decimal result)
        System.out.printf("Real division (a / b): %.2f%n", ((double) a / b));
        
        scanner.close();
    }
}
