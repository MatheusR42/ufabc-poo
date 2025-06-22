import java.util.Scanner;

public class Consoantes {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String[] vogais = {"a", "e", "i", "o", "u"};
        int aux = 0;

        while (true) {
            String c = scan.nextLine();
            boolean isVogal = false;

            if (c.equals("*")) {
                break;
            }

            for (String s : vogais) {
                if (s.equals(c.toLowerCase())) {
                    isVogal = true;
                    break;
                }
            }

            if (!isVogal) {
                aux++;
            }
        }

        System.out.println(aux);
    }
}