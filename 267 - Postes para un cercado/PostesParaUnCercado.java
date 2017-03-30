
import java.util.Scanner;

public class PostesParaUnCercado {
    final static int min = 4;
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int i, l1, l2, d, total=min, p;
        
        l1 = sc.nextInt();
        l2 = sc.nextInt();
        d = sc.nextInt();
        
        while((l1 != 0) || (l2 != 0) || (d != 0)){
            total = min;
            
            if(l1 > d){
                p = (int)(l1/d);
                
                if(l1%d == 0){
                    p--;
                }
                
                p = p * 2;
                total = total + p;
            }
            
            if(l2 > d){
                p = (int)(l2/d);
                
                if(l2%d == 0){
                    p--;
                }
                
                p = p * 2;
                total = total + p;
            }
            
            System.out.println(total);
            
            l1 = sc.nextInt();
            l2 = sc.nextInt();
            d = sc.nextInt();
        }
    }
    
}
