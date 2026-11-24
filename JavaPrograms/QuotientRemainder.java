import java.util.*;

public class QuotientRemainder {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int a = sc.nextInt();

        System.out.println("Enter second number : ");
        int b = sc.nextInt();

        int dividend = Math.max(a, b);
        int divisor = Math.min(a, b);

        int quotient = 0, remainder = dividend;

        if(divisor == 0)System.out.println("Divide by zero is not posible");

        else{
            while(remainder >= divisor){
                remainder -= divisor;
                quotient++;
            }

            System.out.println("Quotient : "+ quotient);
            System.out.println("Remainder : "+remainder);
        }
    }
}
