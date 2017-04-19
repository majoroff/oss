import java.util.Iterator;
import edu.princeton.cs.algs4.*;
/**
 * Created by majoroff on 01.03.17.
 */
public class Stack<Item> implements Iterable<Item> {

    private Node first;
    private int N;


    private class Node {
        Item item;
        Node next;
    }

    public boolean isEmpty() { return N == 0; }
    public int size() {return N; }

    public void push(Item item){
        Node oldfirst = first;
        first = new Node();
        first.item = item;
        first.next = oldfirst;
        N++;
    }

    public Item pop(){
        Item item = first.item;
        first = first.next;
        N--;
        return item;
    }
    public Iterator<Item> iterator() {
        return new ListIterator();
    }

    private class ListIterator implements Iterator<Item> {
        private Node current = first;
        public boolean hasNext() { return current.next != null; }
        public Item next() {
            Item item = current.item;
            current = current.next;
            return item;
        }
    }

    public Item peek() {
        return first.item;
    }

    public static void main(String[] args){
        Stack<String> s = new Stack<String>();
        while(!StdIn.isEmpty()){
            String item = StdIn.readString();
            if(!item.equals("-")){
                s.push(item);
                StdOut.println(s.peek());
            }
            else if(!s.isEmpty()) StdOut.print(s.pop() + " ");
        }
        StdOut.println("(В стеке осталось " + s.size() + ")");
    }

}