/*
 * @Description:
 * @Author: jinxiaojian
 * @Email: jinxiaojian@youxin.com
 * @LastEditors: 靳肖健
 * @Date: 2019-03-25 00:12:49
 * @LastEditTime: 2019-03-25 00:42:24
 */
var buf = "";

var k;
var arr;
process.stdin.on("readable", function() {
  var chunk = process.stdin.read();
  if (chunk) buf += chunk.toString();
});

process.stdin.on("end", function() {
  buf.split("\n").forEach(function(line, i) {
    // 第1行输入
    if (i === 0) {
      k = parseInt(line);
      // 第2行输入
    } else if (i === 1) {
      arr = line.split(" ").map(function(x) {
        return parseInt(x);
      });
      // 在这里使用输入作为参数运行测试程序
      math01(k, arr);
    }
  });
});
