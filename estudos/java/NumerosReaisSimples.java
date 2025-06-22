import java.util.Scanner;
import java.text.DecimalFormat;

public class NumerosReaisSimples
{
	public static void main(String[] args) {
    
        	Scanner scanner = new Scanner(System.in);

        	DecimalFormat df = new DecimalFormat("0.00");

        	float a, b, c;

        	a = scanner.nextFloat();
        	b = scanner.nextFloat();
        	c = scanner.nextFloat();

        	System.out.println(df.format(a));
        	System.out.println(df.format(b));
        	System.out.println(df.format(c));
	}
}