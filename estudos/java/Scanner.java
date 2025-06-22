// import java.util.*;
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int studentCount = scanner.nextInt(); // Read number of students
            if (studentCount == 0) {
                break; // Exit if the input is 0
            }

            int[] grades = new int[studentCount];
            for (int i = 0; i < studentCount; i++) {
                grades[i] = scanner.nextInt(); // Read each student's grade
            }

            // Sort grades in descending order
            Arrays.sort(grades);
            // Print second greatest grade
            System.out.println(grades[studentCount - 2]);
        }

        scanner.close();
    }
}
