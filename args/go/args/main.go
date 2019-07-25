package main

import (
    "fmt"
    "os"
)

func main() {
    argc := len(os.Args) - 1;
    fmt.Printf("Number of command-line arguments: %d\n", argc);
    for i := 0; i <= argc; i++ {
        fmt.Printf("%2d. %s\n", i, os.Args[i]);
    }
}
