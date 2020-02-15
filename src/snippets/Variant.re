type fridayLunch =
  | Pizza
  | Barbecue;

let today = Pizza;

let message =
  switch (today) {
  | Pizza => "we had pizza today!"
  | Barbecue => "we had barbecue today!"
  // | Sushi => "we had sushi today!"
  };

Js.log(message) /* we had pizza today*/;

type result =
  | Loading
  | Error(string)
  | Data(array(string));

let result = Data([|"foo", "bar", "baz"|]);

let data =
  switch (result) {
  | Loading => "Loading..."
  | Error(error) => "Something went wrong: " ++ error
  | Data([||]) => "Array is empty!"
  | Data(array) =>
    array->Belt.Array.length->string_of_int ++ " items in the array"
  };

Js.log(data) /* 3 items in the array */;