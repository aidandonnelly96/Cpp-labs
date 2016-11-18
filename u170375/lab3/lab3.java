import java.util.*;
public class lab3{
public static void main(String args[])
{
    int size=10;
    double arr[]=new double[10];
    for(int i=0;i<size;i++){
        arr[i]=0;    
    }
    print_array(arr,size);
}
public static void print_array(double[] arr, int size){
    Scanner scan=new Scanner(System.in);
    double num=0;
    boolean x=true;
    int startsize=size-10;
    int i,count=0;
    while(x){
        System.out.println("\nEnter number: ");
        num=scan.nextDouble();
        if(num==-1){
            x=false;
            break;  
        }
        else if(count==size){
	    double nArr[]=new double[size+10];
            for(i=0;i<=size;i++){
                nArr[i]=arr[i];    
            }
            print_array(nArr,size+10);
            x=false;
        }
        else{
            arr[startsize+count]=num;
            count++;
        }
    }
    for(int j=0;j<size;j++){
           System.out.println(arr[j]);
    }
}
}


