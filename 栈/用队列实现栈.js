/**
 * Initialize your data structure here.
 */
var MyStack = function () {
  this.arr = []
  this.length = 0
}

/**
 * Push element x onto stack.
 * @param {number} x
 * @return {void}
 */
MyStack.prototype.push = function (x) {
  this.arr.push(x)
  this.length++
}

/**
 * Removes the element on top of the stack and returns that element.
 * @return {number}
 */
MyStack.prototype.pop = function () {
  this.length--
  return this.arr.pop()
}

/**
 * Get the top element.
 * @return {number}
 */
MyStack.prototype.top = function () {
  return this.arr[this.length - 1]
}

/**
 * Returns whether the stack is empty.
 * @return {boolean}
 */
MyStack.prototype.empty = function () {
  return this.length === 0
}

/**
 * Your MyStack object will be instantiated and called as such:
 * var obj = new MyStack()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.empty()
 */
