#include <bits/stdc++.h>

using namespace std;
//calculates size of current room
int calculateFloorPlan(int row, int column, const vector<vector<int>> & grid, int RowMax, int ColumnMax, vector<vector<bool>> &visited_nodes){
    int size = 1;
    //creates queue to iterate through size of room
    queue<pair<int,int>> Queue;
    Queue.push({row,column});

    //vector so we dont revisit our nodes again
    
    visited_nodes[row][column]= true;

    int Directions[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};

    while (!Queue.empty()){
        pair<int,int> curr_cell = Queue.front();
        Queue.pop();
        for (int i = 0; i < 4; i++){
            int newRow = curr_cell.first + Directions[i][0];
            int newColumn = curr_cell.second + Directions[i][1];

            if (0<=newRow&&newRow<RowMax && 0<=newColumn&&newColumn<ColumnMax){
            if (visited_nodes[newRow][newColumn] == true) continue;
            if (grid[newRow][newColumn] == 1) continue;

            size++;
            visited_nodes[newRow][newColumn] = true;
            Queue.push({newRow , newColumn});
            

            }
            
           
    }

    }
    
    return size;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int NumTiles, rows, columns;
    cin >> NumTiles >> rows >> columns ;
    vector<vector<int>> grid(rows, vector<int>(columns));

    vector<vector<bool>> VisitedTiles(rows,vector<bool>(columns));

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            char c;
            cin >> c;
            if (c == 'I'){
                grid[i][j]=1;
            }
            else{
                grid[i][j]=0;
            }

        }
    }
    vector<int> rooms;
      for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (grid[i][j]!= 1 && VisitedTiles[i][j]==false){
                rooms.push_back(calculateFloorPlan(i,j,grid,rows,columns,VisitedTiles));
            }
         
        }
    }
    
    sort(rooms.begin(), rooms.end(), greater<int>());
    int cntr = 0;
    
    
    

    while(NumTiles > 0){
        
        if (cntr + 1 > rooms.size()){
            break;
        }

        else if (NumTiles - rooms[cntr] < 0){
            
            break;

        }

        NumTiles -= rooms[cntr];
        cntr++;
        }
 

   
    if (cntr == 1){
        cout << cntr << " room, " << NumTiles<<" square metre(s) left over (";
        

    }
    else{
    cout << cntr << " rooms, " << NumTiles<<" square metre(s) left over (";
    return 0;
    }
}