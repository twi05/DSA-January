"use strict";

class Student {
  constructor(name,age) { //constructor method
      this.name = name;
      this.age = age;
    console.log("constructor function");
  }
  hello(){    // Prototype
      console.log("Helo "+ this.name )
      console.log("your age is  "+ this.age )
  }

  static staticFunction(){
      console.log("Static Fumction callled");
  }
}
let a = new Student("twi",5);
// let b = new Student;

a.name = "Twi ";
a.hello();
Student.staticFunction();

