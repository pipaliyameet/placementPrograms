import java.util.Scanner;

public class ArmstrongNumber {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int digit = 0, temp = num, ans = 0;

        while(temp>0){
            digit++;
            temp /= 10;
        }

        temp = num;

        while(temp > 0){
            ans += Math.pow(temp%10, digit);
            temp /= 10;
        }

        if(ans == num) System.out.println("number is Armstrong");
        else System.out.println("Number is not Armstrong");
    }
}
