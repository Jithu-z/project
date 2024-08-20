package Java;
import java.util.*;
public class mat_trans_add {
    public static void main(String[] args) {
        int row1,col1,row2,col2,i,j;
        int [][] mat1=new int[5][5],mat2=new int[5][5], mat3=new int[5][5];
        System.out.println("Enter row and column of first array : ");
        Scanner obj=new Scanner(System.in);
        row1=obj.nextInt();
        col1=obj.nextInt();
        System.out.println("Enter the elements : ");
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                mat1[i][j]=obj.nextInt();
            }
        }
        System.out.println("Enter row and column of second array : ");
        row2=obj.nextInt();
        col2=obj.nextInt();
        if(row1!=row2 || col1!=col2)
        {
            System.out.println("addition not possible");
        }
        else{
                            System.out.println("Enter the elements : ");
                            for(i=0;i<row2;i++){
                                for(j=0;j<col2;j++){
                                    mat2[i][j]=obj.nextInt();
                                }
                            }
                                for(i=0;i<row2;i++){
                                    for(j=0;j<col2;j++){
                                        mat3[i][j]=mat1[i][j]+mat2[i][j];
                                    }
                                }
                                System.out.println("\nThe resultant matrix  is : ");
                                for(i=0;i<col1;i++){
                                    for(j=0;j<row2;j++){
                                        System.out.print(mat3[i][j] + "\t");
                                    }
                                    System.out.println("\n");
                                }
                                System.out.println("\nThe resultant matrix transpose is : ");
                                for(i=0;i<col1;i++){
                                    for(j=0;j<row2;j++){
                                        System.out.print(mat3[j][i] + "\t");
                                    }
                                    System.out.println("\n");
                                }
                            }
                        }
}
    
