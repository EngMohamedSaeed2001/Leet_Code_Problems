class MyCalendar {
private:
    int start;
    int end;
    vector<MyCalendar>calender;
public:
    MyCalendar() {
        this->start=0;
        this->end=0;
    }

    MyCalendar(int start, int anEnd) : start(start), end(anEnd) {}

    bool book(int start, int end) {
        MyCalendar obj(start,end);

        if (calender.empty()){
            calender.push_back(obj);
            return true;
        }

        for (int i = 0; i < calender.size(); ++i) {
            if((start>=calender.at(i).start &&start<calender.at(i).end)||(start<=calender.at(i).start &&end>=calender.at(i).end)||(end<calender.at(i).end&&end>calender.at(i).start))   {
                return false;
            }

        }


        calender.push_back(obj);
        return true;
    }
};
