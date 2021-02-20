
package pkg71a;

//import static java.time.Clock.system;
import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
        int n;
        String input , output;
        
        Scanner in =new Scanner(System.in);
        
        n = in.nextInt();
        for(int i=0; i<n; i++)
        {
            input = in.next();
            
            if(input.length() <10)
            {
                System.out.println(input);
            }else{      
                output =input.charAt(0)+String.valueOf(input.length()-2)+input.charAt(input.length()-1);
                System.out.println(output);
            }
        }
        
    }
    
}
