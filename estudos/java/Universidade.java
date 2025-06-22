import java.util.Scanner;

public class Universidade {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String universidade;
        int tempo;
        System.out.println("Onde você estuda?");
        universidade = scan.next();
        System.out.println("Ha quanto tempo?");
        tempo = scan.nextInt();
        System.out.println("Você estuda na "+universidade+" ha "+tempo+" anos.");
    }
}