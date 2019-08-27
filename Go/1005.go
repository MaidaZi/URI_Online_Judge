package main

import (
    "fmt"
)

func main () {
    var a, b float64
    fmt.Scan(&a, &b)
    fmt.Printf("MEDIA = %.5f\n", (3.5*a + 7.5*b)/ 11)
}
