package main

import (
    "fmt"
    "sort"
)

func main () {
    const size = 3
    var a = new ([size]int)
    for i := 0; i < size; i++ {
        fmt.Scan(&a[i])
    }
    var j = 0
    b := []int{0,0,0}
    for i := size - 1; i >= 0 ; i-- {
        b[j] = a[i]
        j++
    }

    sort.Ints(b)
    for i := 0; i < size; i++ {
        fmt.Println(b[i])
    }
    fmt.Println("")
    for i := 0; i < size; i++ {
        fmt.Println(a[i])
    }

}
