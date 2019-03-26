function math01(number, arr) {
  var max = 0;
  var sum = 0;
  var start = arr[0]
  var end = arr[number - 1]
  var start_ready = 0
  for (var i = 0; i < number; i++) {
    sum += arr[i];
    if (sum > max) {
      max = sum;
      end = arr[i]
      start = start_ready
    } else if (sum < 0) {
      sum = 0;
      start_ready = arr[i + 1]
    }
  }
  console.log(max, start, end);
}
math01(10, [-10, 1, 2, 3, 4, -5, -23, 3, 7, -21]);