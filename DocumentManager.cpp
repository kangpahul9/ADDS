#include "DocumentManager.h"

#include <iostream>
#include <unordered_set>
#include <unordered_map>

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Docs[id] = {name, license_limit};
    total[id] = 0;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    for (const auto& pair : Docs) {
        if (pair.second.first == name) {
            return pair.first;
        }
    }

    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false;
    }

    auto document = Docs.find(docid);

    if (document == Docs.end()) {
        return false;
    }

    if (total[docid] >= document->second.second) {
        return false;
    }

    total[docid]++;
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (Docs.find(docid) != Docs.end() && patrons.find(patronID) != patrons.end() && total[docid] > 0) {
        total[docid]--;
    }
}