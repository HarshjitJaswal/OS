import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        int[] arr={90,2,3,4,45,6,565,75};
        System.out.printf("%s \n", Arrays.toString(arr));
        Arrays.sort(arr);
        for (int i=0;i<8;i++){
            System.out.printf("%d  ",arr[i]);
        }
    }
}