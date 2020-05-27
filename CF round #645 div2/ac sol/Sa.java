/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class S
{
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try 
		{
		    
		    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		    int T = Integer.parseInt(br.readLine());
		    while(T-->0)
		    {
		    	String[]tok = br.readLine().split(" ");
		    	int m = Integer.parseInt(tok[0]);int n = Integer.parseInt(tok[1]);
		    	int ar = m*n;
		    	if(ar%2!=0)
		    		ar++;
		    	ar = ar>>1;
		    	bw.write(ar+"\n");


		       
		    }
		     
		      bw.flush();
		        
		}
		    
		    
		    
		 catch(Exception e) {
		    return;
		}
	}
    
}