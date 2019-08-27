package main

import (
    "fmt"
)

func main () {
    var hi, mi, hf, mf int
    var duracaoH = 0
    var duracaoM = 0
    fmt.Scan(&hi, &mi, &hf, &mf)

    if hi == hf {
        duracaoH = 24
        duracaoM = 0
        if mf > mi {
            duracaoM = mf - mi
            if duracaoH >= 24 && duracaoM > 0 {
                duracaoH = 0
            }
        } else if mi > mf {
            duracaoH -= 1
            duracaoM = 60 -(mi - mf)
        }
    } else if hi < hf{
        for i := hi ; i <= hf ; i++ {
            duracaoH++
        }
        if mf >= mi {
            duracaoH -= 1
            duracaoM = mf - mi
        } else {
            duracaoH -= 2
            duracaoM = 60 -(mi - mf)
        }
    } else {
        for i := hi ; i != hf ; i++ {
            if i == 24 {
                i = 0
            }
            duracaoH++
        }
        if mf > mi {
            duracaoM = mf - mi
            if duracaoH >= 24 && duracaoM > 0 {
                duracaoH = 0
            }
        } else if mi > mf{
            duracaoH -= 1
            duracaoM = 60 -(mi - mf)
        }
    }
    fmt.Printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoM)
}
