#Linier Piecewise

x = c(NULL)
y = c(NULL)

require(PolynomF)

polyfit = poly_calc(x,y) 
polyfit 

plot(x,y)
curve(polyfit,add=T) 

plot.new()
curve(polyfit,ylim = c(NULL))



bedaterbagi <- function(x,f) {
  beda_terbagi<-matrix(rep(0, (length(x)^2)), length(x), length(x), FALSE, NULL)
  for (j in 1:length(x)) {
    for (i in 1:length(x)) {
      if(i>=j){
        if(j==1){
          beda_terbagi[i,j]<-f(x[i])
        } else {
          beda_terbagi[i,j]<-(beda_terbagi[i,j-1]-beda_terbagi[i-1,j-1])/(x[i]-xi-(j-1))
        }
      }
    }
  }
  return(beda_terbagi)
}