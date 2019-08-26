package main

import (
    "fmt"
)

func main () {
    var n int
    var v1 = 1
    var v2 = 1
    var v3 int

    fmt.Scan(&n);

    v := make([]int, n)
    for i := 0; i < n; i++ {
        v[i] = v1
		v3 = v1 + v2
		v1 = v2
		v2 = v3
    }
    for i := n; i > 0; i-- {
        fmt.Print(v[i-1])
        if (i > 1 ){
			fmt.Print(" ")
        }
    }
    fmt.Println()
}
