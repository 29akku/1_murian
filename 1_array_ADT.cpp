// This c++ program is about arrat ADT(ie some basic functionality of array are coded here)

#include<iostream>
using namespace std;
main()
{ int N,length=0,ch=1;
  char choice='y';
  cout<<"Enter the maximum size of array : ";
  cin>>N;
  int A[N];
  
  cout<<"Enter the no of integer you want to enter : ";
  cin>>length;
  
  for(int i=0;i<length;i++)
  cin>>A[i];
  
  for(int i=length;i<N;i++)
  A[i]=0;
cout<<"1.Display"<<endl<<"2.Add"<<endl<<"3.Delete "<<endl<<"4.Binary search"<<endl<<"5.Reverse array"<<endl<<"6.Left shift"<<endl<<"7.Right shift"<<endl<<"8.Left rotation"<<endl<<"9.Right rotation"<<endl<<"10.Get"<<endl<<"11.Set"<<endl<<"12.Sum"<<endl;
  
  while(choice=='y')
 { cout<<"select option: ";
   cin>>ch;
   switch(ch)
   {  case 1: for(int i=0;i<length;i++)
              cout<<A[i]<<" ";
              break;
              
	  case 2: int index,x,i;
	          cout<<"Enter the index and integer : ";
	          cin>>index>>x;
			  
			  if(index>=0 && index<length)
			  { for(i=length;i>=index;i--)
			  	 A[i+1]=A[i];
			  	   
				A[i+1]=x;
				length++;
		      }
		      else if(index==length && index<N)
		      { A[index]=x;
		        length++;
			  }
		      else
		      cout<<"Invalid index!";
		      
		      break;
	 
	 case 3: cout<<"Enter the index for deletion : ";
	         cin>>index;
	         
	         if(index>=0 && index<= length-1)
	         for(int i=index;i<length-1;i++)
			 A[i]=A[i+1]; 	
		     else
		     cout<<"Invalid index!";
			 
			 length--;
			 break; 
	
	 case 4: cout<<"Enter the integer to be searched : ";
	         cin>>x;	 
            
             int l,h,mid;
             l=0;
             h=length-1;
             
			 while(l<=h)
            {
			   mid=(l+h)/2;                
			 if(x==A[mid])
			 { cout<<x<<" Found at "<<mid<<" index.";
			   break; 
		     }
			 else if(x>A[mid])
			 l=mid+1;
			 else 
             h=mid-1;
            
            }
            
             break;
     case 5: cout<<"Reverse array"<<endl;
             int j;
             for(i=0,j=length-1;i<j;j--,i++)
             { int temp=A[i];
               A[i]=A[j];
               A[j]=temp;
			 }
	         break;
     case 6: cout<<"Left shit"<<endl;
	         
			 for(i=0;i<length-1;i++)
             A[i]=A[i+1];
            
             A[i]=0;
             
			 break; 			         
     case 7: cout<<"Right shit"<<endl;
	         
			 for(i=length-1;i>-1;i--)
              A[i+1]=A[i];
		     
			 A[0]=0;		 
          
			 break;

     case 8: cout<<"Left rotation"<<endl;
	         
	         j=A[0];
	         for(i=0;i<length-1;i++)
             A[i]=A[i+1];
               
			              
             A[N-1]=j;
             
			 break;

     case 9: cout<<"Right rotation"<<endl;
	         
	         j=A[N-1];
			 for(i=length-1;i>-1;i--)
              A[i+1]=A[i];
		     
			 A[0]=j;		 
          
			 break;
			 
	 case 10: cout<<"Enter the index to fetch integer : ";
	          cin>>index;
			  if(index>=0 && index<length)
			  cout<<"Data at "<<index<<" : "<<A[index];
              else
              cout<<"Invalid index!";
              
			  break;
              
	 case 11: cout<<"Enter the index & integer to set data : ";
	          cin>>index>>x;
	          
	          if(index>=0 && index<length)
	          A[index]=x;
              else
              cout<<"Invalid index!";

	          break;
	          
     case 12: int n=0;
	          for(i=0;i<length;i++)
			  n+=A[i];
			  
			  cout<<"Sum of all element : "<<n;
			           
			   break;    		 
    
	//default: cout<<"Invalid input!"<<endl; 
				        
   }
   cout<<endl<<"Press 'y' to continue else press other char) : ";
   cin>>choice;
 }
   


}
