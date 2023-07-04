import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Solution {
    public static void main(String[] args) throws IOException {
 
Scanner sc=new Scanner(System.in);
    
 int N=sc.nextInt();
  // n is odd number
   if ( N%2==1) System.out.println("Weird");
  // n is even number
   else {
      System.out.println(N>=6 && N<=20?"Weird":"Not Weird");
   }
  
    }
}
