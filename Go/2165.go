package main

import (
    "fmt"
    "os"
    "bufio"
)

func main () {
    var phase string
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Scan()
    phase = scanner.Text()
    if len(phase) <= 140{
        fmt.Println("TWEET")
    } else {
        fmt.Println("MUTE")
    }
}
