/*
*Problem: Fibonacci Modified: https://www.hackerrank.com/challenges/fibonacci-modified
*Author: Alok Sharma
*This is just slight modification of Bottom Up Dynamic Programming Fibonacci number. The series is gives as:
*Fib(n+2) = Fib(n+1)*Fib(n+1) + Fib(n)
*If we replace n+2 with k, then we get:
*Fib(k) = Fib(k-1)*Fib(k-1) + Fib(k-2). so we just need to add the square/multiplication part to the original Fibonacci series.
*Another challenge here is the kth term exceeding 64 bit and long in java and long long unsigned int were not sufficient so, I used
*BigInteger class which is part of java.math.*, one has to use add(), multiply etc. methods as basic operations +, * etc. don't work
*Here's a good tutorial on BigIntger in java: http://compsci.ca/v3/viewtopic.php?t=13193
*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution.
       */
        Scanner input = new Scanner(System.in);
        int a, b, n;
        a = input.nextInt();
        b = input.nextInt();
        n = input.nextInt();
        BigInteger[] arr = new BigInteger[n];
        arr[0] =BigInteger.valueOf(a);
        arr[1] =BigInteger.valueOf(b);
        for(int i=2; i<n; i++)
            {
            arr[i] = (arr[i-1].multiply(arr[i-1])).add(arr[i-2]);
        }
        System.out.println(arr[n-1]);
    }
}
