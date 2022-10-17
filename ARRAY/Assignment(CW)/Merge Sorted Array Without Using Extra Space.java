import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter size of array 1: ");
    int n=sc.nextInt();
    System.out.println("Enter size of array 2: ");
    int m=sc.nextInt();
    int a[]=new int[n+m];
    int b[]=new int[m];
    System.out.println("Enter sorted array 1 elements : ");
    for(int i=0;i<n;i++){
      a[i]=sc.nextInt();
    }
    System.out.println("Enter sorted array 2 elements: ");
    for(int i=0;i<m;i++){
      b[i]=sc.nextInt();
    }
    for(int i=m-1;i>=0;i--){
      int j;
      int last=a[n-1];
      for(j=n-2;j>=0 && a[j]>b[i];j--){
        a[j+1]=a[j];
      }
      if(j!=n-2 || b[i]<last){
        a[j+1]=b[i];
        b[i]=last;
      }
    }
    System.out.println("Printing the merged sorted array without using extra space");
    for(int i=0;i<n;i++){
      System.out.print(a[i]+" ");
    }
    for(int j=0;j<m;j++){
      System.out.print(b[j]+" ");
    }
    sc.close();
  }
}
