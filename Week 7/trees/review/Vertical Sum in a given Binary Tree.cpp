void pop(Node *node, int hd,
                     map<int, int> &Map)
{
    if (node == NULL) return;
    pop(node->left, hd-1, Map);
    Map[hd] += node->data;
  pop(node->right, hd+1, Map);
}
  
void verticalSum(Node *root)
{
    map < int, int> Map;
    map < int, int> :: iterator it;
    pop(root, 0, Map);
   for (it = Map.begin(); it != Map.end(); ++it)
    {
        cout << it->first << ": "
             << it->second << endl;
    }
}
