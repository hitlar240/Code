// console.log("Hello World!")
/* 
    multiline 
    comment
*/

// var x = 10.43;
// console.log(x)
// console.log(typeof x)

// var y = "tom";
// console.log(y)
// console.log(typeof y)
// console.log(typeof "hmm")

// var z;
// console.log(z)
// console.log(typeof z)

// var b = true
// console.log(b)
// console.log(typeof b)

// var obj = {
//     name: "tom",
//     roll: 72,
// }

// console.log(obj)
// console.log(typeof obj)

/* ------------------------------------------------- */

// var x = 12;
// var y = 13.56;
// var sum =  x + y;

// console.log(sum);
// console.log(parseFloat(sum));
// console.log(parseInt(sum)); // type cast to INT


// var s1 = "tom";
// var s2 = "al";
// console.log(s1 + s2);
// console.log(s1 - s2); // NaN
// console.log(s1 * 3); // NaN

// var a = "33.33333";
// var b = 20;
// var sum = a + b;

// console.log(sum);
// console.log(typeof sum);
// console.log(parseInt(a) + b);
// console.log(parseFloat(a) + b);
// console.log(parseFloat(a).toFixed(2) + b);

// console.log(a - b);
// console.log(a * b);
// console.log(a / b);


/* ------------------------------------------- */

// var x = 11;
// if(x%2 == 0)
//     console.log("even");
// else 
//     console.log("odd");

// var y = 3;
// console.log(y > 0);
// if(y > 0)
// {
//     console.log("positive")
//     console.log("+")
// }
// else if(y < 0)
//     console.log("negative")
// else
//     console.log("zero")


/* ---------------------------------------------- */

// // object
// var obj = {
//     name: "tom",
//     age: 24,
//     //funtions

//     obj2: {cls: 12, roll: 72, mark: 33.4444,} // Nested object
// };

// console.log(typeof obj);
// console.log(Object.keys(obj));
// console.log(Object.values(obj));
// console.log(Object.entries(obj));
// console.log(obj);
// console.log(obj.name, obj.age, obj.obj2);
// console.log(obj.obj2.cls, obj.obj2.roll, obj.obj2.mark);


/* ---------------------------------------------- */

var arr = ["one",2,"three",4,"five",6.6666,true]; //array

// console.log(arr[0]);
// console.log(arr[3]);
// console.log(arr[5]);
// console.log(arr[6]);
// console.log(arr[9]); //undefined

// console.log(arr);
// console.log(arr.length); // property


// ------------ Hover mouse to see .property .method() details ------------------


// // Returns the index of the first occurrence of a value in an array, or -1 if it is not present.
// console.log(arr.indexOf(4)) // return the index of that element in the array
// console.log(arr.indexOf("4")) //return -1 if element is not in the array

// arr.pop(); // method
// console.log(arr);

// arr.push("seven");
// console.log(arr);

// arr.unshift("zero");
// console.log(arr);

// // Removes the first element from an array and returns it. If the array is empty, undefined is returned and the array is not modified.
// console.log(arr.shift());
// console.log(arr);

// // Reverses the elements in an array in place. This method mutates the array and returns a reference to the same array.
// arr.reverse(); // arr = arr.reverse() | reverse and return
// console.log(arr);
// console.log(arr.reverse());

// // Sorts an array in place. This method mutates the array and returns a reference to the same array.
// console.log(arr.sort());

// // Combines two or more arrays. This method returns a new array without modifying any existing arrays.
// console.log(arr.concat("x","y","z"));
// console.log(arr);
// var brr = arr.concat(["x","y","z"]);
// console.log(brr);

// // Adds all the elements of an array into a string, separated by the specified separator string.
// console.log(arr.join("+"));

// // slice from index 2 to before index 5 and return the sliced portion without affecting the main array 
// // Returns a copy of a section of an array. For both start and end, a negative index can be used to indicate an offset from the end of the array.
// console.log(arr.slice(2,5));
// console.log(arr);



/* ---------------------------------------------- */

// [ initialize once -> check conditions -> step/increament/decrement ]


// for(var i=0; i<10; i++) // step 1
// {
//     console.log("count:", i, "okk");
// }

// for(var i=0; i<arr.length; console.log(arr[i++])); // loop over array

// for(var i=1; i<=100; i*=2) // log(n) steps 
//     console.log(i);


// for(var i=1,sum=0; i<=10; sum+=i++) 
//     console.log(sum); //cumulative sum / prefix-sum



/* ---------------------------------------------- */




// 4. leapyear
// var year = 1700;
// if(year%400==0 || (year%100!=0 && year%4==0))
//     console.log("Leap year");
// else
//     console.log("Not Leap year!");

// // 5.
// for(var i=1; i<=50; i++)
//     if(!(i%3 || i%5))
//         console.log(i);

// 6.
// var frd = ["xyz","dkfj","tomal","dkfji","abc"];
// var nm;
// for(var i=0,len=0; i<frd.length; i++)
// {
//     if(len < frd[i].length)
//     {
//         nm = frd[i];
//         len = frd[i].length
//     }
// }
// console.log(nm);

var num = [7,4,9,3,5,8,1,3,4,6,10,2];
// 3.
console.log(num);
console.log(num.sort(function(a,b){return a-b})); //??????????
console.log(num);
// for(var i=0; i<num.length-1; i++)
// {
//     var mn = i;
//     for(var j=i+1; j<num.length; j++)
//     {
//         if(num[mn] > num[j])
//             mn = j;
//     }
//     if(mn != i)
//     {
//         var tmp = num[i];
//         num[i] = num[mn];
//         num[mn] = tmp;
//     }
// }
// console.log(num);


// 7.
// var unq = []; //empty array
// for(var i=0; i<num.length; i++)
// {
//     if(unq.indexOf(num[i]) == -1)
//         unq.push(num[i]);
// }
// console.log(unq);


// 8.
// console.log(num.sort(function(a,b){return a-b}));
// console.log(num[num.length-1]);


// for(var i=0, mx=-1; i<num.length; i++)
// {
//     if(num[i] > mx)
//         mx = num[i];
// }
// console.log(mx);


/* -------------------------------------------- */

// function print()
// {
//     console.log("this function prints")
// };

// print();

// function sum(a, b=0) //default value
// {
//     return a+b;
// };

// console.log(sum(23.99,54));

// function cal(a,op,b)
// {
//     if(op == "+")
//         return a+b;
//     else if(op == "-")
//         return a-b;
//     else if(op == "*")
//         return a*b;
//     else if(op == "/")
//         return a/b;
//     else 
//     {
//         console.log("Envalid operation!");
//         return NaN;
//     }
// }

// console.log(cal(100,"+",20));
// console.log(cal(100,"-",20));
// console.log(cal(100,"*",20));
// console.log(cal(100,"/",20));
// console.log(cal(100,"^",20));

function fun1()
{
    return "hello, ";
};

function fun2(str = "")
{
    return fun1() + str; //nested function
};

console.log(fun2("tom"));