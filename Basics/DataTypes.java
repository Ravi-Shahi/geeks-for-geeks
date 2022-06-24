class Point{
    int x;
    int y;
}

public class DataTypes{
    public static void main(String []args){ 
       //naming, normal value camel case
       int age = 5;
       int schoolPlayers = 10;
       //constant variables naming must pe upercase and separated by _
       final int MAX_PEOPLE = 10;
       final int MAX_AGE = 40;
       //Non-primitive data types are classes either user defined or libraries classes
       /*
       Non-primitive variables are created using new keyword 
       ...and memory is allocated in heap
       cordinate is reference to the memory in heap
       */
       Point cordinate = new Point();
       cordinate.x = 10;
       cordinate.y = 20;
       //cordinateRef is another reference for object of Point
       Point cordinateRef = cordinate;
       cordinateRef.x = 20;
       System.out.println("coridnate.x = "+ cordinate.x +" "+"cordinateRef.x = "+ cordinateRef.x);

       


    }
}