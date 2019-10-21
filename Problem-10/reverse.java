
/*
Author : Piyush Agarwal
College : BITS Pilani, K.K. Birla Goa Campus
Year/Department : 3rd Year/Electronics and Instrumentation Engineering
E-Mail Id : piyush.ag.bitsg@gmail.com
*/

import java.io.*;
import java.util.*;
class reverse
{
	public static void main(String ar[])
	{
		Scanner z=new Scanner(System.in);
		String s=z.nextLine();				//Input string in s


		//Using StringTokenizer utility
		StringTokenizer st = new StringTokenizer(s);
		
		//countTokens gives the number of tokens(here, words) in the string
		int count=st.countTokens();
		String sr="";						//sr will contain the reversed string
		for(int i=count-1;i>=0;i--)
		{
			sr=st.nextToken()+" "+sr;
			if(i!=0)
				sr=sr+" ";
		}
		System.out.println(sr);

	}
}
