class example2{
int a;
int b;

example2(example2 e1){
a = e1.a;
b = e1.b;
} 
example2(int x,int y){
a = x;
b = y;
}
void display(){
System.out.println(a+" "+b);
}
public static void main(String[] args){
example2 e1 = new example2(3,4);
example2 e2 = new example2(e1);
e2.display();
}
}