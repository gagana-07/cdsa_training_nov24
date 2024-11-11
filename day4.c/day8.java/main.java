public class DoublyLinkedList {
    // Node class for representing each element in the Doubly Linked List
    private static class Node {
        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    private Node head;

    // Method to add a node at the end of the doubly linked list
    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
            newNode.prev = current;
        }
    }

    // Method to remove a node with a specific value
    public void remove(int data) {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        // If the node to remove is the head
        if (head.data == data) {
            head = head.next;
            if (head != null) {
                head.prev = null;
            }
            return;
        }

        Node current = head;
        while (current != null && current.data != data) {
            current = current.next;
        }

        if (current == null) {
            System.out.println("Node with data " + data + " not found");
        } else {
            if (current.next != null) {
                current.next.prev = current.prev;
            }
            if (current.prev != null) {
                current.prev.next = current.next;
            }
        }
    }

    // Method to display the doubly linked list forward
    public void displayForward() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " <-> ");
            current = current.next;
        }
        System.out.println("null");
    }

    // Method to display the doubly linked list backward
    public void displayBackward() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        while (current != null) {
            System.out.print(current.data + " <-> ");
            current = current.prev;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();
        list.add(10);
        list.add(20);
        list.add(30);

        System.out.println("Display forward:");
        list.displayForward(); // Output: 10 <-> 20 <-> 30 <-> null

        System.out.println("Display backward:");
        list.displayBackward(); // Output: 30 <-> 20 <-> 10 <-> null

        list.remove(20);
        System.out.println("After removing 20:");
        list.displayForward(); // Output: 10 <-> 30 <-> null
    }
}
