import java.util.*;
public class kaprekarNumber {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Entter number : ");
        int num = sc.nextInt();

        int temp = num, digit = 0;

        while(temp > 0){
            digit++;
            temp /= 10;
        }

        int sqr = (int) Math.pow(num, 2), divisor = 1;

        for(int i = 0; i < digit; i++) divisor *= 10;

        int right = sqr % divisor;
        int left = sqr / divisor;

        if(num == left + right) System.out.println("number is kaprek");
        else System.out.println("number is non-kaprek");
    }
}
