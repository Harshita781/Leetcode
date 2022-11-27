class Solution {
public:
    vector<string> letterCasePermutation( string s ) {
        vector<string> result;
        combination( s, 0, result );
        return result;
    }
    
private:
    void combination( string s, int i, vector<string> &result ) {
        if( i == s.length() ) {
            result.push_back( s );
            return; 
        } 
        if( 'a' <= s[i] && s[i] <= 'z' ) { 
            combination( s, i + 1, result );
            s[i] = 'A' + s[i] - 'a';
            combination( s, i + 1, result );
        } else if ( 'A' <= s[i] && s[i] <= 'Z' ) { 
            combination( s, i + 1, result );
            s[i] = 'a' + s[i] - 'A';
            combination( s, i + 1, result );
        } else { 
            combination( s, i + 1, result );
        }
        
    }
};