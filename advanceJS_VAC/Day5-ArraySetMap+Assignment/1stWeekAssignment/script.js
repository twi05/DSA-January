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
  [1, stud1],
  [2, stud2],
  [3, stud3],
]);

console.log(document.querySelector('#fname').val);
document.querySelector('#submit').addEventListener('click', submit);

function submit(){
  MyMap.set(4,stud3);
  displayMovies(MyMap);
} 



let tablediv  = document.querySelector('.data');

function displayMovies(MyMap){
  let table = '<table>';
  table += '<tr><th>FirstName</th><th>LastName</th><th>Address</th></tr>';
  MyMap.forEach((movie) => {
      table = table + '<tr>',
      table = table + '<td>'  +`${movie.firstname}` + '</td>',
      table = table + '<td>' + `${movie.lastname}` + '</td>',
      table = table + '<td>' +`${movie.address}` + '</td>'
   });  
   table += "</table>"
  tablediv.innerHTML = table;
}



// console.log(MyMap.forEach(printTwo))

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
