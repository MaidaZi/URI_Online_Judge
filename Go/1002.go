package main
import (
	"fmt"
	"math"
)

func main () {
	const n = 3.14159
	var r float64
	fmt.Scan(&r)
	fmt.Printf("A=%.4f\n", n*math.Pow(r, 2))
}
