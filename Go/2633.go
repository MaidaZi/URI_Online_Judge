package main

import (
    "fmt"
    "os"
    "bufio"
    "sort"
    "strconv"
)

func main() {
    var val int
    var name, str string
    scanner := bufio.NewScanner(os.Stdin)

    for scanner.Scan() {
        str = scanner.Text()
        qtd, _ := strconv.Atoi(str);
        m := map[int]string{}
        // add Itens
        for i := 0; i < qtd; i++ {
            fmt.Scan(&name, &val)
            fmt.Println(name, val)
            m[val] = name
        }

        // Sort itens by kye
        sort.Ints(m)

        for _, k := range keys {
        	fmt.Println(k, m[k])
        }

        fmt.Println()
    }
}
