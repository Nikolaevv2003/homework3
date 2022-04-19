#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
void output_what(std::ostream& _out, std::istream& _in, bool (*cmp)(int), const char* spl);

bool pred_num(int c) { return (c >= '0' && c <= '9'); }

int main(void) {
    char s[] = "1-UML (200), 3, [2012], 97 AppleTalk-40";
    std::istringstream sp(s);
    //для примера ввод из строки
    output_what(std::cout, sp, &pred_num, " ");
    std::cout << std::endl;

    //создадим файл
    char fn[] = "file.txt";
    std::ofstream fout(fn);
    fout << "1 _2_ 3 4 5 6 (7) 8 x9y Actor 777";
    fout.close();

    std::ifstream fin(fn);
    //ввод из файла
    output_what(std::cout, fin, &pred_num, " ");
    fin.close();
    std::cin.get();
    return 0;
}

//ввод/вывод
void output_what(std::ostream& _out, std::istream& _in, bool (*cmp)(int), const char* spl) {
    std::string s;
    std::istreambuf_iterator<char> i(_in), e;

    for (; i != e; ++i) {
        if ((*cmp)(*i))
            s += *i;
        else if (!s.empty()) {
            _out << s << spl;
            s = "";
        }
    }

    if (!s.empty())
        _out << s << spl;
}