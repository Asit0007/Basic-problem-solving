var n = 1;
while (n<=100) {
      var output ="";
      if (n%3==0) output+"fizz";
      if (n%5==0) output+="buzz";
      console.log(output||n);
      n++;
}