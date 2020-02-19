type person = {
  name: string,
  age: int,
  weight: option(int),
};

let validateAge = age => age > 18;

let getAge = person => person.age;

let decode = json =>
  Json.Decode.{
    name: json |> field("name", string),
    age: json |> field("age", int),
    weight: json |> optional(field("weight", int)),
  };

let parseData = json => json |> Json.parseOrRaise |> decode;

let data = {| { "name": "Guilherme", "age": 24 } |};

let withoutPipe = validateAge(getAge(parseData(data)));

let withPipeFirst = parseData(data)->getAge->validateAge;

let withPipeForward = data |> parseData |> getAge |> validateAge;

Js.log(withoutPipe) /* true */;
Js.log(withPipeFirst) /* true */;
Js.log(withPipeForward) /* true */;