import java.util.Scanner;

public class Lua2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for (int i = 0; i < n; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();

            if (b >= a) {
                if (b <= 2) {
                    System.out.println("Nova");
                    continue;
                } else if (b <= 96) {
                    System.out.println("Crescente");
                    continue;
                } else {
                    System.out.println("Cheia");
                }
            } else {
                if (b >= 96) {
                    System.out.println("Cheia");
                    continue;
                } else if (b >= 3) {
                    System.out.println("Minguante");
                    continue;
                } else {
                    System.out.println("Nova");
                }
            }
        }

        scan.close();
    }
}