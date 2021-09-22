g <- function(y){
  (y*cos(y)+1)/(1+y^2)
}
g(0.00001)


a1 <- 1.0000099998999983
a2 <- 1.00001

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