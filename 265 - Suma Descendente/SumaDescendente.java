import java.util.Scanner;

public class SumaDescendente {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, i, sum;
        String temp;
        
        num = sc.nextInt();
        
        while(num != 0){
            temp = String.valueOf(num);
            sum = num;
            
            for(i=temp.length()-1; i>=0; i--){
                sum = sum + (num - ((int)Math.pow(10, i) * (int)(num / Math.pow(10, i))));
            }
            
            System.out.println(sum);
            
            num = sc.nextInt();
        }
    }
    
}
