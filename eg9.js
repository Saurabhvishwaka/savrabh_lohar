function sum(s,n,p)
{
console.log(arguments);
console.log("Length : ",arguments.length)
var i; 
var total=0;
for(i=0;i<=arguments.length;i++)
{
console.log(arguments[i]);
total=total+arguments[i];
}
return total;
}
console.log("sum is :",sum(20,30,33));