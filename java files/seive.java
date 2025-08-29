import java.io.BufferedReader;
import java.io.IOException;
import java.util.*;
import java.io.InputStreamReader;

class seive{

    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);
        String nam = sc.nextLine();
        System.out.println("your entered string is "+ nam);
        System.out.println("enter any number : ");
        int num = sc.nextInt();
        System.out.println("teh number you entered is " + num);

        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String nam1 = reader.readLine();
        System.out.println(nam1);
        
        
    }
}