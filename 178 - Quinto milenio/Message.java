import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Message {
	public static void main(String[] args) throws NumberFormatException, IOException {
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader (isr);
		String text1, text2;
		int n, index, indexLimit, x;
		
		n = Integer.parseInt(br.readLine());
		
		for(int i=0; i<n; i++){
			text1 = br.readLine();
			text2 = br.readLine();
			
			text1 = text1.toLowerCase().replace(" ", "");
			text2 = text2.toLowerCase().replace(" ", "");
			
			indexLimit = text2.length();
			index = 0;
			x=0;
			
			for(int j=0; j<text1.length(); j++){
				if(text1.charAt(j) == text2.charAt(index)){
					index++;
					
					if(index == indexLimit){
						x=1;
						break;
					}
				}
			}
			
			if(x==1){
				System.out.println("SI");
			}else{
				System.out.println("NO");
			}
		}
	}
}
