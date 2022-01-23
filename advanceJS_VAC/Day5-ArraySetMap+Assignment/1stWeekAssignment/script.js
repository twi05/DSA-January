"use strict";

let stud1 = {
  firstname: "Ambav",
  lastname: "Gevato",
  address: "India",
};
let stud2 = {
  firstname: "Bhallo",
  lastname: "Kedapi",
  address: "India",
};
let stud3 = {
  firstname: "Ciklo",
  lastname: "napito",
  address: "India",
};

let MyMap = new Map([
  ["1", "stud1"],
  [2, stud2],
  [3, stud3],
]);


console.log(MyMap.forEach(printTwo))

// MyMap.get(4);
// console.log(MyMap.has(4));
// console.log(MyMap);

// console.log(MyMap.values())

//ForEach Function for Map for iterating 
// map1.forEach(callback[, thisArgument]);

// Parameters:
// callback - It is a function that is to be executed for each
//  element of the Map.
// thisargument - Value to be used as this when executing
//  the callback.

// Returns:
// undefined

// function printOne(values){
//     console.log(values);
// }

// console.log(MyMap.forEach(printOne))


// function printTwo(values,key){
//     console.log(key + " yes "+ values);
// }

// console.log(MyMap.forEach(printTwo))





// Call Apply Practice

// let studentObject = {
//     firstname:"Firstname",
//     lastname:"Lastname",
//     birthYear:2012,
//     contact:"7878787878",
//     friends:["f1","f2","f3"],
//     calcAge : function(){
//         return 2022 - this.birthYear;
//     },
//     printFullName: function(){
//         return this.firstname+" "+this.lastname
//     },
//     printDetail: function(fname,lname,BY, contact){
//         console.log(`${fname} And ${lname} and birthyear ${BY} and Contact ${contact}`)
//     }
// };
// let studentObject2 = {
//     firstname:"ss",
//     lastname:"tye",
//     birthYear:2012,
//     contact:"7878787878",
//     friends:["f1","f2","f3"],

// };

// // console.log(studentObject.printFullName.call(studentObject2));
// const arr = ["twinshu", "parmar", "20",654654]
// console.log(studentObject.printDetail.apply(studentObject2,arr));
