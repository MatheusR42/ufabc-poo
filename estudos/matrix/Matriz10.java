import java.util.Scanner;

public class Matriz10 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int rows;
        int cols;
        
        rows = scan.nextInt();    
        cols = scan.nextInt();

        int[][] m = new int[rows][cols];

        for (int i = 0; i < rows; ++i) {
            m[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                int v = 0;
                v = scan.nextInt();
                m[i][j] = v * 10; 
            }
        }

        Matriz10.printMatrix(m);
        scan.close();
    }

    private static void printMatrix(int[][] m) {
        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m[i].length; j++) {
                System.out.print(m[i][j]);
                if (j != m[i].length - 1) {
                    System.out.print(" ");
                }
            }
            System.out.print("\n");
        }
    }
}
