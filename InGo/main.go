package main

import (
	"fmt"
)

func main() {
	fmt.Println("hola")
	fmt.Println(sum(5))
	f := fib()
	for i := 0; i < 10; i++ {
		fmt.Println(f())
	}
	fmt.Println("factorial", fact(5))
}

func sum(n int) int {
	if n == 0 {
		return 0
	}
	return n + sum(n-1)
}

func printSeq(n int, max int) {
	if n <= max {
		fmt.Printf("%d ", n)
		printSeq(n+1, max)
	}
}

func fib() func() int {
	a, b := 0, 1
	return func() int {
		a, b = b, a+b
		return a
	}
}

func fact(n int) int {
	if n == 0 {
		return 1
	}
	return (n * fact(n-1))
}

func rangess(i int, n int) []int {
	var hala []int

}
