/*
 * @Description:
 * @Author: jinxiaojian
 * @Email: jinxiaojian@youxin.com
 * @LastEditors: 靳肖健
 * @Date: 2019-03-24 23:55:33
 * @LastEditTime: 2019-03-25 00:29:44
 */
function math01(number, arr) {
  var max = 0;
  var sum = 0;
  for (var i = 0; i < number; i++) {
    if (arr <= 0) {
      continue;
    }
    sum = 0;
    for (var j = i; j < number; j++) {
      sum += arr[j];
      if (sum > 0 && sum > max) {
        max = sum;
      }
    }
  }
  console.log(max);
}
math01(6, [-2, 11, -4, 13, -5, -2]);
