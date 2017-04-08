import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Buhos {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader (isr);
        String original, reverse;
        
        original = br.readLine();
        
        while(!original.equals("XXX")){
            original = original.toUpperCase();
            original = original.replace(" ", "");
            reverse = new StringBuilder(original).reverse().toString();
            
            System.out.println(original);
            System.out.println(reverse);
            
            if(original.equals(reverse)){
                System.out.println("SI");
            }else{
                System.out.println("NO");
            }
            
            original = br.readLine();
        }
    }
    
}
