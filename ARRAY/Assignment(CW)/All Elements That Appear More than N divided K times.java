import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    Map<Integer,Integer> map=new HashMap<>();
    List<Integer> l=new ArrayList<Integer>();
    System.out.println("Enter the size of array and the value of k:");
    int n=sc.nextInt();
    int k=sc.nextInt();
    int freq=n/k;
    for(int i=0;i<n;i++){
      int a=sc.nextInt();
      if(l.indexOf(a)==-1){
        map.put(a,map.getOrDefault(a,0)+1);
        if(map.get(a)==freq){
          System.out.print(a+" ");
          l.add(a);
        }
      }
    }
    sc.close();
  }
}
