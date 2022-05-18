#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

class Error {
public:
    virtual void what() = 0;
};

class OutOfRange_size :public Error {
protected:
    string msg;
public:
    OutOfRange_size() { msg = "Out of Range > size\n"; }
    void what() { cout << msg; }
};

class OutOfRange_0 :public Error {
protected:
    string msg;
public:
    OutOfRange_0() { msg = "Out of Range < 0\n"; }
    void what() { cout << msg; }
};

class NothingToDelete :public Error {
protected:
    string msg;
public:
    NothingToDelete() { msg = "Nothing to delete\n"; }
    void what() { cout << msg; }
};
class Container {
protected:
    struct List {
        int data;
        List* pointer = nullptr;
    };
    int size;
    List* beg = nullptr;
    List* end = nullptr;

public:
    Container() {
        beg = nullptr;
        end = nullptr;
    }
    Container(int n, ...) {
        size = n;
        for (int* ptr = &n; n > 0; n--) {
            List* node = new List;
            ++ptr;
            node->data = *(++ptr);
            if (beg != nullptr) {
                if (end != nullptr) {
                    end->pointer = node;
                    node->pointer = nullptr;
                    end = node;
                }
                else {
                    beg->pointer = node;
                    node->pointer = nullptr;
                    end = node;
                }
            }
            else {
                node->pointer = nullptr;
                beg = node;
            }

        }
    }
    ~Container() {
        List* current = beg;
        List* temp;
        while (current != nullptr) {
            temp = current->pointer;
            delete[] current;
            current = temp;
        }
        cout << endl << "Destructor\n";
    }



    friend ostream& operator<<(ostream& stream, Container& p) {
        List* current = p.first();
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->pointer;
        }
        return stream;
    }


    void push(int data) {
        ++size;
        List* node = new List;
        node->data = data;
        if (beg != nullptr) {
            if (end != nullptr) {
                end->pointer = node;
                node->pointer = nullptr;
                end = node;
            }
            else {
                beg->pointer = node;
                node->pointer = nullptr;
                end = node;
            }
        }
        else {
            node->pointer = nullptr;
            beg = node;
        }
    }

    void pop() {
        if (size == 0) {
            throw NothingToDelete();
        }
        else {
            --size;
            List* current = beg;
            while (current->pointer != nullptr) {
                cout << current->data << " ";
                current = current->pointer;
            }
            delete[] current->pointer;
            end = current;
        }
    }

    int operator()() {
        int count = 0;
        List* current = beg;
        while (current != nullptr) {
            ++count;
            current = current->pointer;
        }
        return count;
    }

    List* first() { return beg; }

    int operator[](int index) {
        List* temp = beg;
        if (index < 0) {
            throw OutOfRange_0();
        }
        if (index > size) {
            throw OutOfRange_size();
        }
        else {
            for (int i = 0; i < index && temp != nullptr; i++) {
                temp = temp->pointer;
            }

            return temp->data;
        }

    }
};

int main() {
    Container a(5, 1, 2, 3, 5, 4);
    Container b(1, 8);
    try {
        b.pop();
        b.pop();
        cout << a[3];
        cout << a[-1];
        //cout<<a[6];

    }
    catch (Error & e) {
        e.what();
    }
}

