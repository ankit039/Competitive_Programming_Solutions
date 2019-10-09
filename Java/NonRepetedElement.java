//it can b done using xor opereator
class  NonRepetedElement{
public static void main(String[] args)
 {
      int[] a={1,2,3,4,1,2,3};
      int element=a[0];
      for(int i=0;i<a.length;i++)
      {
         element^=a[i];   //1^2^3^4^1^2^3
      }
      System.out.println(element);
 }
}
