 class segmentTree {
    public:
#define ll long long
        vector<ll> segTree;
        ll size;
        segmentTree() {}

        void build(vector<ll>& arr, ll start, ll end, ll index) {
            if (start == end) {
                segTree[index] = arr[start];
                return;
            }
            ll mid = start + (end - start) / 2;
            build(arr, start, mid, 2 * index + 1);
            build(arr, mid + 1, end, 2 * index + 2);

            segTree[index] = segTree[2 * index + 1] + segTree[2 * index + 2];
        }

        void update(ll start, ll end, ll index, ll pos, ll val) {
            if (start == end) {
                segTree[index] = val;
                return;
            }
            ll mid = start + (end - start) / 2;
            if (pos <= mid) {
                update(start, mid, 2 * index + 1, pos, val);
            } else {
                update(mid + 1, end, 2 * index + 2, pos, val);
            }
            segTree[index] = segTree[2 * index + 1] + segTree[2 * index + 2];
        }

        ll getSum(ll start, ll end, ll index, ll l, ll r) {
            if (l <= start && r >= end)
                return segTree[index];
            if (l > end || start > r)
                return 0;
            ll mid = start + (end - start) / 2;
            ll leftAns = getSum(start, mid, 2 * index + 1, l, r);
            ll rightAns = getSum(mid + 1, end, 2 * index + 2, l, r);
            return leftAns + rightAns;
        }

        void build(vector<ll>& arr) {
            size = arr.size();
            segTree.resize(4 * size, 0);
            build(arr, 0, size - 1, 0);
        }

        void update(ll pos, ll val) {
            update(0, size - 1, 0, pos, val);
        }

        ll getSum(ll l, ll r) {
            return getSum(0, size - 1, 0, l, r);
        }
    };
