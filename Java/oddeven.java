package Java;
import java.util.Scanner;
public class oddeven{
    public static void main(String[] args){
        int i,lim,ce=0,co=0;
        int[] array= new int[10];
        System.out.println("Enter the number of elements in the array : ");
        Scanner obj=new Scanner(System.in);
        lim=obj.nextInt();
        System.out.println("Enter the elements in the array : ");
        for(i=0;i<lim;i++){
            array[i]=obj.nextInt();
        }
        for(i=0;i<lim;i++){
            if((array[i]%2)==0){
                ce++;
            }
            else{
                co++;
            }
        }
        System.out.println("The number of even numbers is "+ce);
        System.out.println("The number of odd numbers is "+co);
    }
}
