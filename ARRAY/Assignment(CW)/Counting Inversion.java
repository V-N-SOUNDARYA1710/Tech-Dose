import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++){
      a[i]=sc.nextInt();
    }
    int invCount=0;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
          invCount++;
        }
      }
    }
    System.out.print(invCount);
    sc.close();
  }
}
