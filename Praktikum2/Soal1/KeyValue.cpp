#include <bits/stdc++.h>
using namespace std;

template<class T1, class T2>
class KeyValue {
  private:
    T1 keys[100];
    T2 values[100];
    int size = 0;
  public:
    void set(T1 key, T2 value) {
      if (size == 10) {
        cout << "KeyValue penuh! Tidak bisa menambahkan KeyValue lagi." << endl;
        return;
      }

      for (int i = 0; i < size; i++) {
        if (keys[i] == key) {
          values[i] = value;
          return;
        }
      }

      keys[size] = key;
      values[size] = value;
      size++;
    }

    void display(T1 key) {
      for (int i = 0; i < size; i++) {
        if (keys[i] == key) {
          cout << values[i] << endl;
          return;
        }
      }
      cout << "Key tidak ditemukan!" << endl;
    }
};

template <class T2>
class KeyValue<double, T2> {
  private:
    double keys[100];
    T2 values[100];
    int size = 0;
  public:
    void set(double key, T2 value) {
      if (size == 10) {
        cout << "KeyValue penuh! Tidak bisa menambahkan KeyValue lagi." << endl;
        return;
      }

      for (int i = 0; i < size; i++) {
        if (abs(keys[i] - key) < 0.01) {
          values[i] = value;
          return;
        }
      }

      keys[size] = key;
      values[size] = value;
      size++;
    }

    void display(double key) {
      for (int i = 0; i < size; i++) {
        if (abs(keys[i] - key) < 0.01) {
          cout << values[i] << endl;
          return;
        }
      }
      cout << "Key tidak ditemukan!" << endl;
    }
};

// int main() {
//   KeyValue<int, string> kv;
//   kv.set(1, "Alice");
//   kv.set(2, "Bob");
//   kv.set(3, "Charlie");
//   kv.display(1); // Output: "Alice"
//   kv.display(2); // Output: "Bob"
//   kv.display(3); // Output: "Charlie"
// }