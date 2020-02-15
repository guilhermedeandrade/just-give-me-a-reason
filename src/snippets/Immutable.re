let message = "hello";
let message = "bye";

Js.log(message); // bye

type person = {
  age: int,
  name: string,
};

let jorgeMartinez = {age: 900000, name: "Jorge Martinez"};

let age = 40;

let fixedJorgeMartinez = {...jorgeMartinez, age};

// type option('a) = None | Some('a)

type rubberDuck = {
  color: string,
  mutable occupation: option(string),
};

let duck = {color: "purple", occupation: None};

duck.occupation = Some("witch");

Js.log(duck) /* { color: "purple", occupation: 'witch' */;

let foo = ref(5);
foo := 6;

Js.log(foo) /* { contents: 6 } */;

type mutableVariable = {mutable contents: int};
let bar = {contents: 5};
bar.contents = 6;

Js.log(bar) /* { contents: 6 } */;

let baz = ref("smash");
let hulk = baz^;
baz := "bros";

Js.log(hulk) /* smash */;
Js.log(baz^) /* bros */;