library(Deriv)
f     = function(x){x+exp(-x^2)}
df    = Deriv(f)
e     = 0.0001
iMax  = 3
i     = 0
xold  = 0.1
akar = 0

while(i<=iMax){
  i = i+1
  xnow = xold-(f(xold)/df(xold))
  
  if (abs((xnow-xold)/xnow) < e){
    akar = xnow
    cat(sprintf("Akar : %f\n", akar))
    break
  }
  
  else {
    cat(sprintf("iterasi : %d\tx0 : %f\tf(xn) : %f\txn : %f\txn-x0 : %f\n", i, xold, f(xnow), xnow, xnow-xold))
    xold = xnow
  }
}
if (akar==0) {
  print("Akar belum ditemukan (T-T)")
}