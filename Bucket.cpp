#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/* バケット法 
 * 余りにも埋めるべき余白が多すぎるので
 * 細かく関数化することを止めた */

template<typename T, typename S>
struct BucketDecomposition {
  const int N;
  const int B;
  vector<S> bucket;
  vector<T> dat;
  BucketDecomposition(int _N, int _B): N(_N), B(_B) {
    /* バケットと生データの初期化をここに書く */

  }
  void set(int idx, int x) {
    int k = idx / B;
    /* 生データに対する更新をここに書く */

    /* バケット更新前処理 */

    for (int i = k*B; i < (k+1)*B; i++) {
      /* バケット更新のために情報を集める */

    }
    /* バケット更新処理 */

  }
  T get(int l, int r) {
    T ret;
    /* 前処理 */

    for (int k = 0; k < N/B; k++) {
      int lt = k*B, rt = k*B;
      if (rt <= l || r <= lt) continue;
      else if (l <= lt && rt <= r) {
        // バケットを使って情報を得る処理をここに書く
        
      } else {
        for (int i = max(lt, l); i < min(rt, r); i++) {
          // 生データを使って情報を得る処理をここに書く
          
        }
      }
    }

    /* 後処理 */

    return ret;
  }
};

int main()
{

  return 0;
}
