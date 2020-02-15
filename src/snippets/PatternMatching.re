type result =
  | Loading
  | Error(string)
  | Data(array(string));

type status =
  | Enabled
  | Disabled;

let getData = (status, result) => {
  switch (status, result) {
  | (Enabled, Loading) => "Loading..."
  | (Enabled, Error(error)) => "Something went wrong: " ++ error
  | (Enabled, Data([||])) => "Array is empty!"
  | (Enabled, Data(array)) =>
    array->Belt.Array.length->string_of_int ++ " items in the array"
  | (Disabled, _) => "Unavailable."
  };
};

let data = getData(Disabled, Loading);

Js.log(data) /* Unavailable. */;