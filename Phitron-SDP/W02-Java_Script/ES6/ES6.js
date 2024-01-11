// // scope

// function fun()
// {
//     if(true)
//     {
//         var x = 10; // functional scope
//         let y = 20; // block scope
//         const z = 30; // block scope
//     }
//     console.log(x); //scope in the function
//     // console.log(y); //scope in the block
//     // console.log(z); //scope in the block
// }

// fun()

// // console.log(x); //scope in the function
// // console.log(y); //scope in the block
// // console.log(z); //scope in the block


// let a = 100;
// a = 200; // can re-assign value
// console.log(a);

// const b = 100;
// b = 300; // cannot re-assign value
// console.log(b);

/* ----------------------------------------------------- */

// const mltistr = `multiple line
// string
// tanvir
// okk boss`
// console.log(mltistr);

// const str1 = "tom";
// const val = 240;
// const str2 = "al";
// console.log(str1 + val + str2);

// const Name = `first name: ${str1}, last name: ${str2}
// roll: ${val}`; // dynamic string | like as f'string' in python
// console.log(Name);

/* ----------------------------------------------------- */

//sprade operatior
// const arr = [1,17,2,4,5,11,6,9];

// console.log(arr);
// console.log(...arr);

// console.log(Math.max(...arr)); // max value in the array

// const new_arr = ["tom", ...arr,"al"]; //copy form arr
// console.log(new_arr);

/* ----------------------------------------------------- */

// arrow function

function print()
{
    return "hello world";
}
// console.log(print);
// console.log(print());

const arrow1 = (a) => 2*a; // singleline function
// console.log(arrow1);
// console.log(arrow1(5));

const arrow2 = (a) => { // multi ine arrow function
    console.log("arrow fuction");
    return 2*a;
}
// console.log(arrow2);
// console.log(arrow2(3));

/* ----------------------------------------------------- */

// const numbers = [1,2,3,4,5];
// Array Destructuring
// const [first,second] = numbers; //assign from array
// console.log(first, second);

// const obj = {
//     name: "tom",
//     roll: 72,
//     age: 24,
//     mark: 0,
//     salary: -12.43,
//     address: "rasta"
// }
// console.log(roll);
// console.log(obj.roll);
// // Object Destructuring
// const {name,roll,mark} = obj;
// console.log(name,roll,mark);

// const obj_arr = [
//     {name:"tom",age:99},
//     {mark:0,friends:["abul","babul","habul","kabul",
//     {address:"nai",salary:-98}]},
// ];

// console.log(obj_arr[1].friends[2]); // habul
// console.log(obj_arr[1].friends[4].salary); // -98


/* ----------------------------------------------------- */

// // Map: Calls a defined callback function on each element of an array, and returns an array that contains the results.
// const arr = [1,4,3,5];
// const sqr = arr.map(x => x*x) // arrow function
// console.log(sqr);


// // filter: Returns the elements of an array that meet the condition specified in a callback function.
const products = [
    {id:1, name:"apple", price:500, color:"black"},
    {id:2, name:"samsung", price:220, color:"red"},
    {id:3, name:"xaomi", price:200, color:"blue"},
    {id:4, name:"samsung", price:300, color:"blue"},
    {id:5, name:"apple", price:450, color:"black"},
    {id:6, name:"samsung", price:200, color:"black"},
    {id:7, name:"xaomi", price:220, color:"blue"},
    {id:8, name:"lenovo", price:300, color:"red"}
];

// const result = products.filter(pd => pd.color=="black");
// const result = products.filter(pd => pd.name=="xaomi");
// const result = products.filter(pd => pd.name!="samsung");
// const result = products.filter(pd => pd.price==220);
// console.log(result);

// // find: Returns the value of the first element in the array where predicate is true, and undefined otherwise.
// const result = products.find(pd => pd.color=="blue");
// const result = products.find(pd => pd.price<220);
// console.log(result);

// // for each: Performs the specified action for each element in an array.
// const container = document.getElementById("products");

// const result = products.forEach(pd => {
//     console.log(pd.name);
//     const h2 = document.createElement("h2");
//     h2.innerText = pd.name;
//     container.appendChild(h2);
// });


/* ---------------------------------------------------- */

// // syncronus
// console.log(1);
// console.log(2);
// console.log(3);
// console.log(4);
// fun(5); // asyncronas
// console.log(6);
// console.log(7);
// console.log(8);
// console.log(9);
// console.log(10);

// function fun(x)
// {
//     // fetch("https://fakestoreapi.com/products/1") // asyncronas
//     //     .then(res => res.json())
//     //     .then(data => {console.log(data)})
//     //     .catch(err => console.log(err));

//     setTimeout(() => console.log(x)); // asyncronas

//     // console.log(x);
// }


// const getData = new Promise(function (resolve,reject){
//     // return resolve(20);
//     return reject("no data found");
// });

// console.log(getData);

// getData
//     .then(data => console.log(data))
//     .catch(err => console.log(err));



// const loadData = async() => {
//     try
//     {
//         const response = await fetch("https://fakestoreapi.com/products/1");
//         // const data = response.json(); // Promise {<pending>}
//         const data = await response.json();
//         console.log(data);
//     }
//     catch
//     {
//         (err) => console.log(err);
//     }
// };

// loadData();



// // API: Application Programming Interface
// fetch("https://fakestoreapi.com/products/1")
// // chaining method // .then() Attaches callbacks for the resolution and/or rejection of the Promise.
//     // .then(res => console.log(res))
//     // .then(res => console.log(res.json()))
//     .then(res => res.json())  
//     .then(data => {console.log(data)}) // if resolved
//     .catch(err => console.log(err)); // if rejected

