// (a)

Book::Book(const Book& src) {
    char *temp;
    temp = new char[strlen(src.title) + 1]; // +1 for "\0"
    strcpy(temp, src.temp);
    title = temp;
    
    pages = src.pages;
}

// (b) compiler-created copy constructor

Book::Book(const Book& src) {
    title = src.title;
    pages = src.pages;
}
