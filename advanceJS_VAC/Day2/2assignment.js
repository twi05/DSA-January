personObject = {
    firstname:"Twinshu",
    lastname :"Parmar",
    age:20,
    contact:88274661,
    intrest:"photography, web development",

    birthYear: function(age){
        return 2022- age;
    }
}

console.log("Name of person is " + personObject.firstname + " last name is " + personObject.lastname + " and age is " + personObject.age + "He is " );

 (personObject.age>18 && personObject.age<60)?console.log("Adult"):console.log("Child or Aged");
 console.log( "and Birthyear is " + personObject.birthYear(personObject.age));