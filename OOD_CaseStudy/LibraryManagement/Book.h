#pragma once
#include <string>
#include <vector>

#include "Author.h"

class Book {
private:
    std::string m_ISBN;
    std::string m_title;
    std::string m_subject;
    std::string m_publisher;
    std::string m_language;
    int numberOfPages;
    std::vector<Author> m_authors;
};