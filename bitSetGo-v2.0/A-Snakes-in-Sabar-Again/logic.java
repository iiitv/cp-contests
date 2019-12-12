import java.util.*;

public class logic {
	public static int binSearch(int[] arr, int x, int l, int r) {
		int mid = (l + r)/2;
    	if (l > r) {
    	    return -1;
    	}
    	if (x == arr[mid]){
    	    return mid;
    	}
    	if (x < arr[mid]) {
    	    return binSearch(arr, x, l, mid - 1);
    	} else {
    	    return binSearch(arr, x, mid + 1, r);
    	}
	}
	public static int binSearch(char[] arr, char x, int l, int r) {
	    int mid = (l + r)/2;
	    if (l > r) {
	        return -1;
	    }
	    if (x == arr[mid]){
	        return mid;
	    }
	    if (x < arr[mid]) {
	        return binSearch(arr, x, l, mid - 1);
	    } else {
	        return binSearch(arr, x, mid + 1, r);
	    }
	}

	public static void main(String[] args) {
		int t;
		Scanner s = new Scanner(System.in);
		t = s.nextInt();
		while(t-->0) {
        	int l = s.nextInt();
        	int m = s.nextInt();
        	int n = s.nextInt();
			int[] b = new int[m];
			int[] c = new int[n];
			char[] a = new char[l];
        	for (int i = 0; i < l; i++) {
        	    a[i] = s.next().charAt(0);
        	}
        	for (int i = 0; i < m; i++) {
        	    b[i] = s.nextInt();
        	}
        	for (int i = 0; i < n; i++) {
        	    c[i] = s.nextInt();
        	}
			char p = s.next().charAt(0);
			int q = s.nextInt();
			int r = s.nextInt();
        	int ap = binSearch(a, p, 0, l-1);
        	int aq = binSearch(b, q, 0, m-1);
        	int ar = binSearch(c, r, 0, n-1);
        	if ((ap == -1) || (aq == -1) || (ar ==-1)) {
        	    System.out.println("DOST HI SAANP HAI");
        	} else {
        	    System.out.println("SNAKE FOUND");
        	}
		}
	}
}