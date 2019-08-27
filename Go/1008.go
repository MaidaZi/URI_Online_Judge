package main

import (
    "fmt"
)

func main () {
    var num, time int
    var byTime float64
    fmt.Scan(&num, &time, &byTime)
    fmt.Printf("NUMBER = %d\n", num)
    fmt.Printf("SALARY = U$ %.2f\n", float64(time) * byTime)
}
