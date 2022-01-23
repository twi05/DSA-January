'use strict'

// Create a web page to get Student data
// have it stored in Map as a key value pair
// where key will be student id -- Unique
// and value should be Student object
// Create a table under the Student entry page
// and Display the data into it

//Print a Sentence describing your personal profile
//e.g:- Firstname Lastname has 3 friends. 
//He is now an adult. 
//He can be contacted on his contact number 7878787878.
// Using this ketyword get the values from Object 
// and write function expression to return the complete sentence 

let studentObject = {
    firstname:"Firstname",
    lastname:"Lastname",
    birthYear:2012,
    contact:"7878787878",
    friends:["f1","f2","f3"],
    calcAge : function(){
        return 2022 - this.birthYear;
    }
};

let studentMap = new Map([
    [1,studentObject]
]);

studentMap.set(2,studentObject);

console.log("studentMap",studentMap);

let mySet = new Set([
    "one",
    "two",
    "one",
    "three"
]);

console.log("mySet",mySet);

let myMap = new Map([
    ["one","1"],
    ["two","2"],
    ["three","3"]
]);

console.log("myMap",myMap);

let a = 10;
let b = a;
a=20;

console.log("a",a);

console.log("b",b);

let sampleObject = {
    firstname:"Firstname",
    lastname:"Lastname",
    birthYear:2012,
    contact:"7878787878",
    friends:["f1","f2","f3"],
    calcAge : function(){
        return 2022 - this.birthYear;
    }
};

sampleObject.firstname = "MyName"

console.log("sampleObject::"+sampleObject.firstname);

const calcAge = function(birthYear){
    console.log(this);
    return 2022 - birthYear;
}

calcAge(1992);

//Develop execution stack for your pizza order
//add pizza base
//add veg/nonveg
//add suppliments
//create one execution context for each
//unless all ingredients are added in pizza container it cannot be removed from call stack
//concept - LIFO

//Print a Sentence describing your personal profile
//e.g:- Firstname Lastname has 3 friends. 
//He is now an adult. 
//He can be contacted on his contact number 7878787878.
//Take inputs to add and remove friends from the list
// and Print the output in <p> tag on the html page
// console.log("current Object",this);

//DOM Manipulation
function changeColor(){
    window.history.go(0);
    // document.querySelector('#tableId').style.borderColor = document.querySelector(".colorCode").value;
    // changeBorderWidth('5px');
    console.log("red",document.querySelector(".colorCode").value);
    console.log(this);
    return;
}

// function changeBorderWidth(borderWidth){
//     document.querySelector('#tableId').style.borderWidth = borderWidth;
//     console.log("width",document.querySelector(".colorCode").value);
//     return;
// }


// document.querySelector('.table1').style.borderStyle = "solid";

// console.log("element::"+document.querySelector('.table1'));

// document.querySelector(".applyColor").addEventListener('click',changeColor);

//Ternary Operation;
// let falsyValueNew = 1;

// let op = !falsyValueNew?"falsy value":"truthy value";

// console.log("output::"+op);

//Print a Sentence describing your personal profile
//e.g:- Firstname Lastname has 3 friends. 
//He is now an adult. 
//He can be contacted on his contact number 7878787878.

//Objects and Objects Method
// let sampleObject = {
//     firstname:"Firstname",
//     lastname:"Lastname",
//     birthYear:2012,
//     contact:"7878787878",
//     friends:["f1","f2","f3"],
//     calcAge : function(){
//         return 2022 - this.birthYear;
//     }
// };

// sampleObject.friends.push("f4");

// console.log("friends",sampleObject.friends.length);

// let keyName = "name";

// console.log(sampleObject.firstname);
// console.log(sampleObject["first"+keyName]);
// console.log(sampleObject["last"+keyName]);

// console.log("Age",sampleObject.calcAge());

// //Implement Stack using Arrays in Javascript

// //Array and Array Methods
// let sampleArray = [
//     "one",
//     "two",
//     3,
//     false
// ];

// console.log(sampleArray);

// sampleArray.push("three");

// console.log(sampleArray);

// sampleArray.unshift("zero");

// console.log(sampleArray);

// sampleArray.pop();

// console.log(sampleArray);

// sampleArray.shift();

// console.log(sampleArray);

// console.log(sampleArray.indexOf(3));

// console.log(sampleArray.includes(false));

// //Strict Mode
// let hadFood = true;
// let haveFood = false;

// if(hadFood) haveFood = true;

// console.log("haveFood:",haveFood);

// //== Vs ===
// let a = 10;

// if(a==="10")console.log("correct!!");

// // 5 falsy values 0,'',undefined, null,NaN

// console.log(Number('10.34'));

// let falsyValue = '1';

// if(!falsyValue) console.log("falsy value");

// let a = 12;
// let b = 13;

// console.log(a+b);

// Type Conversion and Coercion
// console.log(Number('10.34'));

// console.log('10'+10);

// console.log(Number('10')+10);

// console.log('20'-10);

// console.log(2*'10');

// const nameFunction = function (name) {
//     return name;
// };

// const nameFunctionArrow = name => console.log(this);

// function oldFunction(){
//     console.log(nameFunction("Java Conversion!!"));
// }

// oldFunction();

// nameFunctionArrow();
