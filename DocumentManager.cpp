#include "Document.h"
#include "DocumentManager.h"
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit) {
    if (documents.find(name)==documents.end()){
        Document doc;
        doc.name = name;
        doc.id= id;
        doc.license_limit = license_limit;
        doc.borrowed_count = 0;
        documents[name] = doc;
    }
}

void DocumentManager::addPatron(int patronID) {
    patrons.push_back(patronID);
}

int DocumentManager::search(string name) {
    if (documents.find(name)!=documents.end()){
        return documents[name].id;
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    for (auto& pair : documents) {
        Document& doc = pair.second;
        if (doc.id == docid) {
            if (doc.borrowed_count < doc.license_limit) {
                doc.borrowed_count++;
                return true;
            }
        }
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    for (auto& pair : documents) {
        Document& doc = pair.second;
        if (doc.id == docid) {
            if (doc.borrowed_count > 0) {
                doc.borrowed_count--;
            }
            break;
        }
    }
}
