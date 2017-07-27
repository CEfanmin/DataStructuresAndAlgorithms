#ifndef LIBMAT_H
#define LIBMAT_H
using namespace std;

class LibMat{
public:
    LibMat(){
        std::cout << "LibMat::LibMat() default constructor!\n";
    }

    virtual ~LibMat(){
        std::cout << "LibMat::~LibMat() destructor!\n";
    }

    virtual void print() const{
        std::cout << "LibMat::print() -- I am a LibMat object!\n";
    }
};


class Book: public LibMat{
public:
    Book(const std::string& title, const std::string& author)
    : _title(title), _author(author){
    std::cout<< "Book::Book( " << _title
			 << ", " << _author << " )  constructor\n";
    }

    ~Book(){
        std::cout<<"Book::~Book() destructor!\n";
    }

    virtual void print() const{
        std::cout << "Book::print() -- I am a Book object!\n"
			 << "My title is: " << _title << '\n'
			 << "My author is: " << _author << endl;
    }

	const string& title() const { return _title; }
	const string& author() const { return _author; }
protected:
    string _title;
    string _author;
};

class AudioBook: public Book{
public:
    AudioBook( const string &title,
		       const string &author, const string &narrator )
		: Book( title, author ), _narrator( narrator ){
		cout << "AudioBook::AudioBook( " << _title
			 << ", " << _author
			 << ", " << _narrator
			 << " )  constructor\n";
	}

	~AudioBook(){
		std::cout << "AudioBook::~AudioBook() destructor!\n";
	}

	virtual void print() const {
		std::cout << "AudioBook::print() -- I am a AudioBook object!\n"
			 << "My title is: " << _title << '\n'
			 << "My author is: " << _author << '\n'
			 << "My narrator is: " << _narrator << endl;
	}

	const string& narrator() const { return _narrator; }

protected:
	string _narrator;

};

void print( const LibMat &mat )
{
	std::cout << "in global print(): about to print mat.print()\n";
	mat.print();
}

#endif // LIBMAT_H
