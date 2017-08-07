//import java.util.Scanner;
//import java.io.BufferedReader;
import java.io.*;
import java.util.*;
public class FirstProgram{

    public static void main(String[] args) {
        //Scanner scan = new Scanner(System.in);
		InputStreamReader ip=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(ip);
        //int i = scan.nextInt();
        //double d=scan.nextDouble();
        String s;
		s=br.readline();

        // Write your code here.

        System.out.println("String: " + s);
        //System.out.println("Double: " + d);
        //System.out.println("Int: " + i);
    }
}
