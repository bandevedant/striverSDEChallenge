class segmentTree
{
public:
#define ll long long
    vector<ll> segTree;
    ll size;
    segmentTree(){
    }

    // tc O(n) as in at each node the array breaks in two parts n+n/2+n/4...=O(2n)
    void build(vector<ll> &arr, ll start, ll end, ll index)
    {
        if (start == end)
        {
            segTree[index] = arr[start];
            return;
        }
        ll mid = start+(end-start) / 2;
        build(arr, start, mid, 2 * index);
        build(arr, mid + 1, end, 2 * index+1);

        segTree[index] = segTree[2 * index] + segTree[2 * index+1];
    }
    // tc: O(logn)
    void update(vector<ll> &arr, ll start, ll end, ll index, ll pos, ll val)
    {
        if (start == end)
        {
            arr[pos] = val;
            segTree[index] = arr[pos];
            return;
        }
       ll mid = start+(end-start) / 2;
        if (pos<=mid)
        {
            update(arr, start, mid,  2 * index, pos, val);
        }
        else
        {
            update(arr, mid + 1, end,  2 * index+1, pos, val);
        }
        segTree[index] = segTree[ 2 * index] + segTree[ 2 * index+1];
    }
    // tc: O(logn)
    ll getSum(ll start, ll end, ll index, ll l, ll r)
    {
        // overlapping  [l.....start....end.....r]
        if (l<=start && r >= end)
            return segTree[index];
        // disjoint
        if (l > end || start > r)
            return 0;
        ll mid = start+(end-start) / 2;
        ll leftAns = query(start, mid, 2 * index, l, r);
        ll rightAns = query(mid + 1, end, 2 * index + 1, l, r);
        // partial overlapp
        return leftAns + rightAns;
    }
    
     void build(vector<ll>&arr){
        size=arr.size();
        seg.resize(4*size,0);
        build(arr,0,size-1,0)
    }
    void update(ll pos,ll val){
        update(arr,0,size-1,0,pos,val);
    }
    void getSum(ll l ,ll r){
        return getSum(0,size-1,0,l,r);
    }
};
