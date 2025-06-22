import java.util.Arrays;
import java.util.Scanner;

public class Sort {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        
        double[] array = new double[n];
        
        System.out.println("Enter " + n + " double values:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextDouble();
        }
        
        // Sort the array
        Arrays.sort(array);
        
        // Print the sorted array
        System.out.println("Sorted array:");
        for (double num : array) {
            System.out.print(num + " ");
        }
        
        scanner.close();
    }
}