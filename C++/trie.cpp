# include <iostream>
using namespace std;
class Trie_node
{
public:
    Trie_node* children[26];
    bool endOf_word;

    Trie_node()
    {
        endOf_word = false;
        for (int i=0; i<26; i++)
            this->children[i] = NULL;
    }
};

class Trie
{
    Trie_node* root;// = new Trie_node();
public:
    Trie()
    {
        root = new Trie_node();
    }
public:
    void insrt(string key)
    {
        Trie_node* ptr = root;
        for(int i = 0; i < key.length(); i++)
        {
            int index = key[i] - 'a';
            if (!ptr->children[index])
                ptr->children[index] = new Trie_node();

            ptr = ptr->children[index];     
        }

        ptr->endOf_word = true;
    }

    bool search(string key)
    {
        Trie_node* ptr = root;
        for(int i = 0; i < key.length(); i++)
        {
            int index = key[i] - 'a';
            if (!ptr->children[index])
                return false;

            ptr = ptr->children[index];   
        }
        return (ptr && ptr->endOf_word);
    }
};

int main()
{
    string keys[] = {"key", "the", "abhishek", "my", "hello"
                     "code", "vscode", "codeblocks"};
    int n = sizeof(keys) / sizeof(keys[0]);
    
    Trie obj ;

    for (int i = 0; i < n; i++)
        obj.insrt(keys[i]);

    obj.search("abhishek") ? cout << endl << "found\n" :
                             cout << endl << "not found\n";                    
    return 0;
}

