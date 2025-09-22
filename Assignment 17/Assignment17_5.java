/////////////////////////////////////////////////////////////
// File Name :   Assignment17_5.java
// Description : Used to Display pattern
// Input :       int, int   
// Output :      1  2  3  4  5 
//               1  2        5
//               1     3     5 
//               1        4  5 
//               1  2  3  4  5
// Author :      Nikita Shahaji Omase
// Date :        26/05/2025
////////////////////////////////////////////////////////////
import java.util.*;

class Pattern 
{
    void Display(int iRow, int iCol)
     {
        for (int i = 1; i <= iRow; i++) 
        {
            for (int j = 1; j <= iCol; j++)
             {
                if ((i == 2 && (j == 3 || j == 4)) ||
                    (i == 3 && (j == 2 || j == 4)) ||
                    (i == 4 && (j == 2 || j == 3)))
                     {
                    System.out.print("\t"); 
                }
                 else 
                {
                    System.out.print(j + "\t"); 
                }
            }
            System.out.println();
        }
    }
}

public class Assignment17_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows: ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}
