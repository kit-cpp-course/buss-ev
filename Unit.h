//
//  Unit.h
//  working_with_directory
//
//  Created by Евгений Бусс on 12/01/2019.
//  Copyright © 2019 Евгений Бусс. All rights reserved.
//

#ifndef Unit_h
#define Unit_h
#include "header.h"
// Базовый абстрактный класс Unit
class Unit
{
    protected :
    string name;
    string str;
    string path;
    size_t str_size;
    size_t i;
    size_t snbeg;
    size_t fnbeg;
    unsigned long long size;
    public :
    //конструктор по умолчанию
    Unit();
    //функция, определяющая размер файла
    unsigned long long getsize (fstream &stream);
    //функция, возвращающая строку с именем и путем к файлу
    string get_pathname(fstream &stream);
    //функция, возвращающая имя файла
    string get_shortname(fstream &stream);
    //функция, возвращающая имя папки
    string get_foldername(fstream &stream);
    //функция, возвращающая путь к файлу
    string get_path(fstream &stream);
    //функция, выполняющая перемещение в архиве к следующему файлу
    void go_to_next (fstream & stream);
    //виртуальные функции, переопределенные в производных классах
    virtual void delete_(string name,string arch_name) = 0;
    virtual void extract_(string name,string arch_name) = 0;
    virtual void info (string name,string arch_name) = 0;
    //деструктор
    ~Unit();
};

#endif /* Unit_h */
