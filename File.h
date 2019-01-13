//
//  File.h
//  working_with_directory
//
//  Created by Евгений Бусс on 12/12/2018.
//  Copyright © 2019 Евгений Бусс. All rights reserved.
//

#ifndef File_h
#define File_h
#include "header.h"
#include "Unit.h"
class File : public Unit
{
    bool flag;
    int temp;
    char sym;
    fstream stream;
    fstream tmp;
    public :
    //конструктор по умолчанию
    File();
    //деструктор
    ~File();
    //функция, выводящая в консоль информацию о файле
    void info(string name,string arch_name);
    //функция добавления файла в архив
    void add_(string name,string arch_name);
    //функция удаления файла из архива
    void delete_(string name,string arch_name);
    //функция извлечения файла из архива
    void extract_(string name,string arch_name);
};
#endif /* File_h */
