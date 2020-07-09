#pragma once
#include <string>
#include <vector>
class Book {
private:
    std::string ISBN;
    std::string title;
    std::string subject;
    std::string publisher;
    std::string language;
    int numberOfPages;
    std::vector<Author> authors;
};