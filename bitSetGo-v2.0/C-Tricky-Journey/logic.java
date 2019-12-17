
import java.util.*; 
import java.lang.*; 
import java.io.*; 

class TJ
{ 
	
  public static void printNSE(int arr[], int n) 
  { 
	Stack<Integer> s = new Stack<Integer>(); 
	HashMap<Integer,Integer> mp = new HashMap<Integer,Integer>(); 
	s.push(arr[0]); 
		
	for (int i = 1; i < n; i++) { 

		if (s.empty()) { 
			s.push(arr[i]); 
			continue; 
		} 
		
	
	    while (s.empty() == false && s.peek() > arr[i]) { 
			mp.put(s.peek(), arr[i]); 
			s.pop(); 
		} 
		
		s.push(arr[i]); 
	} 
		
		
	while (s.empty() == false) { 
		mp.put(s.peek(), -1); 
		s.pop(); 
	} 
	
	
	for (int i=0; i<n; i++) 
	System.out.println( mp.get(arr[i])); 
 }  
	
	
public static void main (String[] args)throws IOException 
{
		InputStreamReader read = new InputStreamReader(System.in);
		BufferedReader in = new BufferedReader(read);
	    int t,i,j,n;
	    System.out.println("Enter");
	    t = Integer.parseInt(in.readLine());
	    for(i=0;i<t;i++)
	    {
	        n = Integer.parseInt(in.readLine());
	        int arr[]=new int[n];
	        for(j=0;j<n;j++)
	        {
	            arr[j] = Integer.parseInt(in.readLine());
	        }
	        int l = arr.length;
	        printNSE(arr,l);
	    
	     } 
} 
}
