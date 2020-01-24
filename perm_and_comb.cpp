

#include<iostream>

using namespace std;



int permutation(int n,int r)

{
    if(r==0)
    {
        return 1;

    }
    else
    {
      return (n)*permutation(n-1,r-1);
    }


}




int combination(int n, int r)

{

      if(r==0)
    {
        return 1;

    }
    else
    {
      return ((n*1.0)/r)*combination(n-1,r-1);
    }



}




int main()

{
    int x=1;
    int p,c,n,r;
    cout<<"enter value of n and r \n";
    cin>>n>>r;
    try
    {
           if(r==0)
          {
             p=1;
            c=1;
     	  }
     	  else if(n<r)
     	  {
     	  	throw x;
		   }
       	  else if(n<0||r<0)
          {
              throw x;
          }
          else 
           { 
            p=permutation(n,r);
            c=combination(n,r);

           }
    cout<<"\n permutation = "<<p;
    
	cout<<"\n combination = "<<c;

   }
   catch(int a)
   {
       cout<<"\ninvalid";                
        
    }
     
      return 0;
      

}
