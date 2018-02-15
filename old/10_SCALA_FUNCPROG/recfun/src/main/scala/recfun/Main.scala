package recfun

object Main {
  def main(args: Array[String]) {

//    val bal = "(())())"
//    println(s"Balance $bal")
//    println(balance(bal.toList))

      println(countChange(20, List(1, 5, 10)))
  }


    def factorial(n:Int): Int = {
      if (n == 1) 1
      else n*factorial(n-1)
    }
  /**
   * Exercise 1
   */
    def pascal(c: Int, r: Int): Int = {
      if (c == r || c == 0) 1
      else factorial(r)/(factorial(c)*factorial(r-c))
    }
  
  /**
   * Exercise 2
   */
    def balance(chars: List[Char]): Boolean = {
      def f(chars: List[Char], opens: Int) : Boolean = {
        println(s"Procceed $chars with opens $opens")
        if (chars.isEmpty) opens == 0
        else {
          val h = chars.head
          val n =
            if (h == '(') opens + 1
            else if (h == ')')  opens - 1
            else opens
          if (n >= 0) f(chars.tail, n)
          else false
        }
      }
      f(chars, 0)
    }
  
  /**
   * Exercise 3
   */
    def countChange(money: Int, coins: List[Int]): Int = {

      def count(capacity: Int, changes: List[Int]): Int = {
        if (capacity == 0)
          1
        else if (capacity < 0)
          0
        else if (changes.isEmpty && capacity >= 1)
          0
        else
          count(capacity, changes.tail) + count(capacity - changes.head, changes)
      }

      count(money, coins.sortWith(_.compareTo(_) < 0))
    }
}
