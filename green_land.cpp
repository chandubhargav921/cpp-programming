class Solution{   
public:

 

    int water_flow(vector<vector<int>> &mat,int n,int m)

    {

        vector<vector<bool>> first(n,vector<bool> (m,false));

        queue<pair<int,int>> Q;

        for(int i=0;i<n;i++)

        {

            Q.push({i,0});

        }

        for(int j=0;j<m;j++)

        {

            Q.push({0,j});

        }

        

        while(Q.size()>0)

        {

            pair<int,int> p=Q.front();

            Q.pop();

            int i=p.first;

            int j=p.second;

            if(first[i][j]==true)

                continue;

            first[i][j]=true;

            if(i-1>=0 && mat[i-1][j]>=mat[i][j])

                Q.push({i-1,j});

            if(i+1<n && mat[i+1][j]>=mat[i][j])

                Q.push({i+1,j});

            if(j-1>=0 && mat[i][j-1]>=mat[i][j])

                Q.push({i,j-1});

            if(j+1<m && mat[i][j+1]>=mat[i][j])

                Q.push({i,j+1});

        }

        

        vector<vector<bool>> second(n,vector<bool> (m,false));

        for(int i=0;i<n;i++)

        {

            Q.push({i,m-1});

        }

        for(int j=0;j<m;j++)

        {

            Q.push({n-1,j});

        }

        

        while(Q.size()>0)

        {

            pair<int,int> p=Q.front();

            Q.pop();

            int i=p.first;

            int j=p.second;

            if(second[i][j]==true)

                continue;

            second[i][j]=true;

            if(i-1>=0 && mat[i-1][j]>=mat[i][j])

                Q.push({i-1,j});

            if(i+1<n && mat[i+1][j]>=mat[i][j])

                Q.push({i+1,j});

            if(j-1>=0 && mat[i][j-1]>=mat[i][j])

                Q.push({i,j-1});

            if(j+1<m && mat[i][j+1]>=mat[i][j])

                Q.push({i,j+1});

        }

        

        int ans=0;

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<m;j++)

            {

                if(first[i][j]&&second[i][j])

                    ans++;

            }

        }

        return ans;

    }
};