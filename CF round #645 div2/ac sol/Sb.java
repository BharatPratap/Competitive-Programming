/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Sb
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
		    	int n = Integer.parseInt(tok[0]);
		    	String[]tok1 = br.readLine().split(" ");
		    	int []a = new int[n];
		    	for(int i=0;i<n;i++)
		    	{
		    		a[i] = Integer.parseInt(tok1[i]);
		    	}
		    	Arrays.sort(a);
		    	
		    	int count=1,temp=0;

		    	for(int i=0;i<n;i++)
		    	{
		    		
		    		if((count+temp)>=a[i])
		    		{
		    			count++;
		    			count=count+temp;
		    			temp=0;
		    		}
		    		else
		    		{
		    			temp++;
		    		}
		    	}

		    	bw.write(count+"\n");

		       
		    }
		     
		      bw.flush();
		        
		}
		    
		    
		    
		 catch(Exception e) {
		    return;
		}
	}
    
}