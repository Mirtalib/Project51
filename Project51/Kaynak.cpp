#include<iostream>
#include<vector>
#include<list>
#include <algorithm>
using namespace std;

#include"Debtor.h"

using namespace HearderFiles;



bool DebtorsSortDebt(Debtor*& s1 , Debtor*& s2)
{
    return s1->getDebt() > s2->getDebt();
}


int main() {


    

    list<Debtor*> debtors;

    new Date(10, 12, 43);
    
    debtors.push_back(new Debtor("Shirley T. Qualls",  Date(3 ,30, 1932), "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414));
    debtors.push_back(new Debtor("Danielle W. Grier", Date(10 ,18, 1953), "321-473-4178", "DanielleWGrier@rhyta.com", "1973 Stoneybrook Road Maitland, FL 32751", 3599));
    debtors.push_back(new Debtor("Connie W. Lemire",  Date(6 ,18, 1963), "828-321-3751", "ConnieWLemire@rhyta.com", "2432 Hannah Street Andrews, NC 28901", 1219));
    debtors.push_back(new Debtor("Coy K. Adams",  Date(3,1, 1976), "410-347-1307", "CoyKAdams@dayrep.com", "2411 Blue Spruce Lane Baltimore, MD 21202", 3784));
    debtors.push_back(new Debtor("Bernice J. Miles",  Date(6,1, 1988), "912-307-6797", "BerniceJMiles@armyspy.com", "4971 Austin Avenue Savannah, GA 31401", 4060));
    debtors.push_back(new Debtor("Bob L. Zambrano",  Date(2, 28, 1990), "706 - 446 - 1649", "BobLZambrano@armyspy.com", "2031 Limer Street Augusta, GA 30901", 6628));
    debtors.push_back(new Debtor("Adam D. Bartlett",  Date(5, 6, 1950), "650-693-1758", "AdamDBartlett@rhyta.com", "2737 Rardin Drive San Jose, CA 95110", 5412));
    debtors.push_back(new Debtor("Pablo M. Skinner",  Date(8, 26, 1936), "630-391-2034", "PabloMSkinner@armyspy.com", "16 Fraggle Drive Hickory Hills, IL 60457", 11097));
    debtors.push_back(new Debtor("Dorothy J. Brown",  Date(7,9, 1971), "270-456-3288", "DorothyJBrown@rhyta.com", "699 Harper Street Louisville, KY 40202", 7956));
    debtors.push_back(new Debtor("Larry A. Miracle",  Date(5,22, 1998), "301-621-3318", "LarryAMiracle@jourrapide.com", "2940 Adams Avenue Columbia, MD 21044", 7150));
    debtors.push_back(new Debtor("Donna B. Maynard",  Date(1, 26, 1944), "520-297-0575", "DonnaBMaynard@teleworm.us", "4821 Elk Rd Little Tucson, AZ 85704", 2910));
    debtors.push_back(new Debtor("Jessica J. Stoops",  Date(4, 22, 1989), "360-366-8101", "JessicaJStoops@dayrep.com", "2527 Terra Street Custer, WA 98240", 11805));
    debtors.push_back(new Debtor("Audry M. Styles",  Date(3 ,7, 1937), "978-773-4802", "AudryMStyles@jourrapide.com", "151 Christie Way Marlboro, MA 01752", 1001));
    debtors.push_back(new Debtor("Violet R. Anguiano",  Date(11, 4, 1958), "585-340-7888", "VioletRAnguiano@dayrep.com", "1460 Walt Nuzum Farm Road Rochester, NY 14620", 9128));
    debtors.push_back(new Debtor("Charles P. Segundo",  Date(10, 21, 1970), "415-367-3341", "CharlesPSegundo@dayrep.com", "1824 Roosevelt Street Fremont, CA 94539", 5648));
    debtors.push_back(new Debtor("Paul H. Sturtz",  Date(9 ,15, 1944), "336-376-1732", "PaulHSturtz@dayrep.com", "759 Havanna Street Saxapahaw, NC 27340", 10437));
    debtors.push_back(new Debtor("Doris B. King",  Date(10, 10, 1978), "205-231-8973", "DorisBKing@rhyta.com", "3172 Bedford Street Birmingham, AL 35203", 7230));
    debtors.push_back(new Debtor("Deanna J. Donofrio",  Date(3,16, 1983), "952-842-7576", "DeannaJDonofrio@rhyta.com", "1972 Orchard Street Bloomington, MN 55437", 515));
    debtors.push_back(new Debtor("Martin S. Malinowski",  Date(1, 17, 1992), "765-599-3523", "MartinSMalinowski@dayrep.com", "3749 Capitol Avenue New Castle, IN 47362", 1816));
    debtors.push_back(new Debtor("Melissa R. Arner",  Date(5, 24, 1974), "530-508-7328", "MelissaRArner@armyspy.com", "922 Hill Croft Farm Road Sacramento, CA 95814", 5037));
    debtors.push_back(new Debtor("Kelly G. Hoffman", Date(9, 22, 1969), "505-876-8935", "KellyGHoffman@armyspy.com", "4738 Chapmans Lane Grants, NM 87020", 7755));
    debtors.push_back(new Debtor("Doyle B. Short", Date(6,15, 1986), "989-221-4363", "DoyleBShort@teleworm.us", "124 Wood Street Saginaw, MI 48607", 11657));
    debtors.push_back(new Debtor("Lorrie R. Gilmore", Date(12, 23, 1960), "724-306-7138", "LorrieRGilmore@teleworm.us", "74 Pine Street Pittsburgh, PA 15222", 9693));
    debtors.push_back(new Debtor("Lionel A. Cook", Date(3 ,16, 1972), "201-627-5962", "LionelACook@jourrapide.com", "29 Goldleaf Lane Red Bank, NJ 07701", 2712));
    debtors.push_back(new Debtor("Charlene C. Burke", Date(1, 18, 1990), "484-334-9729", "CharleneCBurke@armyspy.com", "4686 Renwick Drive Philadelphia, PA 19108", 4016));
    debtors.push_back(new Debtor("Tommy M. Patton", Date(6, 30, 1981), "774-571-6481", "TommyMPatton@rhyta.com", "748 Rockford Road Westborough, MA 01581", 349));
    debtors.push_back(new Debtor("Kristin S. Bloomer", Date(6, 16, 1944), "443-652-0734", "KristinSBloomer@dayrep.com", "15 Hewes Avenue Towson, MD 21204", 9824));
    debtors.push_back(new Debtor("Daniel K. James", Date(11, 10, 1997), "801-407-4693", "DanielKJames@rhyta.com", "3052 Walton Street Salt Lake City, UT 84104", 8215));
    debtors.push_back(new Debtor("Paula D. Henry", Date(9, 6, 1976), "618-378-5307", "PaulaDHenry@rhyta.com", "3575 Eagle Street Norris City, IL 62869", 5766));
    debtors.push_back(new Debtor("Donna C. Sandoval", Date(12, 13, 1947), "540-482-5463", "DonnaCSandoval@rhyta.com", "675 Jehovah Drive Martinsville, VA 24112", 8363));
    debtors.push_back(new Debtor("Robert T. Taylor", Date(8, 17, 1932), "270-596-6442", "RobertTTaylor@armyspy.com", "2812 Rowes Lane Paducah, KY 42001", 7785));
    debtors.push_back(new Debtor("Donna W. Alamo", Date(12, 9, 1948), "978-778-2533", "DonnaWAlamo@teleworm.us", "4367 Christie Way Marlboro, MA 01752", 10030));
    debtors.push_back(new Debtor("Amy R. Parmer", Date(5,19, 1995), "480-883-4934", "AmyRParmer@armyspy.com", "85 Elmwood Avenue Chandler, AZ 85249", 5347));
    debtors.push_back(new Debtor("Newton K. Evans", Date(8,8, 1986), "303-207-9084", "NewtonKEvans@rhyta.com", "3552 Columbia Road Greenwood Village, CO 80111", 9838));
    debtors.push_back(new Debtor("Kathleen C. Chaney", Date(1, 5, 1949), "605-245-3513", "KathleenCChaney@rhyta.com", "316 Elsie Drive Fort Thompson, SD 57339", 1672));
    debtors.push_back(new Debtor("Manuel C. Johnson", Date(2, 23, 1957), "606-247-2659", "ManuelCJohnson@jourrapide.com", "4146 May Street Sharpsburg, KY 40374", 9195));
    debtors.push_back(new Debtor("Carla A. Creagh", Date(11, 21, 1988), "614-307-8974", "CarlaACreagh@dayrep.com", "3106 Bates Brothers Road Columbus, OH 43215", 11271));
    debtors.push_back(new Debtor("Norma M. New", Date(5, 18, 1988), "857-492-8703", "NormaMNew@jourrapide.com", "965 Metz Lane Woburn, MA 01801", 9761));
    debtors.push_back(new Debtor("Roy D. Green", Date(1, 27, 1983), "308-340-5981", "RoyDGreen@jourrapide.com", "401 Romrog Way Grand Island, NE 68801", 10771));
    debtors.push_back(new Debtor("Cristy J. Jensen", Date(11, 2, 1935), "440-626-9550", "CristyJJensen@jourrapide.com", "2177 Harley Vincent Drive Cleveland, OH 44113", 5205));
    debtors.push_back(new Debtor("Nancy J. Fergerson", Date(5,10, 1993), "219-987-8498", "NancyJFergerson@dayrep.com", "3584 Jadewood Drive Demotte, IN 46310", 1276));
    debtors.push_back(new Debtor("Dave N. Rodriguez", Date(1, 21, 1938), "214-540-2499", "DaveNRodriguez@rhyta.com", "1890 Poco Mas Drive Dallas, TX 75247", 9132));
    debtors.push_back(new Debtor("James E. Denning", Date(5, 4, 1988), "504-289-8640", "JamesEDenning@jourrapide.com", "1444 Rose Avenue Metairie, LA 70001", 8176));
    debtors.push_back(new Debtor("Richard M. Thomas", Date(2, 13, 1972), "510-735-3359", "RichardMThomas@jourrapide.com", "4454 Green Avenue Oakland, CA 94609", 7875));
    debtors.push_back(new Debtor("Lakisha R. Forrest", Date(12, 1, 1973), "334-830-1181", "LakishaRForrest@armyspy.com", "3121 Quarry Drive Montgomery, AL 36117", 3088));
    debtors.push_back(new Debtor("Pamela H. Beauchamp", Date(11, 20, 1959), "801-559-6347", "PamelaHBeauchamp@jourrapide.com", "3239 Tori Lane Salt Lake City, UT 84104", 6588));
    

    // task 1

    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {
        
        if (2022 - s->BirthDayGetYear() > 26 && 2022 - s->BirthDayGetYear() < 36)
        {
            cout << *s << endl;
        } 
    });
    */


    // task 2

    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {

        if (s->getDebt() <= 5000)
        {
            cout << *s << endl;
        }
        });
    */

    // task 

    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {

        string s1 = "2";
        string s2 = "7";
        if (s->getFullName().size() > 18)
        {
            cout <<*s <<endl;
        }
        });
    */

    // task 3

    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {

        if (s->BirthDayGetMonth() < 3 || s->BirthDayGetMonth() > 11)
        {
            cout << *s << endl;
        }
        });
    */

    // task 4

    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {

        if (s->BirthDayGetMonth() < 3 || s->BirthDayGetMonth() > 11)
        {
            cout << *s << endl;
        }
        });
    */

    // task 5
    
    /*
    double allDebt = 0;
    
    for_each(debtors.begin(), debtors.end(), [&allDebt](Debtor*& s) {

        allDebt += s->getDebt();
        });

    allDebt /= debtors.size();


    for_each(debtors.begin(), debtors.end(), [&allDebt](Debtor*& s) {
        if (s->getDebt() > allDebt)
        {
            cout << *s << endl;
        }
        });
    */

    /// task 6
    /*
    for_each(debtors.begin(), debtors.end(), [](Debtor*& s) {
       if (s->BirthDayGetYear() <=1945 && s->BirthDayGetYear() >= 1939)
        {
            cout << *s << endl;
        }
        });


    */
    // task 7

    /*
    double allDebts = 0;

    for_each(debtors.begin(), debtors.end(), [&allDebts](Debtor*& s) {

        allDebts += s->getDebt();
        });

    allDebts /= debtors.size();


    cout << "All Debts=>" << allDebts << endl;
    */

}


