package main

import (
    "fmt"
)

func main () {
    var a, b, c float64
    fmt.Scan(&a, &b, &c)
    fmt.Printf("MEDIA = %.1f\n", (2.0*a + 3.0*b + 5.0*c)/ 10)
}
