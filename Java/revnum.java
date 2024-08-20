package Java;
import java.util.Scanner;
class revnum{
    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);
        int rev=0,num,i,rm=0;
        System.out.println("Enter number");
        num=obj.nextInt();
        for(i=num;i>0;i/=10)
        {
            rm=i%10;
            rev=rev*10+rm;
        }
        System.out.println("Reverse="+rev);
    }
}
