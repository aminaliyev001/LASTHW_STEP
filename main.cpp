#include <iostream>
#include<list>
using namespace std;
class DateTime {
private:
    int day;
    int mon;
    int year;
public:
    DateTime(int d,int m, int y) {
        this->day = d;
        this->mon = m;
        this->year = y;
    }
    string to_string() const {
        return ::to_string(day) + "-" + ::to_string(mon) + "-" + ::to_string(year);
    }
    int getAge() const {
        return 2023 - year;
    }
    static DateTime Parse(const string& dateString) {
            int d, m, y;
            sscanf(dateString.c_str(), "%d %*c %d %*c %d", &m, &d, &y);
            return DateTime(d, m, y);
        }
};
class Debtor {
private:
    string FullName;
    DateTime BirthDay;
    string Phone;
    string Email;
    string Address;
    int debt;
public:
        Debtor(string fullname, string birthDay, string phone, string email, string address, int debt) : BirthDay(DateTime::Parse(birthDay)) {
        this->FullName = fullname;
        this->BirthDay = DateTime::Parse(birthDay);
        this->Phone = phone;
        this->Email = email;
        this->Address = address;
        this->debt = debt;
    }
    string getFullName() const { return FullName; }
    DateTime getBirthDay() const { return BirthDay; }
    string getPhone() const{ return Phone; }
    string getEmail() const { return Email; }
    string getAddress()const { return Address; }
    int getDebt() const { return debt; }
    string ToString() {
        return this->FullName + " " + this->BirthDay.to_string() + " " + this->Phone + " "+ this->Email + " " + this->Address + " " + to_string(this->debt);
    }
};

    list <Debtor> debtors = {
             Debtor("Shirley T. Qualls", "March 30, 1932", "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414),
             Debtor("Danielle W. Grier", ("October 18, 1953"), "321-473-4178", "DanielleWGrier@rhyta.com", "1973 Stoneybrook Road Maitland, FL 32751", 3599),
             Debtor("Connie W. Lemire", ("June 18, 1963"), "828-321-3751", "ConnieWLemire@rhyta.com", "2432 Hannah Street Andrews, NC 28901", 1219),
             Debtor("Coy K. Adams", ("March 1, 1976"), "410-347-1307", "CoyKAdams@dayrep.com", "2411 Blue Spruce Lane Baltimore, MD 21202", 3784),
             Debtor("Bernice J. Miles", ("June 1, 1988"), "912-307-6797", "BerniceJMiles@armyspy.com", "4971 Austin Avenue Savannah, GA 31401", 4060),
             Debtor("Bob L. Zambrano", ("February 28, 1990"), "706-446-1649", "BobLZambrano@armyspy.com", "2031 Limer Street Augusta, GA 30901", 6628),
             Debtor("Adam D. Bartlett", ("May 6, 1950"), "650-693-1758", "AdamDBartlett@rhyta.com", "2737 Rardin Drive San Jose, CA 95110", 5412),
             Debtor("Pablo M. Skinner", ("August 26, 1936"), "630-391-2034", "PabloMSkinner@armyspy.com", "16 Fraggle Drive Hickory Hills, IL 60457", 11097),
             Debtor("Dorothy J. Brown", ("July 9, 1971"), "270-456-3288", "DorothyJBrown@rhyta.com", "699 Harper Street Louisville, KY 40202", 7956),
             Debtor("Larry A. Miracle", ("May 22, 1998"), "301-621-3318", "LarryAMiracle@jourrapide.com", "2940 Adams Avenue Columbia, MD 21044", 7150),
             Debtor("Donna B. Maynard", ("January 26, 1944"), "520-297-0575", "DonnaBMaynard@teleworm.us", "4821 Elk Rd Little Tucson, AZ 85704", 2910),
             Debtor("Jessica J. Stoops", ("April 22, 1989"), "360-366-8101", "JessicaJStoops@dayrep.com", "2527 Terra Street Custer, WA 98240", 11805),
             Debtor("Audry M. Styles", ("February 7, 1937"), "978-773-4802", "AudryMStyles@jourrapide.com", "151 Christie Way Marlboro, MA 01752", 1001),
             Debtor("Violet R. Anguiano", ("November 4, 1958"), "585-340-7888", "VioletRAnguiano@dayrep.com", "1460 Walt Nuzum Farm Road Rochester, NY 14620", 9128),
             Debtor("Charles P. Segundo", ("October 21, 1970"), "415-367-3341", "CharlesPSegundo@dayrep.com", "1824 Roosevelt Street Fremont, CA 94539", 5648),
             Debtor("Paul H. Sturtz", ("September 15, 1944"), "336-376-1732", "PaulHSturtz@dayrep.com", "759 Havanna Street Saxapahaw, NC 27340", 10437),
             Debtor("Doris B. King", ("October 10, 1978"), "205-231-8973", "DorisBKing@rhyta.com", "3172 Bedford Street Birmingham, AL 35203", 7230),
             Debtor("Deanna J. Donofrio", ("April 16, 1983"), "952-842-7576", "DeannaJDonofrio@rhyta.com", "1972 Orchard Street Bloomington, MN 55437", 515),
             Debtor("Martin S. Malinowski", ("January 17, 1992"), "765-599-3523", "MartinSMalinowski@dayrep.com", "3749 Capitol Avenue  Castle, IN 47362", 1816),
             Debtor("Melissa R. Arner", ("May 24, 1974"), "530-508-7328", "MelissaRArner@armyspy.com", "922 Hill Croft Farm Road Sacramento, CA 95814", 5037),
             Debtor("Kelly G. Hoffman", ("September 22, 1969"), "505-876-8935", "KellyGHoffman@armyspy.com", "4738 Chapmans Lane Grants, NM 87020", 7755),
             Debtor("Doyle B. Short", ("June 15, 1986"), "989-221-4363", "DoyleBShort@teleworm.us", "124 Wood Street Saginaw, MI 48607", 11657),
             Debtor("Lorrie R. Gilmore", ("December 23, 1960"), "724-306-7138", "LorrieRGilmore@teleworm.us", "74 Pine Street Pittsburgh, PA 15222", 9693),
             Debtor("Lionel A. Cook", ("April 16, 1972"), "201-627-5962", "LionelACook@jourrapide.com", "29 Goldleaf Lane Red Bank, NJ 07701", 2712),
             Debtor("Charlene C. Burke", ("January 18, 1990"), "484-334-9729", "CharleneCBurke@armyspy.com", "4686 Renwick Drive Philadelphia, PA 19108", 4016),
             Debtor("Tommy M. Patton", ("June 30, 1981"), "774-571-6481", "TommyMPatton@rhyta.com", "748 Rockford Road Westborough, MA 01581", 349),
             Debtor("Kristin S. Bloomer", ("June 16, 1944"), "443-652-0734", "KristinSBloomer@dayrep.com", "15 Hewes Avenue Towson, MD 21204", 9824),
             Debtor("Daniel K. James", ("November 10, 1997"), "801-407-4693", "DanielKJames@rhyta.com", "3052 Walton Street Salt Lake City, UT 84104", 8215),
             Debtor("Paula D. Henry", ("September 6, 1976"), "618-378-5307", "PaulaDHenry@rhyta.com", "3575 Eagle Street Norris City, IL 62869", 5766),
             Debtor("Donna C. Sandoval", ("December 13, 1947"), "540-482-5463", "DonnaCSandoval@rhyta.com", "675 Jehovah Drive Martinsville, VA 24112", 8363),
             Debtor("Robert T. Taylor", ("August 17, 1932"), "270-596-6442", "RobertTTaylor@armyspy.com", "2812 Rowes Lane Paducah, KY 42001", 7785),
             Debtor("Donna W. Alamo", ("December 9, 1948"), "978-778-2533", "DonnaWAlamo@teleworm.us", "4367 Christie Way Marlboro, MA 01752", 10030),
             Debtor("Amy R. Parmer", ("May 19, 1995"), "480-883-4934", "AmyRParmer@armyspy.com", "85 Elmwood Avenue Chandler, AZ 85249", 5347),
             Debtor("ton K. Evans", ("October 8, 1986"), "303-207-9084", "tonKEvans@rhyta.com", "3552 Columbia Road Greenwood Village, CO 80111", 9838),
             Debtor("Kathleen C. Chaney", ("January 5, 1949"), "605-245-3513", "KathleenCChaney@rhyta.com", "316 Elsie Drive Fort Thompson, SD 57339", 1672),
             Debtor("Manuel C. Johnson", ("February 23, 1957"), "606-247-2659", "ManuelCJohnson@jourrapide.com", "4146 May Street Sharpsburg, KY 40374", 9195),
             Debtor("Carla A. Creagh", ("November 21, 1988"), "614-307-8974", "CarlaACreagh@dayrep.com", "3106 Bates Brothers Road Columbus, OH 43215", 11271),
             Debtor("Norma M. ", ("May 18, 1988"), "857-492-8703", "NormaM@jourrapide.com", "965 Metz Lane Woburn, MA 01801", 9761),
             Debtor("Roy D. Green", ("January 27, 1983"), "308-340-5981", "RoyDGreen@jourrapide.com", "401 Romrog Way Grand Island, NE 68801", 10771),
             Debtor("Cristy J. Jensen", ("November 2, 1935"), "440-626-9550", "CristyJJensen@jourrapide.com", "2177 Harley Vincent Drive Cleveland, OH 44113", 5205),
             Debtor("Nancy J. Fergerson", ("June 10, 1993"), "219-987-8498", "NancyJFergerson@dayrep.com", "3584 Jadewood Drive Demotte, IN 46310", 1276),
             Debtor("Dave N. Rodriguez", ("January 21, 1938"), "214-540-2499", "DaveNRodriguez@rhyta.com", "1890 Poco Mas Drive Dallas, TX 75247", 9132),
             Debtor("James E. Denning", ("May 4, 1988"), "504-289-8640", "JamesEDenning@jourrapide.com", "1444 Rose Avenue Metairie, LA 70001", 8176),
             Debtor("Richard M. Thomas", ("February 13, 1972"), "510-735-3359", "RichardMThomas@jourrapide.com", "4454 Green Avenue Oakland, CA 94609", 7875),
             Debtor("Lakisha R. Forrest", ("December 1, 1973"), "334-830-1181", "LakishaRForrest@armyspy.com", "3121 Quarry Drive Montgomery, AL 36117", 3088),
             Debtor("Pamela H. Beauchamp", ("November 20, 1959"), "801-559-6347", "PamelaHBeauchamp@jourrapide.com", "3239 Tori Lane Salt Lake City, UT 84104", 6588)
        };



//void Main() {

//    2) rhyta.com ve ya dayrep.com domenlerinde emaili olan borclulari cixartmag
//
//    3) Yashi 26-dan 36-ya qeder olan borclulari cixartmag
//
//    4) Borcu 5000-den cox olmayan borclularic cixartmag
//
//    5) Butov adi 18 simvoldan cox olan ve telefon nomresinde 2 ve ya 2-den cox 7 reqemi olan borclulari cixartmaq
//
//    7) Qishda anadan olan borclulari cixardmaq
//
//    8) Borcu, umumi borclarin orta borcunnan cox olan borclulari cixarmaq ve evvel familyaya gore sonra ise meblegin azalmagina gore sortirovka etmek
//
//    9) Telefon nomresinde 8 olmayan borclularin yalniz familyasin,yashin ve umumi borcun meblegin cixarmaq
//
//    11)Adinda ve familyasinda hec olmasa 3 eyni herf olan borclularin siyahisin cixarmaq ve onlari elifba sirasina gore sortirovka elemek
//
//    13)borclulardan en coxu hansi ilde dogulubsa hemin ili cixartmaq
//
//    14)Borcu en boyuk olan 5 borclunun siyahisini cixartmaq
//
//    15)Butun borcu olanlarin borcunu cemleyib umumi borcu cixartmaq
//
//    16)2ci dunya muharibesin gormush borclularin siyahisi cixartmaq
//
//    18)Nomresinde tekrar reqemler olmayan borclularin ve onlarin borcunun meblegin cixartmaq
//
//    19)Tesevvur edek ki,butun borclari olanlar bugunden etibaren her ay 500 azn pul odeyecekler. Oz ad gunune kimi borcun oduyub qurtara bilenlerin siyahisin cixartmaq
//
//    20)Adindaki ve familyasindaki herflerden "smile" sozunu yaza bileceyimiz borclularin siyahisini cixartmaq

//}
int main() {
    //2
    cout << "rhyta.com ve ya dayrep.com domenlerinde emaili olan borclular: " << endl;
    for (Debtor& debtor : debtors) {
            if (debtor.getEmail().find("@rhyta.com") != string::npos || debtor.getEmail().find("@dayrep.com") != string::npos) {
                cout << debtor.ToString() << endl;
            }
    }
    //3
    cout << "26-36 yas borclular:" << endl;
    for (Debtor& debtor : debtors) {
            if (debtor.getBirthDay().getAge() >= 26 && 36 >= debtor.getBirthDay().getAge()) {
                cout << debtor.ToString() << endl;
            }
    }
    cout << "5000-den cox olmuyan: " << endl;
    for (Debtor& debtor : debtors) {
            if (debtor.getDebt() <= 5000 ) {
                cout << debtor.ToString() << endl;
            }
    }
    return 0;
}
