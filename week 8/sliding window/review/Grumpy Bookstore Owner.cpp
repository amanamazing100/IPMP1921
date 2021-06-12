class Solution {
public:
    int maxSatisfied(vector<int>& cs, vector<int>& grumpy, int X) {
    auto satisfied = 0, m_add_satisfied = 0, add_satisfied = 0;
    for (auto i = 0; i < cs.size(); ++i) {
        satisfied += grumpy[i] ? 0 : cs[i];
        add_satisfied += grumpy[i] ? cs[i] : 0;
        if (i >= X) add_satisfied -= grumpy[i - X] ? cs[i - X] : 0;
        m_add_satisfied = max(m_add_satisfied, add_satisfied);
    }
    return satisfied + m_add_satisfied;
}
};
