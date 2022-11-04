class Solution {
public:

 bool isvowel(int s)
 {

   if( (s=='a' || s=='e' || s=='i' || s=='u' || s=='o' || s=='A' || s=='E' || s=='I' || s=='U' || s=='O'  ))
   {
       return true;
   }

   return false;

 }
    string reverseVowels(string s) {
        
        int l=0;
        int r =s.length()-1;

        while(l<=r)
        {
            if(isvowel(s[l]))
            {
                if(isvowel(s[r]))
                {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }

                else{


                    r--;

                }
            }

            else if(isvowel(s[r]))
            {

                 if(isvowel(s[l]))
                {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }

                else{


                    l++;

                }



            }

            else{

                l++;
                r--;
            }

            

        }

        return s;
        
    }
};