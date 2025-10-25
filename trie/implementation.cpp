#inclulde<iostream>
using namespace std;

class TrieNode {
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i=0;i<26;i++){
                children[i]= NULL;
            }

            isTerminal = false;
        }
};

class Trie{
    public:
    TrieNode* root;
    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length()==0){
            root->isTerminal =  true;
        }

        //assumption, word will be in caps

        int index = 


    }

    void insertWord(string word){
        insertUtil(root, word);
    }


}
class Trie{
    public:
    TrieNode* root;
    void insetUtil(TrieNode* root, string word){

    }

    void insertWord(string word){
        insertUtil(root, word);
    }
}




int main(){

}