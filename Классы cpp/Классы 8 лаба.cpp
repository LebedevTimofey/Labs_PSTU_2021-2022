﻿#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

class Object;
class Magazin;
class PRINT;
class Vector;
class Dialog;
struct TEvent;
//enum COMMAND;

class Object
{
public:
    virtual void show() = 0;
    virtual void input() = 0;
    virtual string get_name() = 0;
};

class PRINT : public Object
{
public:
    PRINT() { publisher_name = author_name = "NULL"; };
    void show() override;
    void input() override;
    void set_publisher_name(string);
    void set_author_name(string);
    PRINT(string publisher_name, string author_name)
    {
        this->publisher_name = publisher_name;
        this->author_name = author_name;
    }
    string get_name() override { return author_name; }
    string get_publisher_name() { return publisher_name; }
protected:
    string author_name;
    string publisher_name;
};

void PRINT::show()
{
    cout << "Author: " << author_name << "\nPublisher name: " << publisher_name;
}
void PRINT::input()
{
    while (cin.get() != '\n');
    cout << "Enter author: "; getline(cin, author_name);
    cout << "Enter publisher name: "; getline(cin, publisher_name);
}
void PRINT::set_publisher_name(string data)
{
    this->publisher_name = data;
}
void PRINT::set_author_name(string data)
{
    this->author_name = data;
}

class Magazin : public PRINT
{
public:
    void show() override;
    void input() override;
    int get_pages_count() { return pages_count; }
    void set_pages_count(int data) { pages_count = data; }
protected:
    int pages_count;
};

void Magazin::show()
{
    cout << "Magazin: " << pages_count << " pages";
}

void Magazin::input()
{
    while (cin.get() != '\n');
    cout << "Enter pages count: "; cin >> pages_count;
}

class Vector
{
public:
    Vector() { count_of_objects = capacity = 0; beg = nullptr; }
    void add_object();
    void delete_object();
    void get_name();
    void get_index(int);
    void show();
    int operator()() { return count_of_objects; }
protected:
    Object** beg;
    int capacity;
    int count_of_objects;
};

void Vector::add_object()
{
    int type;
    do
    {
        cout << "\n1.Print\n2.Magazin\nChoose type of object: "; cin >> type;
    } while (type > 2 || type < 1);
    if (type == 1)
    {
        PRINT* object = new PRINT;
        object->input();
        if (count_of_objects < capacity)
        {
            beg[count_of_objects] = object;
            count_of_objects++;
        }
    }
    else
    {
        Magazin* object = new Magazin;
        object->input();
        if (count_of_objects < capacity)
        {
            beg[count_of_objects] = object;
            count_of_objects++;
        }
    }
}
void Vector::delete_object()
{
    if (count_of_objects == 0) return;
    vector<Object*> vect;
    for (int i = 0; i < count_of_objects; i++)
    {
        vect.push_back(beg[i]);
    }
    int number = 0;
    cout << endl;
    for (auto obj : vect)
    {
        cout << number + 1 << ") " << obj->get_name() << "\n";
        number++;
    }
    cout << "\nChoose the number of object to delete: ";
    int number_to_delete;
    cin >> number_to_delete;
    for (int i = number_to_delete - 1; i < count_of_objects; i++)
    {
        beg[i] = beg[i + 1];
    }
    count_of_objects--;
}

void Vector::get_name()
{
    Object** current = beg;
    cout << endl;
    for (int i = 0; i < count_of_objects; i++)
    {
        (*current)->show();
        if (count_of_objects == (i + 1))
        {
            cout << "\n";
        }
        else
        {
            cout << "\n\n";
        }
        current++;
    }
}
void Vector::show()
{
    if (count_of_objects != 0)
    {
        Object** current = beg;
        cout << endl;
        for (int i = 0; i < count_of_objects; i++)
        {
            (*current)->show();
            if (count_of_objects == (i + 1))
            {
                cout << "\n";
            }
            else
            {
                cout << "\n\n";
            }
            current++;
        }
    }
    else
    {
        cout << "Capacity of the group is zero (or objects hasn't been added). Required option denied.\n";
    }
}
void Vector::get_index(int index) {
    Object** current = beg;
    cout << endl;
    for (int i = 0; i < index; i++)
    {
        current++;
    }
    cout << (*current)->get_name();

}
enum COMMAND
{
    EVENT_NOTHING,
    EVENT_MESSAGE,
    COMMAND_ADD,        // +
    COMMAND_DELETE,     // -
    COMMAND_GET,        // z
    COMMAND_SHOW,       // s
    COMMAND_MAKE,       // m
    COMMAND_QUIT        // q
};

struct TEvent
{
    int what;
    int command;
    int index;
};

class Dialog : public Vector
{
    int end_state;
public:
    void get_event(TEvent&);
    void handle_event(TEvent&);
    void clear_event(TEvent&);
    bool valid();
    void execute();
    void end_execute();
};

void Dialog::handle_event(TEvent& event)
{
    if (event.what == COMMAND::EVENT_MESSAGE)
    {
        switch (event.command)
        {

        case COMMAND::COMMAND_ADD:
            add_object();
            clear_event(event);
            break;
        case COMMAND::COMMAND_DELETE:
            delete_object();
            clear_event(event);
            break;
        case COMMAND::COMMAND_GET:
            get_index(event.index);
            clear_event(event);
            break;
        case COMMAND::COMMAND_SHOW:
            show();
            clear_event(event);
            break;
        case COMMAND::COMMAND_MAKE:
            cout << "\nEnter size: "; cin >> capacity;
            cout << "Group for " << capacity << " objects has just created. Now you can add objects -> select the desired option.\n";
            beg = new Object * [capacity];
            count_of_objects = 0;
            clear_event(event);
            break;
        case COMMAND::COMMAND_QUIT:
            end_execute();
            clear_event(event);
            break;
        }
    }
}
void Dialog::get_event(TEvent& event)
{
    const string options = "m+-szq";
    string input;
    cout << "\n>";
    cin >> input;
    char decision = input[0];

    int in;
    if (decision == 'z') {
        char index = input[1];
        in = stoi(&index);
    }
    if (options.find(decision) >= 0)
    {
        event.what = COMMAND::EVENT_MESSAGE;
        switch (decision)
        {
        case 'm':
            event.command = COMMAND::COMMAND_MAKE;
            break;
        case '+':
            event.command = COMMAND::COMMAND_ADD;
            break;
        case '-':
            event.command = COMMAND::COMMAND_DELETE;
            break;
        case 's':
            event.command = COMMAND::COMMAND_SHOW;
            break;
        case 'z':
            event.command = COMMAND::COMMAND_GET;
            event.index = in;
            break;
        case 'q':
            event.command = COMMAND::COMMAND_QUIT;
            break;
        }
    }
    else
    {
        event.what = COMMAND::EVENT_NOTHING;
    }
}
void Dialog::execute()
{
    TEvent event;
    do
    {
        end_state = 0;
        get_event(event);
        handle_event(event);
    } while (valid());
}
void Dialog::clear_event(TEvent& event)
{
    event.what = COMMAND::EVENT_NOTHING;
}
void Dialog::end_execute()
{
    end_state = 1;
}
bool Dialog::valid()
{
    return end_state == 0;
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    system("cls");
    cout << "________MENU________\nm: create group     |\n+: add information  |\n-: delete object    |\ns: show objects     |\nz: objects' names   |\nq: quit             |\n____________________|";
    Dialog dialog;
    dialog.execute();
    SetConsoleCP(866);
    return 0;
}
