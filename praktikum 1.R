#turunan pertama
f <- function(x){
  (4*x^3+3*x^2)/sqrt((4*x+10))
}
f(0.9)
install.packages("Deriv")
library(Deriv)

#nilai pendekatan
df <- Deriv(f)
df(0.9)

a1 <- 3.8868036256589003 
a2 <- 3.886804

#galat absolut
galat_absolut <- function(a1,a2){
  return(abs(a1-a2))
}
galat_absolut(a1,a2)

#galat relatif
galat_relatif <- function(a1,a2){
  return((abs((a1-a2)/a1)) * 100)
}
galat_relatif(a1,a2)

#turunan kedua
f <- function(x){
  (4*x^3+3*x^2)/sqrt((4*x+10))
}
f(0.9)

library(Deriv)

#nilai pendekatan
ddf <- Deriv(df)
ddf(0.9)
s2 <- 6.3722735558900947
p2 <- 6.372274