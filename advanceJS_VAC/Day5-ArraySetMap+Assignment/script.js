'use strict'

//string
//Gather all string methods  //Assignment
// const str= "asd_fsdaf";
// console.log(str.replaceAll("a",""))
// console.log(str.startsWith("a",""))
// console.log(str.split("_"))
// console.log(str.toUpperCase());





// const basicArray = ['f1','f2','f3', 2,3,4];
// console.log(basicArray)

// const uniqueArray = [...new Set(basicArray)]
// console.log(uniqueArray)

// const [var1,,var2] = basicArray;
// console.log(var1,var2) //This is Destructuring

// const basicSet = new Set(basicArray);
// console.log(basicSet);

// basicSet.add(true);
// console.log(basicSet);

// basicSet.delete('2');
// console.log(basicSet);  

// for(let item of basicSet){
//     console.log(item);
// }

// let basicMap = new Map([
//     ["one",1],
//     ["two",2],
//     ["three",3],
//     ["four",4]
// ])

// // ... for converting map/set to array
// const convertedArray = [...new Map(basicMap)];
// console.log("Map converted to Array:", convertedArray)

// for(let[basicKey,basicValue] of basicMap){
//     console.log(basicKey,basicValue)
// }


// const sentset = new Set("asdfasdfasdf");
// console.log("sentSet", sentset);
// console.log("sentSet", sentset.size);


let studentObject = {
    firstname: "Firstname",
    lastname: "Lastname",
    birthYear: 2012,
    contact: "7878787878",
    friends: ["f1", "f2", "f3"],
    calcAge: function() {
        return 2022 - this.birthYear;
    },
    printFullName: function() {
        return this.firstname + this.lastname;
    }, 
    addFriend : function(friendName){
        this.friends.push(friendName)
    }
};
let employeeObject = {
    firstname: "Twinshu",
    lastname: "Lastname",
    birthYear: 2012,
    contact: "7878787878",
    friends: ["f1", "f2", "f3"],
};

const calcDiff = studentObject.calcAge;
// console.log(calcDiff)
console.log(calcDiff.call(employeeObject));

const printFullName = studentObject.printFullName;
console.log(printFullName.call(employeeObject))

const addFriends = studentObject.addFriend;
addFriends.call(studentObject,('f4'))




const detailArray = ["Twinshu", "Parmar", 2132113]

// function calcDiffernce(){
//     console.log(this.firstname);
// }
// studentObject.calcAge();

// const firsArrow = inputNumber => console.log(this);
// firsArrow();