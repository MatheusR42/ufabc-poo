import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class SortReverse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        
        Double[] array = new Double[n];
        
        System.out.println("Enter " + n + " double values:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextDouble();
        }
        
        // Sort the array
        // Arrays.sort(array);

        // reverse
        Arrays.sort(array, Collections.reverseOrder());
        
        // Print the sorted array
        System.out.println("Sorted array:");
        for (Double num : array) {
            System.out.print(num + " ");
        }
        
        scanner.close();
    }
}