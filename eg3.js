function Toy()
{
this.price=1000;
}
function add(x,y)
{
return x+y;
}
var t=new Toy();
console.log("price of toy:",t.price);
console.log("Toat is of 10 and 20 is",add(30,40));
var t2=new Toy()
console.log("Prce of toy :",t2.price);
t2.price=300;
console.log("Price of toy : ",t2.price);
var t3=t2;
t3.price=500;
console.log("Price of toy : ",t3.price);
console.log("Price of toy : ",t2.price);
console.log(t2);