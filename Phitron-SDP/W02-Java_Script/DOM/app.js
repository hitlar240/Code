// alert("Hello World");

// console.log("hello, tom")

var h1 = document.getElementsByTagName("h1");
// console.log(h1);

var title2 = document.getElementById("title2"); //Unique ID
// var title2 = document.getElementById("title2").style.color="blue"; //Unique ID
// document.getElementById("title2").style.removeProperty("color");
// console.log(title2);

var title = document.getElementsByClassName("title");
// console.log(title);

// title[0].style.color="red";
// console.log(title[2]);


var img1 = document.getElementById("img1");
// console.log(img1.getAttribute("src"));

// img1.setAttribute("alt","pic");
// console.log(img1.getAttribute("alt"));

// img1.classList.add("image");
// console.log(img1);

var des1 = document.getElementById("des1");
// console.log(des1);
// console.log(des1.innerText);

var parent1 = document.getElementById("parent1");
// console.log(parent1);
// console.log(parent1.innerHTML);
// console.log(typeof parent1.innerHTML);

// var p = document.createElement("p");
// p.innerText = "new paragraph created with JS";
// parent1.append(p);

function createParagraph(where,txt)
{
    var p = document.createElement("p");
    p.innerText = txt;
    where.append(p);
}

// createParagraph(parent1,"new paragraph created with JS function");

var parent = document.getElementsByClassName("parent");
// console.log(parent);

var child = document.getElementsByClassName("child");
// console.log(child);
// console.log(child[1]);
// console.log(child[1].childNodes);
// console.log(child[1].childNodes[3]);
// console.log(child[1].childNodes[3].innerText);
var childA = child[1].childNodes[3];
// console.log(childA);
// console.log(childA.parentNode); //child
// console.log(childA.parentNode.parentNode); //parent
// console.log(childA.parentNode.parentNode.parentNode); //body
// console.log(childA.parentNode.parentNode.parentNode.childNodes); //body->child


var input1 = document.getElementById("input1");
// console.log(input1.value);

function blurInput(e){
    // console.log(e);
    // console.log(e.target);
    console.log("e.target.value");
};
// input1.addEventListener("blur",blurInput);
// ---- can also be use inside HTML tag ----

var clk = document.getElementById("clk-btn");

// clk.addEventListener("click",function(e){
//     console.log("okk boss");
//     // alert("new paragraph created");
//     // createParagraph(childA,"new paragraph");

//     createParagraph(childA,input1.value);
// });


function clickInput(e){
    console.log("okk boss");
    // alert("new paragraph created");
    // createParagraph(childA,"new paragraph");
    
    createParagraph(childA,input1.value);
};
// clk.addEventListener("click",clickInput);

// ---- can also be use inside HTML tag ----