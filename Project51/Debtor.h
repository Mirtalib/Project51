#pragma once


namespace HearderFiles {


    struct Date
    {
    private:
        int _day;
        int _month;
        int _year;
    public:
        Date() = default;
        Date(int month , int day , int year){
            _day = day;
            _month = month;
            _year = year;
        }

        int getYear() { return _year; }
        int getDay() { return _day; }
        int getMonth() { return _month; }

        friend ostream& operator<<(ostream& output, Date s);
    };

    ostream& operator<<(ostream& output, Date s) {

        output << s._day << '.' << s._month << '.' << s._year;

        return output;
    }


    class Debtor {
    private:
        string FullName;
        Date BirthDay;
        string Phone;
        string Email;
        string Address;
        int Debt;

    public:
        Debtor() = default;
        Debtor(string fullname, Date birthDay, string phone, string email, string address, int debt) {
            FullName = fullname;
            BirthDay = birthDay;
            Phone = phone;
            Email = email;
            Address = address;
            Debt = debt;
        }

        string getFullName() { return FullName; }
        int BirthDayGetDay() { return BirthDay.getDay(); }
        int BirthDayGetYear() { return BirthDay.getYear(); }
        int BirthDayGetMonth() { return BirthDay.getMonth(); }
        string getPhone() { return Phone; }
        string getEmail() { return Email; }
        string getAddress() { return Address; }
        int getDebt() { return Debt; }

        friend ostream& operator<<(ostream& output, Debtor s);
    };

    ostream& operator<<(ostream& output, Debtor s) {

        output << "Name=> " << s.FullName << endl
            << "Phone=>" << s.Phone << endl
            << "Brith Day=>" << s.BirthDay << endl
            << "Email=>" << s.Email << endl
            << "Adress=>" << s.Address << endl
            << "Debt=>" << s.Debt << endl << endl;

        return output;
    }

}