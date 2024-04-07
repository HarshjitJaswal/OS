public class StackJava{
    private int maxSize;
    private int[] stackArray;
    private int top;
    
    public Stack(int size){
        maxSize= size;
        stackArray= new int[maxSize];
        top=-1;
    }
    public void push(int value){
        if(isFull()){
            System.out.println("Overflow!");
            return;
        }
        stackArray[++top]=value;
        System.out.println(value + " pushed to stack!");
    }
    
    public int pop(){
        if(isEmpty()){
            System.out.println("Underflow!");
            return -1;
        }
        int value= stackArray[top--];
        System.out.println(value+" popped from stack!");
        return value;
    }
    public boolean isEmpty(){
        return (top==-1);
    }
    public boolean isFull(){
        return (top==maxSize-1);
    }
public static void main(String[] args){
    Stackjava stack= new Stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.push(40);
    stack.push(50);
    
}
}
