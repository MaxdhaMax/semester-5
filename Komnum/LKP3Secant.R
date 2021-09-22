library(Deriv)
f     = function(x){x+exp(-x^2)}
df    = Deriv(f)
e     = 0.0001
iMax  = 3
i     = 0
a     = -1
b     = 0
xold  = b
akar  = 0

cat(sprintf("iterasi : %d\tx0 : ---------\tf(xn) : %f\txn : %f\txn-x0 : ---------\n", i, f(a), a))

while(i<iMax){
  i = i+1
  xnow = b - (f(b)*(b-a)) / (f(b)-f(a))
  
  if (abs(xnow-xold) < e){
    akar = xnow
    cat(sprintf("Akar : %f\n", akar))
    break
  }
  
  else {
    
    xold = xnow
    
    if((f(a)*f(xnow))>0){
      a = xnow
    }else{
      b = xnow
    }
  }
  cat(sprintf("iterasi : %d\tx0 : %f\tf(xn) : %f\txn : %f\txn-x0 : %f\n", i, xold, f(xnow), xnow, xnow-xold))
}
  
  
if (akar==0) {
  print("Akar belum ditemukan (T-T)")
}