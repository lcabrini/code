package main

import (
    "fmt"
    "math/big"
)

func main() {
    var num int64

    fmt.Printf("Enter a positive integer: ")
    fmt.Scan(&num)
    if big.NewInt(num).ProbablyPrime(0) {
        fmt.Printf("%d is a prime number.\n", num)
    } else {
        fmt.Printf("%d is not a prime number.\n", num)
    }
}
