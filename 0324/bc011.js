/*
 * @Description:
 * @Author: jinxiaojian
 * @Email: jinxiaojian@youxin.com
 * @LastEditors: 靳肖健
 * @Date: 2019-03-24 23:55:33
 * @LastEditTime: 2019-03-25 00:48:07
 */
function math01(number, arr) {
  var max = 0;
  var sum = 0;
  for (var i = 0; i < number; i++) {
    sum += arr[i];
    if (sum > max) {
      max = sum;
    } else if (sum < 0) {
      sum = 0;
    }
  }
  console.log(max);
}
math01(6, [-2, 11, -4, 13, -5, -2]);
