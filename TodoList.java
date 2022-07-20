/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   int  count =0;
	   Scanner sc=new Scanner(System.in);
	   
	   
	   
	   int t=sc.nextInt();
	   
	   for(int i=0;i<t;i++)
	   {
	       int N=sc.nextInt();
	       for(int j=0;j<N;j++)
	       {
	           int[] array = new int[100];  
	           for(int k=0; k<N; k++) 
	           {  
	               array[k]=sc.nextInt();
	               
	               for(int m=0;m<N;m++)
	               {
	                   if(array[m]>=1000)
	               {
	                       count++;
	                       
	                }
	               }
	           }
			}
	               
System.out.printf("%d\n",count);
	           

	       
	   }
	   
	}
}
