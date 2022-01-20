// 'use strict'

// console.log(Number('5'))

// falsy values in JS: 0,'',undefined, null, NaN 

let falsyvalue =0;
// if(falsyvalue)
// {
//     console.log("truthy value");
// }
// else{
//     console.log("falsy value");
// }

// if(!falsyvalue) console.log("falsy value");

//============= Operators =============//

// let a=10;
// if(a=='10')console.log("not compairing strictly")

let hadFood =true;
let havFood = false ;

if(hadFood) havFood = true;
// console.log("haveFood: ", havFood)

let sampleArray = ["one", "two", 3, false];
// console.log(sampleArray);

// console.log(sampleArray.indexOf(3))

// console.log(sampleArray.includes(false));
// console.log(sampleArray.includes("false"));  // This is Wrong


let sampleObject ={
    name: "Firstmame Lastname",
    age:52,
    contact:"654656",
    friends:["f1","f2",false],

    calcAge:function(birthYear){
        return 2022-birthYear;
    }
};

let key = "name";
// console.log(sampleObject.name);

// console.log(sampleObject[ key])

// console.log("Age", sampleObject.calcAge(2001))
 console.log("Age", sampleObject.calcAge(sampleObject.age))



 // Print a Sentence describing your personal profile

//  console.log('My name is Twinshu Parmar. He likes WebDevelopment and d')


