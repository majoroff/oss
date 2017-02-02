object exercise {

  def product(f: Int=>Int)(a: Int, b:Int): Int
 = {
    if(a > b) 1 else f(a)*product(f)(a+1, b)
  }

    product(x => x*x)(1, 3)

  def fact(n:Int):Int = product(x=>x)(1, n)
  fact(5)

  def combiner(f: (Int, Int)=>Int)

}