import java.util.Scanner;

public class Lua2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int m1 = sc.nextInt();
            int m2 = sc.nextInt();

            if (m2 >= 0 && m2 <= 2) {
                System.out.println("Nova");
            } else if (m2 >= 3 && m2 <= 96) {
                if (m2 > m1) {
                    System.out.println("Crescente");
                } else {
                    System.out.println("Minguante");
                }
            } else if (m2 >= 97 && m2 <= 100) {
                System.out.println("Cheia");
            }
        }

        sc.close();
    }
}
