class Solution {
public:
	int maxAreaOfIsland(vector<vector<int>>& grid) {
		vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
		int maxi=0;
		for(int i=0; i<grid.size(); i++){
			for(int j=0; j<grid[0].size(); j++){
				if(!v[i][j] && grid[i][j]==1){
					v[i][j]=1;
					int cnt=1;
					queue<pair<int, int>>q;
					q.push({i, j});
					while(!q.empty()){
						int x=q.front().first, y=q.front().second;
						q.pop();
						if(x>0 && grid[x-1][y]==1 && !v[x-1][y]){
							cnt++;
							v[x-1][y]=1;
							q.push({x-1, y});
						}
						if(y>0 && grid[x][y-1]==1 && !v[x][y-1]){
							cnt++;
							v[x][y-1]=1;
							q.push({x, y-1});
						}
						if(x<grid.size()-1 && grid[x+1][y]==1 && !v[x+1][y]){
							cnt++;
							v[x+1][y]=1;
							q.push({x+1, y});
						}
						if(y<grid[0].size()-1 && grid[x][y+1]==1 && !v[x][y+1]){
							cnt++;
							v[x][y+1]=1;
							q.push({x, y+1});
						}
					}
					maxi=max(maxi, cnt);
				}
			}
		}
		return maxi;
	}
};