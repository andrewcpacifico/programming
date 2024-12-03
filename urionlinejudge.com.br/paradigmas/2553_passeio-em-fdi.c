
f(c, v, a, i, n,  totalV, totalA)
    if (i > n) return 0

    if (v > 0 && totalV < v) {
        return f()
    }