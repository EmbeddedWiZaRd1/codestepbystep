float computeTax(float salary)
{
 
    int flatamount;
    float tax;
  if(salary>=0 && salary<7150 )
  {
      flatamount=0;
      tax=(flatamount+((salary-0)*(0.10)));
  }
  else if(salary>=7150 && salary<29050)
  {
   flatamount=715;
   tax=(flatamount+((salary-7150)*(0.15)));
  
  }
  else if(salary>=29050 && salary<70350)
  {
   flatamount=4000;
   tax=flatamount+((salary-29050)*(0.25));
  }
  else
  {
   flatamount=14325;
   tax=(flatamount+((salary-70350)*(0.28)));
   }
  return tax; 
}