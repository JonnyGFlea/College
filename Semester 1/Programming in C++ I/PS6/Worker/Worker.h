#ifndef _WORKER_H
#define _WORKER_H

class Worker {
    private:
        int number;
        std::string name;

    public:
        Worker(int, const std::string);
        friend std::ostream& operator << (std::ostream&, const Worker&);
};
#endif // _WORKER_H
