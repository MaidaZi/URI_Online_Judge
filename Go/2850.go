package main

import (
    "bufio"
    "fmt"
    "os"
)

func main () {
    var str string
    scanner := bufio.NewScanner(os.Stdin)

    for scanner.Scan() {
        str = scanner.Text()
        if(str == "esquerda"){
            fmt.Println("ingles")
        } else if(str == "direita"){
            fmt.Println("frances")
        } else if(str == "nenhuma"){
            fmt.Println("portugues")
        } else{
            fmt.Println("caiu")
        }
    }
}
