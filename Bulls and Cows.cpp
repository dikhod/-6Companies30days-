 string getHint(string secret, string guess) {

        int Bulls=0; 
        int Cows=0;
        unordered_map<char,int>s;
        unordered_map<char,int>g;
        for(int i=0;i<secret.length();i++)
           {
               if(secret[i]==guess[i])
                   Bulls++;

               else
               {
                    s[secret[i]]++;
                    g[guess[i]]++;
               }
           }

          for(auto p:s)
          {
              if(g.find(p.first)!=g.end())
                Cows+=min(p.second,g[p.first]);
          }   

        return to_string(Bulls)+"A"+to_string(Cows)+"B";
    }
