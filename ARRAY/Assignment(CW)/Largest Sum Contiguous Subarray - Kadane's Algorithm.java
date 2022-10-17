import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++){
      a[i]=sc.nextInt();
    }
    int meh=0,msf=Integer.MIN_VALUE;
    for(int i=0;i<n;i++){
      meh+=a[i];
      if(meh<a[i]){
        meh=a[i];
      }
      if(msf<meh){
        msf=meh;
      }
    }
    System.out.println(msf);
    sc.close();
  }
}
