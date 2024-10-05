class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;
        //indexing
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;
        while(count<total){
            //print starting row
            for(int i=startcol;i<=endcol && count < total ;i++){ans.push_back(matrix[startrow][i]);count++;}
            startrow++;

            //print end col
            for(int i=startrow;i<=endrow && count < total ;i++){ans.push_back(matrix[i][endcol]);count++;}
            endcol--;

            //print endrow
            for(int i=endcol;i>=startcol && count < total ;i--){ans.push_back(matrix[endrow][i]);count++;}  
            endrow--;

            //print startcol
            for(int i=endrow;i>=startrow && count < total ;i--){ans.push_back(matrix[i][startcol]);count++;}  
            startcol++;




        }
        return ans;

    }
};
