import java.math.BigInteger;
import java.util.*;

public class BigNumAdd{
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            BigInteger arr, total;
            for(int i = 0 ; i < n; i++){
                arr = sc.nextBigInteger();
                total = sc.nextBigInteger();
                System.out.println(total.add(arr));
            }
        }
    }
}