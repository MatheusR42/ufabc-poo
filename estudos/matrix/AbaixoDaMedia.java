import java.util.Locale;
import java.util.Scanner;

public class AbaixoDaMedia {
    public static void main(String[] args) {
        // Use Locale.US to ensure the scanner recognizes '.' as a decimal separator
        Scanner scan = new Scanner(System.in).useLocale(Locale.US);
        int n = scan.nextInt();
        double[][] grades = new double[3][n];

        for (int i = 0; i < n; i++) {
            grades[0][i] = scan.nextDouble();
            grades[1][i] = scan.nextDouble();
            grades[2][i] = scan.nextDouble();
        }

        for (int i = 0; i < 3; i++) {
            int qtdBelow = 0;
            double m = AbaixoDaMedia.mean(grades[i]);

            for (int j = 0; j < n; j++) {
                if (grades[i][j] < m) {
                    qtdBelow++;
                }
            }

            System.out.println("Na " + (i+1) + "a. atividade " + qtdBelow + " alunos tiveram nota abaixo da media.");
        }

        scan.close();
    }

    private static double mean(double[] v) {
        double sum = 0;

        for (int i=0; i < v.length; i++) {
            sum += v[i];
        }

        return sum / v.length;
    }
}