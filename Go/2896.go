package main

import (
    "fmt"
)

func main () {
    var t, n, k int
    fmt.Scan(&t)
    for i := 0; i < t; i++ {
        fmt.Scan(&n, &k)
        fmt.Println((n%k)+(n/k))
    }
}
