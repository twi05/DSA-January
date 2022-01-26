'use strict'


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
    },
    changeDetail: function(firstname, lastname,contactnumber){
        this.firstname = firstname;
        this.lastname = lastname;
        this.contact = contactnumber;
    }
};
let employeeObject = {
    firstname: "Twinshu",
    lastname: "Lastname",
    birthYear: 2012,
    contact: 6546484,
    friends: ["f1", "f2", "f3"],
};

// const changeDetailObj = studentObject.changeDetail;

// const changeDetailBind = changeDetailObj.bind(employeeObject);
// changeDetailBind.bind(employeeObject,"twi","par",546546);

// console.log(employeeObject);

// IIFE
// (function(){
//     let a = 12;
//     let b = 13;

//     console.log(a+b);
// })();


let basicSet = new Set([1,2,3]);
// console.log(basicSet)

basicSet.forEach(function(element,index,arr){
console.log(element,index,arr)
})

basicMap.forEach(function(value,key,internalMap){
    console.log(value)
})