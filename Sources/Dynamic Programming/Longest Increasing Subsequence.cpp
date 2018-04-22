// Longest Increasing Subsequence without duplicates
set < int > s;
set < int > :: iterator it;
for(int i = 0 ; i < n ; i++){
    s.insert(a[i]);
    it = s.upper_bound(a[i]);
    if(it != s.end())s.erase(it);
}
// For including duplicates replace these two lines
multiset < int > s;
multiset < int > :: iterator it;
// For Longest Strictly Increasing Subsequence
multiset < int > s;
multiset < int > :: iterator it;
for(int i = 0 ; i < n ; i++){
    s.insert(a[i]);
    it = s.lower_bound(a[i]);
    it++;
    if(it != s.end())s.erase(it);
}