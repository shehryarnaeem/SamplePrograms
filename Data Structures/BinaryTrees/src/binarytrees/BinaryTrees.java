
package binarytrees;

public class BinaryTrees {
    public static void preorder(Node root)
    {   
        if(root!=null)
        {
            System.out.println(root.data);
            preorder(root.left);
            preorder(root.right);
        }
    }
    public static void inOrder(Node root)
    {
        if(root!=null)
        {
            inOrder(root.left);
            System.out.println(root.data);
            inOrder(root.right);
           
        }
    }
    
    public static void postOrder(Node root)
    {
        if(root!=null)
        {
            postOrder(root.left);
            postOrder(root.right);
            System.out.println(root.data);
           
        }
    }
static int count;
    public static void main(String[] args) {
        
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);
        root.right.right=new Node(7);
        postOrder(root);
        
    }
    
}
