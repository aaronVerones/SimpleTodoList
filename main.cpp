#include <iostream>
#include <deque>

using namespace std;

int main() {
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;

    deque<string> d;
    string command;

    while (true) {

        cout << endl;
        cout << ">> There are " << d.size() << " items in your to-do list." << endl;
        cout << ">> Enter a command. You can enter 'add', 'next' 'remove', 'list' or 'quit.'" << endl;
        cout << endl;
        cin >> command;

        if (command == "quit") return 0;

        if (command == "remove") {
            if (d.size() > 0) {
                cout << endl;
                cout << ">> Good job! The next item on your list is " << d.front() << endl;
                d.pop_front();
            } else {
                cout << endl;
                cout << " >> Nothing to remove" << endl;
            }
        }

        if (command == "next") cout << ">> The next item on your list is " << d.front() << endl;

        if (command == "add") {
            string item;
            cout << endl;
            cout << ">> add an item." << endl;
            cin >> item;
            d.push_front(item);
        }

        if (command == "list") {
            cout << endl;
            if (d.empty()) cout << ">> Your list is empty" << endl;
            else {
                cout << "Your list:" << endl;
                for (unsigned int i = d.size(); i > 0; i--)
                    cout << d[i - 1] << endl;  // avoids unsigned int issue
            }

        }
    }
}
