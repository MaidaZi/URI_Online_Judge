package main

import (
    "fmt"
)

func abs (x int) int {
    if x >= 0 {
        return x
    } else {
        return x * -1
    }
}

func main ()  {
    var a, b, q, r int
    fmt.Scan(&a, &b)

    r = a % abs(b)

    if r >= 0 {
        q = (a - r)/(b)
        fmt.Printf("%d %d\n", q, r)
    } else {
        r = r + abs(b)
        q = (a - r)/(b)
        fmt.Printf("%d %d\n", q,r)
    }
}
