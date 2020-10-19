/**
 * 
 * @description: Trie (Prefix Tree) implementation
 * 
 * @author: Lakshya Khera
 * 
 * */


#include<iostream>
#include<vector>
#define N 26
using namespace std;

struct TrieNode {
    vector<TrieNode*> *childrens;
    int endOfWord = false;
    TrieNode() {
        this->childrens = new vector<TrieNode*>(N, NULL);
    }
};

class Trie { 
    public:
        TrieNode* root;
        Trie() {
            this->root = new TrieNode();
        }
        void addWord(TrieNode* root,string s) {
            if(s.size() == 0) {
                root->endOfWord = true;
                return;
            }
            if((*(root->childrens))[s[0]-'a'] == NULL) {
                (*(root->childrens))[s[0]-'a'] = new TrieNode();
                addWord((*(root->childrens))[s[0]-'a'],s.substr(1));
            }
        }
        bool searchPrefix(TrieNode* root,string s ) {
            if(s.size() == 0) {
                for(int i =0;i<root->childrens->size();i++) {
                    if((*(root->childrens))[i] != NULL) return true;
                }
                return false;
            }
            if((*(root->childrens))[s[0]-'a']!=NULL) {
                return searchPrefix((*(root->childrens))[s[0]-'a'],s.substr(1));
            }
            return false;

        }

        bool searchWord(TrieNode* root,string s) {
            if(s.size() == 0) {
                return root->endOfWord;
            }
            if((*(root->childrens))[s[0]-'a']!=NULL) return searchWord((*(root->childrens))[s[0]-'a'],s.substr(1));
            return false;
        }

        bool searchPattern(TrieNode *root,string s) {
            if(s.size() == 0) {
                return root->endOfWord;
            }
            if(s[0] == '.') {
                for(int i =0;i<root->childrens->size();i++) {
                    if((*(root->childrens))[i]!=NULL && searchPattern((*(root->childrens))[i],s.substr(1))) return true;
                }
                return false;
            }
            if((*(root->childrens))[s[0]-'a']!=NULL) return searchPattern((*(root->childrens))[s[0]-'a'],s.substr(1));
            return false;
        }
};

int main() {
    Trie *root = new Trie();
    root->addWord(root->root,"apple");
    root->addWord(root->root,"banana");
    cout << root->searchWord(root->root,"app")<<endl;
    cout << root->searchWord(root->root,"apple")<<endl;
    cout << root->searchPrefix(root->root,"app")<<endl;
    cout << root->searchPattern(root->root,".ple")<<endl;


    return 0;
}