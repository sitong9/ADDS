#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
class Document{
    friend class DocumentManager;
    private:
    std::string name;
    int id;
    int license_limit;
    int borrowed_count;
};

#endif