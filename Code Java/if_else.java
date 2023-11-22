public class if_else {
    public static void main(String[] a) {
        int x = 12;
        int y = 13;
        int z = 14;
        int result;
     /*    if (x > y && x>z) {
            System.out.println("X is greater");
        }
        else if(y>z){
            System.out.println("Y is greatest");
        }
         else {
            System.out.println("Z is greatest");
        }
    */      

    //ternary opeartor example to findlarge among 3 no
    result = (x>y) ? (x>z ? x:z) : (y>z ? y:z);
    System.out.println(result);
    }
}
