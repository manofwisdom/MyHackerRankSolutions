import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        String S;
        int len;
       /* StringBuilder R = new StringBuilder(); //StringBuilder has an inbuilt string reverse function
        R.append(S);
            R =R.reverse();
            */
        while(T>0)
            {
            S = input.nextLine();
            char [] Sc = S.toCharArray();
            char [] Rc ='';
            len =Sc.length;
            for(int j =len-1;j>=0;j++)
                {
                    Rc[len-j-1]=Sc[j];
            }
            
            for(int i=0;i<S.length();i++)
                {
                if(Math.abs(Sc[i]-Sc[i-1]) ==Math.abs(Rc[i]-Rc[i-1]))
                    {
                    System.out.println("Funny");
                    }
                else
                    {
                    System.out.println("Not funny");
                }
            }
            
            
        }
    }
}
