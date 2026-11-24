import java.util.*;
public class AutomorphicNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int num = sc.nextInt();

        int temp = num, digit = 0;

        while (temp > 0) {
            digit++;
            temp /= 10;
        }

        if(num == ((int)(num*num) % (int)Math.pow(10, digit))) System.out.println("number is Automorphic");
        else System.out.println("number is non-Automorphic");
    }
}
