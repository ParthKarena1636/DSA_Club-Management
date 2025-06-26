#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>

using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BOLD    "\033[1m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BLACK       "\033[30m"
#define BOLD_BLACK  "\033[1m\033[30m"
#define BOLD_RED    "\033[1m\033[31m"
#define BOLD_GREEN  "\033[1m\033[32m"
#define BOLD_YELLOW "\033[1m\033[33m"
#define BOLD_BLUE   "\033[1m\033[34m"
#define BOLD_MAGENTA "\033[1m\033[35m"
#define BOLD_CYAN   "\033[1m\033[36m"
#define BOLD_WHITE  "\033[1m\033[37m"
#define BRIGHT_BLACK        "\033[90m"
#define BRIGHT_RED          "\033[91m"
#define BRIGHT_GREEN        "\033[92m"
#define BRIGHT_YELLOW       "\033[93m"
#define BRIGHT_BLUE         "\033[94m"
#define BRIGHT_MAGENTA      "\033[95m"
#define BRIGHT_CYAN         "\033[96m"
#define BRIGHT_WHITE        "\033[97m"


string ev[]= {"Weekly Poetry Writing Challenge","Ink Chronicles","iPrompt","Prompt-A-Thon","Chess64","Rapid Chess Tournament",
"RAAGA AND RHAPSODY","Festive Frames Photography Contest","Rolling Shutter(Videography)","Garba Night","Sheri Garba","Movie Scrrening","IPL Screening",
"Comic Carnival: A Comic Making Challenge","Valentine's Poetry Contest","i.Papyrus","SYNOCUBIX","Mosaic Construction: Republic Day","SellOut",
"Blood Donation Camp","India Regional Bootcamp","GoLang Session","echai","Shaping Tomorrow's Sustainability Standards","Online Lecture Series",
"Shipwreck and Prized British Parliamentary Debate!","Holi Long Programming Contest","IPC","Face Off 4.0","Winter Of Code",
"Rangoli Competition: Unleash Your Creativity!","i.Quiz","WALTZ","Public Speaking Workshop","DA-IICT MUN","EHC Session on Arduino",
"Cyber Samvad","Krishna Leela Auditions","Rangmanch - The Drama Night","Museliversary"};

/*string club[] = {"AI", "Dance", "Research", "Chess", "Cubing", "Excursion", "Microsoft", "Radio", "DCEI", "Sambhav",
                 "Developer_Student", "WebKit", "Business", "BIS", "Debate", "Music", "Programming", "IEEE", "Heritage", "Headrush_Quizzing",
                 "Muse", "Press", "DAIICT_Theatre", "Film", "Khelaiya", "EHC", "PMMC", "CINS"};*/

class Event
{

public:

    string name;
    string date;
    string time;
    int rating;
    string venue;
    string in1;
    string in2;
    string rule1;
    string rule2;
    string rule3;

};

class mj_Event{

public:

    int day;
    string time;
    string venue;
    string info;
};

class Person{

public:

    string name;
    string emid;
    long long contact;
    string password;
};

unordered_map<string, unordered_multimap<int,Event>> ev_load()
{

unordered_map<string, unordered_multimap<int,Event>> data;
    
data["Radio"].insert({4,{"Weekly Poetry Writing Challenge","07/04/2024","19:00 to 21:00",5,"Radio Room(CEP)",
"Every Year, the world celebrates the art of poetry writing in April, since 1996 and so it is called National Poetry Writing Month.",
"We invite all poets to share their unique perspectives through the poetry and share poem through recording or in written form",
"1. Poem should not intend anyone anyone's feelings or faith.",
"2. Avoid the use of vulgar language.","3. Please submit your creations before the submission date."}});

data["Radio"].insert({10,{"Ink Chronicles","20/1/2024","20:00 to 22:00",4,"Online",
"This contest is our exclusive event where you can pour your heart out in a letter to your favourite chracacter.",
"Show your creativity and express your admiration for the characters who left an indelible mark on your mind through an open letter to them.",
"1. Your letter should not intend anyone anyone's feelings or faith.","2. Avoid the use of vulgar language.",
"3. Please submit your creations before the submission date."}});

data["AI"].insert({11,{"iPrompt","05/11/2024","14:00 to 16:00",5,"CEP 110","In this event, creativity and technology converge in an extraordinary way.",
"In this challenge, you will be provided with images and prompts, and with power of AI, you will transform these prompts into AI artwork and show your AI creativity.",
"1. Your creativity should not intend anyone anyone's feelings or faith.",
"2. Please avoid any art which contains objectionable things","3. Please submit your work before 04/11/2024."}});

data["AI"].insert({8,{"Prompt-A-Thon","21/08/2024","19:00 to 21:00",5,"Online",
"AI Club is holding an event where you will send prompts based on wildest and out of box scenarios and you may also onvert it into AI framework.",
"Let the horse of imagination run. The most interesting prompts will be awarded.","1. Your creativity should not intend anyone anyone's feelings or faith.",
"2. Please avoid any art which contains objectionable things","3. Please submit your work before 20/08/2024."}});

data["Chess"].insert({11,{"Chess64","04/11/2024","12:00 to 14:00",5,"OAT","All the chess enthusiasts out there, get ready with your amazing strategies and cool tactics.",
"We all want you to participate in Chess64, where you can unleash your inner Grandmaster and show off your strategic brilliance.",
"1. Please do not cheat or indulge in any unfair practices.","2. The final decision is in hands of judges.",
"3. You will be given specific time limit and you cannot exceed that."}});

data["Chess"].insert({1,{"Rapid Chess Tournament","16/01/2024","21:00 to 23:00",4,
"CEP-106","This rapid tournament for all the chess experts and enthusiasts out there. You can bring your A game to the table.",
"Everyone will be suggested to install the chess clock application on your mobile.",
"1. Please do not cheat or indulge in any unfair practices.","2. The final decision is in hands of judges.",
"3. You will be given specific time limit and you cannot exceed that."}});

data["Music"].insert({2,{"RAAGA AND RHAPSODY","24/02/2024","16:00 to 18:00",4,"OAT",
"We are thrilled to extend an invitation to you for our prestigious singing competition, RAAGA AND RHAPSODY as part of Synapse. Whether you're a solo performer, a dynamic duet, or a harmonious group, this event promises to showcase your vocal talents",
"Join us in celebrating music's magic and make your mark in this unforgettable experience.",
"1. You should report 30 mins prior to thee event.","2. Time Limit for solo/duet category is 5-7 mins and for team, it is 8-10 mins.",
"3. Team can be of maximum 4 members"}});

data["PMMC"].insert({2,{"Festive Frames Photography Contest","22/02/2024","10:00 to 18:00",4,"Online",
"We're thrilled to announce a captivating opportunity for all the shutterbugs and photography enthusiasts out there! PMMC is organizing a brand new contest titled Festive Frames",
"The theme of this exciting contest revolves around capturing the vibrant essence of our college fest through your lens",
"1. Photoshopped, heavily edited entries will be rejected.","2. Multiple entries are not allowed.", 
"3. Your submission should include your Name, contact number."}});

data["PMMC"].insert({12,{"Rolling Shutter(Videography)","17/12/2024","1 month",3,"Online",
"We are thrilled to invite you to participate in Rolling Shutter, our month-long videography challenge tailored for storytellers and visionaries. This challenge aims to showcase your creativity in narrating compelling visual tales through the lens of your camera.",
"Capture the essence of your entire break, showcasing the variety of activities and experiences that define your vacation.",
"1.Time limit: Entries should be of length between 60 Sec and 3 Minutes. Maximum Team size: 3",
"2. Entries can be submitted by individuals or by teams of a maximum size", 
"3. The deadline to submit your entry is 17th January 11:59 PM."}});
    
data["Khelaiya"].insert({9,{"Garba Night","14/09/2024","21:00 to 22:45",5,"OAT",
"The time for a lively Garba Night has arrived! It's an opportunity for all of us to come together and enjoy a night filled with dance, music, and fun.",
"From the splendid beauty of Ras Garba to energetic Dakla, from Titodo to Timli, from Sanedo to Bhai Bhai - it's time to celebrate and enjoy the night at its fullest.",
"1. Please wear traditional clothes.","2. Please arrive on time.","3. Please maintain decorum and cleanliness."}});

data["Khelaiya"].insert({9,{"Sheri Garba","15/09/2024","22:00 to 23:00",5,"SAC Ground",
"We are excited to invite you to a night filled with joy, music, and dance as we kick off the Garba night with Sheri Garba.",
"Get set to dance the night away at our Sheri Garba event! We're bringing the lively sounds of traditional dhol and sharnai to make the evening unforgettable!",
"1. Please wear traditional clothes.","2. Please arrive on time.","3. Please maintain decorum and cleanliness."}});

data["Film"].insert({3,{"IPL Screening","31/03/2024","19:00 to 23:00",5,"LT2",
"Join us for an evening filled with the electrifying atmosphere of cricket as we gather together to witness the battle between two formidable teams.",
"Whether you're a die-hard fan or just looking for a fun night of cricket, this event promises to be a memorable one.",
"1. Please arrive on time to enjoy to the fullest.",
"2. Please maintain the infrastructure of LT and do not break anything","3. Please maintain decorum and peace."}});

data["Film"].insert({1,{"Movie Screening","10/01/2024","21:00 to 23:59",5,"LT2",
"Get ready for a night of cinematic brilliance because this week, we're bringing you the unforgettable Inglourious Basterds! It's time to take a break from the daily grind and immerse yourself in Tarantino's world of action, humor, and pure adrenaline.",
"We will hosts more such movie nights.","1. Please arrive on time to enjoy to the fullest.","2. Please maintain the infrastructure of LT and do not break anything",
"3. Please maintain decorum and peace."}});

data["Press"].insert({10,{"Comic Carnival: A Comic Making Challenge","17/10/2024","Whole day",5,"Online","This is an opportunity to bring your imagination to life through comics.",
"A picture speaks a thousand words, and likewise, a great comic strip can contain stories that would otherwise span paragraphs. So if you can depict a relatable anecdote in a humorous manner or rather something touching, send us your entries!",
"1. You have to form a team of two members.", "2. Your comic strip can span multiple panels or it could be a single panel as well.",
"3. There is a maximum page limit of 6, but no cap on the number of panels."}});

data["Press"].insert({2,{"Valentine's Poetry Contest","13/02/2024","Whole Day",4,"Online",
"As you might be aware, Valentine's week is going on. And we hope you have a better half to share roses, chocolates and gifts with. Those who don't, no worries, your Valentine can be anyone you truly love (your parents).",
"To celebrate this occasion, what better medium of expression can there be to convey your boundless love to your beloved than poetry.",
"1. Entries can be in 3 languages: English, Hindi, Gujarati","2. Submissions after deadline won't be accepted.","3. One entry per person is allowed."}});

data["Research"].insert({11,{"i.Papyrus","04/11/2024","17:00 to 19:00",5,"CEP-110",
"Research Club DAIICT, in association with i.Fest, invites you all to participate in our annual poster presentation competition, i.Papyrus!!",
"Winners would be rewarded with prizes from the pool of 3.5k+!! So channel your inner researcher and participate in this amazing competition.",
"1. Each team can only submit a single poster.","2. The allowed team size is 1-3.",
"3. Each team must have all members unique and no other team sharing a common member, failure to do so will immediately disqualify the team(s)"}});

data["Cubing"].insert({2,{"SYNOCUBIX","24/02/2024","17:00 to 19:00",4,"LT-3","It is a great event which is part of official WCA i.cube.",
"Cubers will have the chance to flaunt their cubing skills in front of everyone and will strive to make the most of theirskill.",
 "1. One person can register only once.","2. You need not bring your own cube.","3. Please check your email ID while registering."}});

data["Cubing"].insert({1,{"Mosaic Construction: Republic Day","24/01/2024","10:00 to 12:00",5,"SAC Foyer",
"As we approach the Republic Day of India, we are delighted to invite you to participate in crafting a Rubik's Cube mosaic, serving as a symbol of our collective unity, diversity, and the indomitable spirit of innovation.",
"No prior experience with Rubik's Cubes is necessary; all skill levels are welcome! We will provide guidance and assistance throughout the event.",
"1. Please come on time.","2. Please maintain decorum throughout the whole event","3. You need not bring your own cube."}});

//Excursion club has no events
data["DCEI"].insert({11,{"SellOut","04/11/2024","16:00 to 18:00",5,"LT1"," SellOut that is open for everyone willing to show their creativity, entrepreneurial skills, and imagination.",
" The event being a fun event also gives glimpses of how real-world dealings happen.","1. One participant can only register once.",
"2. You must have the registration for the ifest.","3. Evaluation will be done on the basis of the answers given. Evaluation will be done by team DCEI."}});

data["Sambhav"].insert({4,{"Blood Donation Camp","05/04/2024","14:00 to 17:00",4,"Faculty Mess(Near K++)",
"We are pleased to announce that we are organizing a Blood Donation Camp in association with the Indian Red Cross Society.",
"Even the slightest bit of help is welcome and greatly appreciated. ","1.  You are advised to follow the COVID protocols.",
"2. Please get a basic medical checkup done.","3. Please inform the doctor if you are suffering from any disease."}});

data["Developer_Student"].insert({1,{"India Regional Bootcamp","21/01/2024","Unknown",5,"Online","This is your opportunity to solve real world problems, help users in real time and get recognised for the same!",
"The India Regional Bootcamp is cherry on the cake, to elevate your projects and get guidance from industry experts",
"1. Only one team member per team is allowed to join the regional bootcamp.","2. In case you are not shortlisted, we will not be able to share the exact reasons.",
"3. GDSC India Team reserves the right to invite, shortlist and confirm your participation for the same. The shortlisting criteria is subjected to various factors and will not be disclosed."}});

data["Developer_Student"].insert({1,{"GoLang Session","16/01/2024","21:00 to 23:00",5,"CEP 106",
"We are excited to invite you to our upcoming GoLang session at GDSC, where we will delve into the world of Go programming language and its applications.",
"Whether you are a seasoned developer or just curious about new technologies, this session is tailored for everyone interested in exploring the capabilities of GoLang.",
"1. Bring your laptops","2. Please register before coming.","3. Please maintain the decorum."}});

//WebKit club, no events found
data["Business"].insert({2,{"echai","16/02/2024","18:30 to 20:00",5,"LT1",
" eChai 2.0 is a dynamic and enriching networking event tailored to ignite your entrepreneurial spirit and foster innovation right here at DA-IICT!",
"eChai 2.0 promises to be an engaging platform where you can interact with accomplished entrepreneurs, exchange ideas, and explore new strategies to fuel your entrepreneurial journey.",
"1. Please register for this event.","2. Please maintain respect for the speaker.",
"3. Please maintain cleanliness in the hall."}});

data["BIS"].insert({2,{"Shaping Tomorrow's Sustainability Standards","15/02/2024","Whole day",5,"Online",
"The Bureau of Indian Standards (BIS) has launched the Shaping Tomorrow's Sustainability Standards contest.",
"This contest aims to inspire students and research scholars to identify new areas where standards can be developed to address sustainability and climate change issues.",
"1. You can only submit one entry at a time.","2. Submit your entry before the deadline.",
"3. Please attach a copy of Valid Student ID card with your entry"}});

data["BIS"].insert({3,{"Online Lecture Series","04/03/2024","16:00 to 17:30",5,"Webex(Online)","You are invited to the BIS Online Lecture Series Let's Talk about Standards: Electronics and IT",
"BIS is starting an interactive online lecture series titled 'Let's Talk about Standards' to take the initiative of Education Outreach forward with all the our eminent MoU partner Institutes",
"1. Please turn off your mic during the session unless told.","2. Switch on your camera during the whole session.","3. Email any doubts if you have."}});

data["Debate"].insert({2,{"Shipwreck and Prized British Parliamentary Debate!","15/02/2024","20:45 to 22:15",5,"CEP 106",
"Prepare to dive into the depths of discussion as Shipwreck offers a unique twist on traditional debate formats.",
"Engage in stimulating discourse on various intriguing topics, navigating through the waves of argumentation and wit.",
"1. You shall not hurt anybody's feelings intentionally","2. The langauge used shall be respectable.",
"3. Please don't harm any infrastructure."}});

data["Programming"].insert({3,{"Holi Long Programming Contest","For 7 Days","15:00 to 19:00",5,"Online",
"This is an exciting opportunity for all coding enthusiasts to come together and test their skills in a fun and challenging environment.", 
"Starting on 25th March, this contest will span over 7 days, featuring a new question each day, gradually building up the excitement and challenge.",
"1. On the first day, it will have 4 questions and for the next 6 days, we will have 1 question coming up at 3:00 pm exactly",
"2. There are prizes for the first solver.",
"3. You can submit one question only once."}});

data["Programming"].insert({2,{"IPC","01/02/2024","21:00 to 23:00",5,"Online",
"The Programming Club is here with the 5th IPC of the academic year.",
"Seize this opportunity to showcase your programming skills and improve your capabilities.",
"1. It is forbidden to use somebody else's code in the solution.",
"2. It is allowed to use any sources of information on the Internet (but it is forbidden to copy-paste somebody else's code).",
"3. The programming Club has the right to monitor the contestants' honesty in behavior using different methods and disqualify the contestant if violations are found."}});

data["Microsoft"].insert({3,{"Face Off 4.0","11/03/2024","15:00 to 18:00",5,"Online",
"MSTC is back again with a blast. We are thrilled to officially announce the upcoming Face Off 4.0, a highly anticipated 1v1 Competitive Programming.",
" If you are someone who has been delving into the deep worlds of Competitive Programming and DSA, this is something you don't want to miss.",
"1. You will have to register in your applied category.","2. You will have to register on the codeforces before the contest.",
"3. Each category will witness 5 competitive rounds with the first round being open to all for the participant of respective categories from which 32 top participants will be selected to compete in a 1v1 format."}});

data["Microsoft"].insert({12,{"Winter Of Code","30/12/2024","1 month",5,"Online",
" As the winter chill sets in, we are thrilled to announce the opening of registrations for the highly anticipated Winter of Code", 
"It is a month-long program where you will get a chance to learn a new tech-stack from scratch without spending a single penny.",
"1.It is forbidden to use somebody else's code in the solution.",
"2.You may use third-party prewritten code, like the template of some algorithms.",
"But you are not allowed to use the whole code with the logic of others."}});

data["Heritage"].insert({11,{"Rangoli Competition: Unleash Your Creativity!","6/11/2024","18:30 to 19:30",5,"OAT",
"The Heritage Club is thrilled to announce an upcoming Rangoli Competition", 
"This competition promises to be an exciting event where your creativity can shine.",
"1.Form a team of 3-6 individuals to participate.","2.Only include 1 kg of white color and 500g each of six vibrant colors.",
"3. Do not spoil others art."}});

data["Headrush_Quizzing"].insert({11,{"i.Quiz","05/11/2024","9:00 to 10:30",5,"CEP-110",
"Headrush in association with i.Fest is organizing a science and technology quiz, i.Quiz, where your knowledge in the domains of physics, chemistry, biology and information technology will be put to a test.",
"It will be exciting.",
"1. Do not use internet.","2. Maintain decorum in the hall","3.Don't forget to bring a sheet of paper and a pen."}});

data["Dance"].insert({3,{"WALTZ","12/03/2024","21:00 to 22:30",4,"OAT",
"This event promises to be an electrifying celebration of dance, talent, and creativity.",
"We cordially invite you all to participate and showcase your skills on the dance floor.",
"1. Only one member per team is required to fill out the form for team registration.",
"2. On-the-spot registrations won't be entertained.","3. Any kind of obscenity will not be entertained under any circumstances."}});

data["IEEE"].insert({2,{"Public Speaking Workshop","17/02/2024","16:00 to 19:00",5,"CEP-110",
"We cordially invite you to participate in the Public Speaking Workshop organized by the IEEE Student Branch DAIICT.",
"This workshop aims to equip participants with essential public speaking skills crucial for various aspects of personal and professional life.",
"1. There is no fees.","2. Please arrive in the workshop on time.","3. Please email if you have any doubts."}});

data["IEEE"].insert({3,{"DA-IICT MUN","10/03/2024","16:00 to 21:00",5,"LT2",
"IEEE SB DAIICT along with DebSoc DA-IICT and the expertise of the Turning Point community brings to you, DA-IICT MUN.",
"“Model United Nations” or MUN is an educational simulation in which students learn about diplomacy, and international relations and get a chance to experience and understand the workings of the United Nations.",
"1. ₹1000 per delegate for non-IEEE members","2.₹800 for IEEE members",
"3. You need to attend the pre-MUN Training Workshop."}});

data["EHC"].insert({10,{"EHC Session on Arduino","06/10/2024","18:30 to 19:45",5,"LT2",
"The Electronics Hobby Center is dedicated to fostering a passion for electronics, providing hands-on experience, and creating a supportive community for all those interested in the field.",
"Join us for an exciting Arduino session tailored for beginners!",
"1. Please join us on time.","2. You may ask questions if you have doubt by raising hands.","3. You need to regisster first."}});

data["CINS"].insert({2,{"Cyber Samvad","24/02/2024","10:00 to 11:00",3,"LT1",
"Given the rising instances of cybercrimes, understanding the fundamentals of staying safe online has become paramount.", 
"With this in mind, the CINS club is excited to announce the  Cyber Samvad.",
"1. You need to register before joining the event.","2. Please arrive on time.",
"3. Following the discussion, there will be a Q&A session where the audience can have their queries addressed"}});

data["DAIICT_Theatre"].insert({4,{"Krishna Leela Auditions","02/04/2024","21:00 to 22:45",4,"LT1",
"DTG is all set to bring back one of the biggest celebrations of DAIICT. Krishna Leela is happening and we will leave no stone unturned to give you an experience of a lifetime.",
"As we start preparing, we will be taking auditions for all roles for Krishna Leela once again.",
"1. You can participate only as an actor or writer.","2. Auditions are compulsory to take part in Leela",
"3. For any queries, you can revert to us"}});

data["DAIICT_Theatre"].insert({1,{"Rangmanch - The Drama Night","01/01/2024","21:00 to 23:45",4,"OAT",
"We have three main categories for the event - Stage Play, Felicity and Mono Act.",
" Put on your thinking caps, jot down a tale that mesmerizes the audience and captivates every mind!",
"1. Anyone can develop one's own script and send their team details.",
"2.To contact DTG, drop a mail at theatres@daiict.ac.in.",
"3. The deadline for submitting the Entry form is extended to 10th Jan 2024"}});

data["Muse"].insert({4,{"Museliversary","04/04/2024","17:00 to 19:00",5,"Cafeteria",
"To mark this special anniversary, we prepare an array of exciting activities every year on this day.",
"We're celebrating three years of creativity, innovation, and unforgettable moments that have brought us together as a community.",
"1. Please maintain the decorum while celebrating",
"2. Please arrive on time.",
"3. Please maintain cleanliness in the cafeteria."}});

return data;
}

void event(unordered_map<string, unordered_multimap<int, Event>> &data)
{
    std::cout <<BLUE<< "1.to get info of any particular event" <<RESET<< endl;
    std::cout <<BLUE<< "2.to get info of all events of an club " <<RESET<< endl;
    std::cout <<BLUE<< "3.to get info of all events in a particular month " <<RESET<< endl;
    std::cout <<BLUE<< "4.to get info of all events of an club in a particular month " <<RESET<< endl;
    std::cout <<BLUE<< "5.if you don't know how many events conducted by clubs of daiict You will get info of all events" <<RESET<< endl;
    std::cout << "Enter Choice: ";
    int n;
    std::cin >> n;
    std::cin.ignore();
    switch (n)
    {
    case 1:
    {
    it:
        cout << "Enter Event name: ";
        string evna;
        std::getline(cin, evna);
        int a = 0;
        for (int i = 0; i < 28; ++i)
        {
            for (auto eve : data[club[i]])
            {
                if (eve.second.name == evna)
                {
                    std::cout << endl;
                    std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
                    std::cout <<BOLD_GREEN<< "Event Detials: " <<RESET<< endl;
                    std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Club Name" << ": " << club[i] <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Name" << ": " << eve.second.name <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Date" << ": " << eve.second.date <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Time" << ": " << eve.second.time <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Venue" << ": " << eve.second.venue <<RESET<< endl;
                    std::cout <<CYAN<< left << setw(10) << "Rating" << ": " << eve.second.rating <<RESET<< endl;
                    std::cout << "------------------------------" << endl;
                    std::cout << left << setw(12) << "Information" << ": " << eve.second.in1 << endl;
                    std::cout << "              " << eve.second.in2 << endl;
                    std::cout << endl;
                    std::cout << left << setw(12) << "Rules" << ": " << eve.second.rule1 << endl;
                    std::cout << "              " << eve.second.rule2 << endl;
                    std::cout << "              " << eve.second.rule3 << endl;
                    std::cout << "------------------------------" << endl;
                    std::cout << endl;
                    a = 1;
                    break;
                }
            }
        }

        if (a == 0)
        {
            std::cout << "You provided wrong event name" << endl;
            std::cout << "Press 1 to enter name again or 0 to leave: ";
            int n;
            std::cin >> n;
            cin.ignore();
            if (n == 1)
            {
                goto it;
            }
        }
        break;
    }
    case 2:
    {
    it1:
        string cl;
        std::cout << "Enter the name of the club: ";
        std::getline(cin, cl);
        int a = 0;
        if(!data[cl].empty()){
        for (auto eve : data[cl])
        {
            if(a==0){
            std::cout << endl;
            std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
            std::cout <<BOLD_GREEN<< "Event Detials: " <<RESET<< endl;
            }
            std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Club Name" << ": " << cl <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Name" << ": " << eve.second.name <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Date" << ": " << eve.second.date <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Time" << ": " << eve.second.time <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Venue" << ": " << eve.second.venue <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Rating" << ": " << eve.second.rating <<RESET<< endl;
            std::cout << "------------------------------" << endl;
            std::cout << left << setw(12) << "Information" << ": " << eve.second.in1 << endl;
            std::cout << "              " << eve.second.in2 << endl;
            std::cout << "------------------------------" << endl;
            std::cout << endl;
            a++;
        }}
        else
        {
            std::cout << "You provided wrong club name" << endl;
            std::cout << "Press 1 to enter name again or 0 to leave: ";
            int n;
            std::cin >> n;
            cin.ignore();

            if (n == 1)
            {
                goto it1;
            }
        }
        break;
    }
    case 3:
    {
    it2:
        int mn;
        std::cout << "Enter number of month(in integer): ";
        std::cin >> mn;
        int a = 0;
        for (int i = 0; i < 28; ++i)
        {
            auto temp = data[club[i]].equal_range(mn);

            for (auto person = temp.first; person != temp.second; ++person)
            {
                if(a==0){
                std::cout << endl;
                std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
                std::cout <<BOLD_GREEN<< "Event Details: " <<RESET<< endl;
                }
                std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Club Name" << ": " << club[i] <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Name" << ": " << person->second.name <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Date" << ": " << person->second.date <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Time" << ": " << person->second.time <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Venue" << ": " << person->second.venue <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Rating" << ": " << person->second.rating <<RESET<< endl;
                std::cout << "------------------------------" << endl;
                std::cout << left << setw(12) << "Information" << ": " << person->second.in1 << endl;
                std::cout << "              " << person->second.in2 << endl;
                std::cout << "------------------------------" << endl;
                std::cout << endl;
                a++;
            }
        }
        if (a == 0)
        {
            std::cout <<RED<< "Sorry there is no event in this month" <<RESET<< endl;
            std::cout << "Press 1 to enter month again or 0 to leave: ";
            int n;
            std::cin >> n;
            cin.ignore();
            if (n == 1)
            {
                goto it2;
            }
        }
        break;
    }
    case 4:
    {
    it3:
        int mn;
        string cl;
        std::cout << "Enter name of the club and month: ";
         std::cout << "If you want to know about Developer Student Club then type Developer_Student and for Headrush, type Headrush_Quizzing "<<endl;
        std::cout << "and for DTG, type DAIICT_Theatre and enter the month number afterwards.";
        std::getline(cin, cl);
        cin >> mn;
        int a = 0;
        auto temp = data[cl].equal_range(mn);
        for (auto person = temp.first; person != temp.second; ++person)
        {
            if(a==0){
            std::cout << endl;
            std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
            std::cout <<BOLD_GREEN<< "Event Details: " <<RESET<< endl;
            }
            std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Club Name" << ": " << cl << endl;
            std::cout <<CYAN<< left << setw(10) << "Name" << ": " << person->second.name <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Date" << ": " << person->second.date <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Time" << ": " << person->second.time <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Venue" << ": " << person->second.venue <<RESET<< endl;
            std::cout <<CYAN<< left << setw(10) << "Rating" << ": " << person->second.rating <<RESET<< endl;
            std::cout << "------------------------------" << endl;
            std::cout << left << setw(12) << "Information" << ": " << person->second.in1 << endl;
            std::cout << "              " << person->second.in2 << endl;
            std::cout << "------------------------------" << endl;
            std::cout << endl;
            a++;
        }
        if (a == 0)
        {
            std::cout << "There is no event in this month for "<<cl<<" club" << endl;
            std::cout << "Press 1 to Enter name of the club and month again or 0 to leave: ";
            int n;
            std::cin >> n;
            cin.ignore();
            if (n == 1)
            {
                goto it3;
            }
        }
        break;
    }
    case 5:
    {
        std::cout << "Here is detail of all events" << endl;
        std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
        std::cout <<BOLD_GREEN<< "Event Detials: " <<RESET<< endl;
        
        for (int i = 0; i < 28; ++i)
        {
            for (auto eve : data[club[i]])
            {
                std::cout << endl;
                std::cout <<BOLD_BLUE<< "------------------------------" <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Club Name" << ": " << club[i] <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Name" << ": " << eve.second.name <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Date" << ": " << eve.second.date <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Time" << ": " << eve.second.time <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Venue" << ": " << eve.second.venue <<RESET<< endl;
                std::cout <<CYAN<< left << setw(10) << "Rating" << ": " << eve.second.rating <<RESET<< endl;
                std::cout << "------------------------------" << endl;
                std::cout << left << setw(12) << "Information" << ": " << eve.second.in1 << endl;
                std::cout << "              " << eve.second.in2 << endl;
                std::cout << endl;
                std::cout << left << setw(12) << "Rules" << ": " << eve.second.rule1 << endl;
                std::cout << "              " << eve.second.rule2 << endl;
                std::cout << "              " << eve.second.rule3 << endl;
                std::cout << "------------------------------" << endl;
                std::cout << endl;
            }
        }
        break;
    }
    }
}
void edit_ev(unordered_map<string, unordered_multimap<int, Event>> &data, unordered_map<string, unordered_map<long long, pair<string, pair<long long, string>>>> &directory)
{
    std::cout << "Enter your id: ";
    long long id;
    string cl;
    cin >> id;
    std::cout << "Enter the name of the club name whose event you want to change: ";
    std::cout << "If you want to know about Developer Student Club then type Developer_Student and for Headrush, type Headrush_Quizzing "<<endl;
    std::cout << "and for DTG, type DAIICT_Theatre"<<endl;
    cin >> cl;
    cin.ignore();
    int b = 0;

    for (int i = 0; i < 28; ++i)
    {
        auto person = directory[cl].find(id);
        if (person != directory[cl].end())
        {
            if (person->second.second.second == "Core")
            {
                b = 1;
                break;
            }
        }
    }

    if (b == 0)
    {
        cout << endl;
        std::cout << "You are not a core member of " << cl << " club, so you can't edit its events" << endl;
    }
    else
    {
        cout << endl;
        int a = 0;
        std::cout << "You are a core member of " << cl << ", so you can make changes to its events" << endl;
        cout << endl;
        cout << "Here all events which are held by " << cl << endl;
        int i = 1;
        for (auto eve : data[cl])
        {
            std::cout << left << setw(2) << i << ": " << eve.second.name << endl;
            i++;
        }
        cout << endl;
        std::cout << "Enter the name of the event you want to edit: ";
        string evna;
        getline(cin, evna);
        for (int i = 0; i < 28; ++i)
        {
            for (auto &eve : data[cl])
            {
                if (eve.second.name == evna)
                {
                label:
                    cout << endl;
                    std::cout <<BOLD_BLUE<< "Enter the new details for the event " << evna <<RESET<< endl;
                    std::cout <<BOLD_BLUE<< "Which type of information you want to edit: " <<RESET<< endl
                              <<BRIGHT_MAGENTA<< "1.to Modify Date" <<RESET<< endl
                              <<BRIGHT_MAGENTA<< "2.to Modify Time" <<RESET<< endl
                              <<BRIGHT_MAGENTA<< "3.to Modify Venue" <<RESET<< endl
                              <<BRIGHT_MAGENTA<< "4.to Modify date time Venue" <<RESET<< endl
                              <<BRIGHT_MAGENTA<< "5.to exit" <<RESET<< endl;
                    std::cout << "Enter Choice: ";
                    int x;
                    cin >> x;
                    cin.ignore();
                    switch (x)
                    {
                    case 1:
                    {
                        cout << endl;
                        string newdata;
                        std::cout << "Date(dd/mm/yyyy): ";
                        getline(cin, newdata);
                        for (int j = 0; j < 28; ++j)
                        {
                            for (auto &other_eve : data[club[j]])
                            {
                                if (other_eve.second.name != eve.second.name &&
                                    other_eve.second.date == newdata &&
                                    other_eve.second.time == eve.second.time &&
                                    other_eve.second.venue == eve.second.venue)
                                {
                                    std::cout << "Another event is already scheduled at that time or date" << endl;
                                    std::cout << "Do you want to retry with different details? (y/n): ";
                                    char choice;
                                    cin >> choice;
                                    if (choice == 'y' || choice == 'Y')
                                    {
                                        goto label;
                                    }
                                    else
                                    {
                                        return;
                                    }
                                }
                            }
                        }
                        if (newdata == eve.second.date)
                        {
                            cout << endl;
                            cout << "Enter new date which is different from Previous date..!!";
                            cout << endl;
                            goto label;
                        }
                        eve.second.date = newdata;
                        break;
                    }
                    case 2:
                    {
                        cout << endl;
                        string newdata;
                        std::cout << "Time: ";
                        getline(cin, newdata);
                        for (int j = 0; j < 28; ++j)
                        {
                            for (auto &other_eve : data[club[j]])
                            {
                                if (other_eve.second.name != eve.second.name &&
                                    other_eve.second.date == eve.second.date &&
                                    other_eve.second.time == newdata &&
                                    other_eve.second.venue == eve.second.venue)
                                {
                                    std::cout << "Another event is already scheduled at that time or date" << endl;
                                    std::cout << "Do you want to retry with different details? (y/n): ";
                                    char choice;
                                    cin >> choice;
                                    if (choice == 'y' || choice == 'Y')
                                    {
                                        goto label;
                                    }
                                    else
                                    {
                                        return;
                                    }
                                }
                            }
                        }
                        if (newdata == eve.second.time)
                        {
                            cout << endl;
                            cout << "Enter new time which is different from Previous time..!!";
                            cout << endl;
                            goto label;
                        }
                        eve.second.time = newdata;
                        break;
                    }
                    case 3:
                    {
                        string newdata;
                        std::cout << "Venue: ";
                        getline(cin, newdata);
                        for (int j = 0; j < 28; ++j)
                        {
                            for (auto &other_eve : data[club[j]])
                            {
                                cout << endl;
                                if (other_eve.second.name != eve.second.name &&
                                    other_eve.second.date == eve.second.date &&
                                    other_eve.second.time == eve.second.time &&
                                    other_eve.second.venue == newdata)
                                {
                                    std::cout << "Another event is already scheduled at that time or date" << endl;
                                    std::cout << "Do you want to retry with different details? (y/n): ";
                                    char choice;
                                    cin >> choice;
                                    if (choice == 'y' || choice == 'Y')
                                    {
                                        goto label;
                                    }
                                    else
                                    {
                                        return;
                                    }
                                }
                            }
                        }
                        if (newdata == eve.second.venue)
                        {
                            cout << endl;
                            cout << "Enter new venue which is different from Previous venue..!!";
                            cout << endl;
                            goto label;
                        }
                        eve.second.venue = newdata;
                        break;
                    }
                    case 4:
                    {
                        string newdata1, newdata2, newdata3;
                        std::cout << "Date(dd/mm/yyyy): ";
                        getline(cin, newdata1);
                        std::cout << "Time: ";
                        getline(cin, newdata2);
                        std::cout << "Venue: ";
                        getline(cin, newdata3);
                        for (int j = 0; j < 28; ++j)
                        {
                            for (auto &other_eve : data[club[j]])
                            {
                                cout << endl;
                                if (other_eve.second.name != eve.second.name &&
                                    other_eve.second.date == newdata1 &&
                                    other_eve.second.time == newdata2 &&
                                    other_eve.second.venue == newdata3)
                                {
                                    std::cout << "Another event is already scheduled at that time or date" << endl;
                                    std::cout << "Do you want to retry with different details? (y/n): ";
                                    char choice;
                                    cin >> choice;
                                    if (choice == 'y' || choice == 'Y')
                                    {
                                        goto label;
                                    }
                                    else
                                    {
                                        return;
                                    }
                                }
                            }
                        }
                        if (newdata1 == eve.second.date && newdata2 == eve.second.time && newdata3 == eve.second.venue)
                        {
                            cout << endl;
                            cout << "Enter new data which is different from Previous date..!!";
                            cout << endl;
                            goto label;
                        }
                        eve.second.date = newdata1;
                        eve.second.time = newdata2;
                        eve.second.venue = newdata3;
                        break;
                    }
                    case 5:
                    {
                        return;
                    }
                    }
                    std::cout << "Event " << evna << " has been updated" << endl;
                    a = 1;
                    break;
                }
            }
            if (a == 1)
                break;
        }
        if (a == 0)
        {
            cout << endl;
            std::cout << "Event " << evna << " not found" << endl;
        }
    }
}
unordered_map<string,unordered_map<string,Person>> par_load(string file_name){

    unordered_map<string,unordered_map<string,Person>> detail;

    ifstream fin;

    fin.open(file_name,ios :: in);

    Person A;
    string temp,event,username;

    while(fin>>A.name>>temp>>A.contact>>A.emid>>username>>A.password){
        getline(fin,event);
        event.erase(0,1);
        A.name = A.name +" " + temp;
        
        detail[event][username] = A;
    }

    fin.close();

    return detail;

}

void ev_par(unordered_map<string, unordered_map<string, Person>> &data, unordered_map<string, unordered_multimap<int, Event>> &info, string file_name)
{

    char temp;
    cout << "Have you registered yourself ?? (Enter Y/N): ";
    cin >> temp;
    cout << endl;
    cin.ignore();

    Person A;
    string uname, tem, evname;

    if (temp == 'N')
    {

        cout << "You are new candidate please register yourself" << endl;
        cout << "----------------------------------------------" << endl;
        cout << setw(20) << "Please enter your name : ";
        getline(cin, A.name);
        cout << setw(20) << "Enter your contact number: ";
        cin >> A.contact;
        cout << setw(20) << "Enter your email id: ";
        cin >> A.emid;
    la:
        cout << setw(20) << "Now create your user name: ";
        cin >> uname;

         for (const auto& event : data) {
            const auto& participants = event.second;
            auto person = participants.find(uname);
            if (person != participants.end()) {
            cout <<RED<< "This username already exists in event: " << event.first <<RESET<< endl;
            cout <<RED<< "Please enter a new username" <<RESET<< endl;
            goto la;
            }
        }
    la1:
        cout << setw(20) << "Now create password: ";
        cin >> A.password;
        cout << setw(20) << "Please enter your password again:";
        cin >> tem;
        cout << endl;

        if (tem != A.password)
        {
            cout <<YELLOW<< "Both password are not matching!, Please make your password again" <<RESET<< endl;
            cout << endl;
            goto la1;
        }

        cout <<GREEN<< "You are registration completed sucessfully" <<RESET<< endl;
    }
    else
    {
    la3:
        int a = 0;
        cout << setw(20) << "Enter your username: ";
        cin >> uname;
        cout << setw(20) << "Now enter your password: ";
        cin >> A.password;
        cout << endl;

        for (int i = 0; i < ev->size(); ++i)
        {
            auto person = data[ev[i]].find(uname);
            if (person != data[ev[i]].end())
            {
                if (person->second.password == A.password)
                {
                    a = 1;
                    A.contact = person->second.contact;
                    A.emid = person->second.emid;
                    A.name = person->second.name;
                    A.password = person->second.password;
                    break;
                }
            }
        }

        if (a == 0)
        {
            cout <<BRIGHT_RED<< "Incorrect user-name or password" <<RESET<< endl;
            int k;
            cout << "Press 1 to re-enter or 0 to exit: ";
            cin >> k;
            if (k == 1)
            {
                cout << endl;
                goto la3;
            }
            else
            {
                return;
            }
        }

        cout <<GREEN<< "You are succesfully login" <<RESET<< endl;
    }

    Event B;
la4:
    int k = 0;
    cout << endl;
    cout << "Here all events names :=" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < ev->size(); i = i + 2)
    {
        cout << left << setw(50) << ev[i] << " " << setw(50) << ev[i + 1] << endl;
    }
    cout << endl;
    cout << "Enter the name of the event you want to participate: ";
    cin.ignore();
    getline(cin, evname);
    cout << endl;

    for (int i = 0; i < 28; ++i)
    {
        for (auto person : info[club[i]])
        {
            if (person.second.name == evname)
            {
                B.rule1 = person.second.rule1;
                B.rule2 = person.second.rule2;
                B.rule3 = person.second.rule3;
                k = 1;
            }
        }
    }

    if (k == 0)
    {
        cout << "No event found, Please eneter correct name of the event" << endl;
        cout << "Enter 1 to re-enter or 0 to leave: ";
        int b;
        cin >> b;
        cout << endl;
        goto la4;
    }

    cout << "Rules for this event is as below " << endl;
    cout << "--------------------------------" << endl;
    cout << B.rule1 << endl;
    cout << B.rule2 << endl;
    cout << B.rule3 << endl;
    cout << endl;

    cout << "Are you still want to join this event, Please enter Y|N: ";
    char t;
    cin >> t;

    if (t == 'Y')
    {
        cout <<GREEN<< "You registered succesfully for " << evname <<RESET<< endl;

        ofstream fout;
        fout.open(file_name, ios::app);
        fout << endl;
        fout << A.name << " " << A.contact << " " << A.emid << " " << uname << " " << A.password << " " << evname;
        fout.close();

        data[evname][uname] = A;

        cout << endl;

        cout << "Do you want list of the person who is participated in this event" << endl;
        cout << "Enter Y|N: ";
        char t;
        cin >> t;
        cout << endl;

        if (t == 'Y')
        {
            cout <<BOLD_BLUE<< "--------------------------------------------------" <<RESET<< endl;
            cout << left << setw(20) <<BRIGHT_CYAN<< "Participate Name " << setw(20) << "Participate Username " <<RESET<< endl;
            cout <<BOLD_BLUE<< "--------------------------------------------------" <<RESET<< endl;
            for (auto person : data[evname])
            {
                cout << left << setw(20) << person.first << setw(20) << person.second.name << endl;
            }
            cout <<BOLD_BLUE<< "--------------------------------------------------" <<RESET<< endl;
        }

        cout << "Do you want list of the events name in which you participate" << endl;
        cout << "Enter Y|N : ";
        cin >> t;
        cout << endl;

        int n = 1;
        if (t == 'Y')
        {
            cout << "You Participed in these event:- " << endl;
            cout << "-------------------------------" << endl;
            for (int i = 0; i < ev->size(); ++i)
            {
                auto person = data[ev[i]].find(uname);
                if (person != data[ev[i]].end())
                {
                    cout << n << ". " << ev[i] << endl;
                    n++;
                }
            }
            cout << "-------------------------------" << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Press 1 to participate in any other event or 0 to leave: ";
        int k;
        cin >> k;
        if (k == 0)
        {
            return;
        }
        else
        {
            cout << endl;
            goto la4;
        }
    }
}

void mj_event()
{
    cout << "There is three major event conducted by clubs and committiees" << endl;
    cout << "1.Synapse    2.iFest    3.Concours" << endl;
    cout << endl;
    cout << "-------------" << endl;
    cout << "SYNAPSE:-" << endl;
    cout << "-------------" << endl;
    cout << "Synapse is DAIICT's annual college fest, unites global artists and creative minds to showcase unique collages, share"
         << "creative processes, and transforms into a vibrant night of live music, DJ performances, and dance parties, fostering creative"
         << "connections and celebrating artistic expression." << endl;
    cout << "It is spread across 4 days, from 22 Feb to 25 Feb." << endl;

    cout << endl;
    cout << "-------------" << endl;
    cout << "I FEST:-" << endl;
    cout << "-------------" << endl;
    cout << "iFest is one of the most anticipated and acknowledged technical fest all over Gujarat. It is lauded for its"
         << "versatile and wide ranging technical, social and non-technical events" << endl
         << " The event spans across 3 days from November 3 to November 5" << endl;

    cout << endl;
    cout << "-------------" << endl;
    cout << "CONCOURS:-" << endl;
    cout << "-------------" << endl;
    cout << "Concours is the annual national sports fest. Concours facilitates a healthy competition among the students in nine different sports"
         << "The central idea the fest is to ingrain vigour and honour in the students" << endl;
    cout << "It spans across 4 days from 26 October to 29 October." << endl;
    cout << endl;

    unordered_map<string, unordered_map<string, mj_Event>> data;

    mj_Event A;

    A.day = 1;
    A.info = "Stage Play is a part of Theatric events. Immerse yourself in the world of stage plays. A theatrical experience that brings stories to life on a captivating stage";
    A.time = "22:00 to 01:00";
    A.venue = "OAT";
    data["Synapse"]["Stage Play"] = A;

    A.day = 1;
    A.info = "Stand Up will feature two great artists: Nishant Suri and Gurleen Pannu. The performances will be a mixture of clever storytellying, witty one liner and spontaneous interactions which will be memorable.";
    A.time = "20:00 to 21:30";
    A.venue = "OAT";
    data["Synapse"]["Stand Up"] = A;

    A.day = 1;
    A.info = "Rampage is a fashion show. Immerse yourself in the world of style at our Fashion Expo. Explore the latest trends, designs, and glamorous runway showcases.";
    A.time = "01:30 to 03:00";
    A.venue = "OAT";
    data["Synapse"]["Rampage"] = A;

    A.day = 2;
    A.info = "MonoActe is a Theatric event. Witness the power of a single performer in MonoAct. A solo act that weaves compelling narrative and showcases the versatility of a lone artist.";
    A.time = "09:00 to 12:00";
    A.venue = "LT2";
    data["Synapse"]["MonoActe"] = A;

    A.day = 2;
    A.info = "Showdown is a dance event. Get ready to groove at our Hip-Hop Jam! A celebration of urban dance culture with beats that will make you move.";
    A.time = "09:00 to 15:00";
    A.venue = "CEP Foyer";
    data["Synapse"]["Showdown"] = A;

    A.day = 2;
    A.info = "Tech Hunt is a technical event. Embark on a coding adventure where solving challenges unlocks the next code quest.";
    A.time = "10:00 to 13:00";
    A.venue = "Lab";
    data["Synapse"]["Tech Hunt"] = A;

    A.day = 3;
    A.info = "Code Mutants ia Tech event  to show off your programming skills, and solve as many problems as you can.";
    A.time = "10:00 to 14:00";
    A.venue = "LT2";
    data["Synapse"]["Code Mutants"] = A;

    A.day = 3;
    A.info = "Hunger Hikes is a fun event. A treasure hunt, but full of food. Showcase your knowledge about food";
    A.time = "11:00 to 17:00";
    A.venue = "Canteen";
    data["Synapse"]["Canteen"] = A;

    A.day = 3;
    A.info = "Concert by Antara Mitra will be magical. Get ready to feel the beat, the rhythm, and the soul of the music. ";
    A.time = "20:00 to 23:00";
    A.venue = "SAC";
    data["Synapse"]["Concert"] = A;

    A.day = 4;
    A.info = "Rap Battle,Use your frustration, thoughts, and feelings as a weapon and lay it out through a rap battle challenge";
    A.time = "13:00 to 16:00";
    A.venue = "Canteen";
    data["Synapse"]["Rap Battle"] = A;

    A.day = 4;
    A.info = "Naach, Hold your breath as dancers showcase the richness of our pristine heritage, pay homepage to time-honored traditions";
    A.time = "15:00 to 18:00";
    A.venue = "OAT";
    data["Synapse"]["Naach"] = A;

    A.day = 4;
    A.info = "Concert by Multi award winner, Amit Trivedi, Get ready to feel the beat, the rhythm, and the soul of the music.";
    A.time = "20:00 to 23:00";
    A.venue = "SAC";
    data["Synapse"]["Concert"] = A;

    A.day = 1;
    A.info = "iGanith is for math geeks who love playing with numbers at their fingertips, this is a chance to bring up your handy math skills.";
    A.time = "14:00 to 16:00";
    A.venue = "Lab";
    data["ifest"]["iGanith"] = A;

    A.day = 1;
    A.info = "iPapyrus,Present your innovative and mind-boggling research work at this event if you love ocean information.";
    A.time = "17:00 to 19:00";
    A.venue = "CEP-110";
    data["ifest"]["iPapyrus"] = A;

    A.day = 1;
    A.info = "iQuiz, Satiate your appetite for quizzes with i.Quiz, a tech-based quiz featuring staggering questions";
    A.time = "19:00 to 20:30";
    A.venue = "Lab";
    data["ifest"]["iQuiz"] = A;

    A.day = 2;
    A.info = "CSS Battle, The main objective of this event is visually replicating the target image in the least possible CSS code.";
    A.time = "12:00 to 13:30";
    A.venue = "Lab";
    data["ifest"]["CSS Battle"] = A;

    A.day = 2;
    A.info = "Chess64, Show us your smart chess moves and engage in brain-stimulating competitions against your opponents.";
    A.time = "12:00 to 14:00";
    A.venue = "CEP 004";
    data["ifest"]["Chess 64"] = A;

    A.day = 2;
    A.info = "Music Night, immerse yourself into the exciting music and show your enthusiasm on the stage.";
    A.time = "23:00 to 01:00";
    A.venue = "OAT";
    data["ifest"]["Music Night"] = A;

    A.day = 2;
    A.info = "iRide, Show your bicycle skills, but there is a twist, it is a slow cycling contest. Flaunt your balancing skills.";
    A.time = "17:00 to 19:00";
    A.venue = "Cafeteria";
    data["ifest"]["iRide"] = A;

    A.day = 3;
    A.info = "iPrompt, where you can flaunt your amazing imagination skills and then transfer it with the help of AI generative framework.";
    A.time = "14:00 to 15:00";
    A.venue = "Lab";
    data["ifest"]["iPrompt"] = A;

    A.day = 3;
    A.info = "The Open Box with Safin Hasan, join us to engage with a great personality and a source of inspiration.";
    A.time = "11:00 to 12:00";
    A.venue = "LT1";
    data["ifest"]["The Open Box"] = A;

    A.day = 3;
    A.info = "Blind C, Confident enough about your coding skills to be able to write them down blindfolded? (Well, not literally. But you’ll be screen blind!)";
    A.time = "13:00 to 14:00";
    A.venue = "Lab";
    data["ifest"]["Blind C"] = A;

    A.day = 3;
    A.info = "Concert by Asees Kaur, Get ready to feel the beat, the rhythm, and the soul of the music as soon as she gets on stage.";
    A.time = "20:30 to 23:00";
    A.venue = "SAC";
    data["ifest"]["Concert"] = A;

    A.day = 1;
    A.info = "Badminton Contest";
    A.time = "20:00";
    A.venue = "Badminton Court";
    data["Concours"]["Badminton"] = A;

    A.day = 1;
    A.info = "Volleyball Match";
    A.time = "21:00";
    A.venue = "SAC Ground";
    data["Concours"]["Volleyball"] = A;

    A.day = 1;
    A.info = "Football match";
    A.time = "19:30";
    A.venue = "SAC Ground";
    data["Concours"]["Football"] = A;

    A.day = 1;
    A.info = "Basketball Match";
    A.time = "21:45";
    A.venue = "Basketball Court";
    data["Concours"]["Basketball"] = A;

    A.day = 2;
    A.info = "Chess battle";
    A.time = "10:00";
    A.venue = "CEP 004";
    data["Concours"]["Chess"] = A;

    A.day = 2;
    A.info = "Cricket";
    A.time = "07:30";
    A.venue = "SAC Ground";
    data["Concours"]["Cricket"] = A;

    A.day = 2;
    A.info = "Table Tennis";
    A.time = "13:00";
    A.venue = "SAC-2";
    data["Concours"]["Table Tennis"] = A;

    A.day = 3;
    A.info = "Cricket";
    A.time = "10:00";
    A.venue = "SAC Ground";
    data["Concours"]["Cricket"] = A;

    A.day = 3;
    A.info = "Carrom";
    A.time = "13:00";
    A.venue = "SAC-2";
    data["Concours"]["Carrom"] = A;

    A.day = 3;
    A.info = "Football";
    A.time = "18:30";
    A.venue = "SAC Ground";
    data["Concours"]["Football"] = A;

    A.day = 4;
    A.info = "Cricket";
    A.time = "07:30";
    A.venue = "SAC Ground";
    data["Concours"]["Cricket"] = A;

    A.day = 4;
    A.info = "Chess";
    A.time = "11:00";
    A.venue = "CEP 004";
    data["Concours"]["Chess"] = A;

    A.day = 4;
    A.info = "Table Tennis";
    A.time = "15:00";
    A.venue = "SAC-2";
    data["Concours"]["Table Tennis"] = A;

    A.day = 4;
    A.info = "Volleyball";
    A.time = "19:00";
    A.venue = "SAC Ground";
    data["Concours"]["Volleyball"] = A;

it10:
    cout << endl;
    cout <<BRIGHT_BLUE<< "1.to Show all event" <<RESET<< endl;
    cout <<BRIGHT_BLUE<< "2.to Show Particular event" <<RESET<< endl;
    cout <<BRIGHT_BLUE<< "3.to exit" <<RESET<< endl;
    cout << "Enter Choice: ";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
    {
        cout << endl;
        cout <<BRIGHT_BLUE<< "1.to show all event of Synaps: " <<RESET<< endl;
        cout <<BRIGHT_BLUE<< "2.to show all event of ifest: " <<RESET<< endl;
        cout <<BRIGHT_BLUE<< "3.to show all event of councers: " <<RESET<< endl;
        cout << "Enter Choice: ";
        int y;
        cin >> y;
        switch (y)
        {
        case 1:
        {
            cout << endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout <<BRIGHT_GREEN<< "Synapse all events: " <<RESET<< endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout << endl;
            for (auto ev : data["Synapse"])
            {
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Event Name" << ": " << ev.first <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Day" << ": " << ev.second.day <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Time" << ": " << ev.second.time <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Venue" << ": " << ev.second.venue <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Information" << ": " << ev.second.info <<RESET<< endl;
                cout <<YELLOW<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            goto it10;
        }
        case 2:
        {
            cout << endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout <<BRIGHT_GREEN<< "ifest all events: " <<RESET<< endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout << endl;
            for (auto ev : data["ifest"])
            {
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Event Name" << ": " << ev.first <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Day" << ": " << ev.second.day <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Time" << ": " << ev.second.time <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Venue" << ": " << ev.second.venue <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Information" << ": " << ev.second.info <<RESET<< endl;
                cout <<YELLOW<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            goto it10;
        }
        case 3:
        {
            cout << endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout <<BRIGHT_GREEN<< "Concours all events: " <<RESET<< endl;
            cout <<BLUE<< "-------------------" <<RESET<< endl;
            cout << endl;
            for (auto ev : data["Concours"])
            {
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Event Name" << ": " << ev.first <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Day" << ": " << ev.second.day <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Time" << ": " << ev.second.time <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Venue" << ": " << ev.second.venue <<RESET<< endl;
                cout <<BRIGHT_MAGENTA<< left << setw(12) << "Information" << ": " << ev.second.info <<RESET<< endl;
                cout <<YELLOW<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            goto it10;
        }
        default:
        {
            cout <<RED<< "You enter invalid input..!!" <<RESET<<endl;
            goto it10;
        }
        }
        break;
    }
    case 2:
    {
        cout << endl;
        cout <<BRIGHT_CYAN<< "1.to show particular event of Synaps: " <<RESET<< endl;
        cout <<BRIGHT_CYAN<< "2.to show particular event of ifest: " <<RESET<< endl;
        cout <<BRIGHT_CYAN<< "3.to show particular event of councers: " <<RESET<< endl;
        cout << "Enter Choice: ";
        int y;
        cin >> y;
        switch (y)
        {
        case 1:
        {
            cout << endl;
            string event_name;
            cin.ignore();
            cout << "Enter Event name: ";
            getline(cin, event_name);
            if (data["Synapse"].count(event_name) > 0)
            {
                cout << endl;
                auto ev = data["Synapse"][event_name];
                cout <<YELLOW<< "Event Detials:" <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(12) << "event held by: Synapse" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Event Name" << ": " << event_name <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Day" << ": " << ev.day <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Time" << ": " << ev.time <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Venue" << ": " << ev.venue <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Information" << ": " << ev.info <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            else
            {
                cout <<RED<< "Event not found." <<RESET<< endl;
                cout << endl;
            }
            goto it10;
        }
        case 2:
        {
            cout << endl;
            string event_name;
            cin.ignore();
            cout << "Enter Event name: ";
            getline(cin, event_name);
            if (data["ifest"].count(event_name) > 0)
            {
                cout << endl;
                auto ev = data["ifest"][event_name];
                cout <<YELLOW<<"Event Detials:" <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(12) << "event held by: I-FEST" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Event Name" << ": " << event_name <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Day" << ": " << ev.day <<RESET<<endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Time" << ": " << ev.time <<RESET<<endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Venue" << ": " << ev.venue <<RESET<< endl;
                cout <<BRIGHT_YELLOW<<left << setw(13) << "Information" << ": " << ev.info <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            else
            {
                cout << "Event not found." << endl;
                cout << endl;
            }
            goto it10;
        }
        case 3:
        {
            cout << endl;
            string event_name;
            cin.ignore();
            cout << "Enter Event game: ";
            getline(cin, event_name);
            if (data["Concours"].count(event_name) > 0)
            {
                cout << endl;
                auto ev = data["Concours"][event_name];
                cout <<YELLOW<< "Event Detials:" <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(12) << "event held by: Concours" <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Game Name" << ": " << event_name <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Day" << ": " << ev.day <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Time" << ": " << ev.time <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Venue" << ": " << ev.venue <<RESET<< endl;
                cout <<BRIGHT_YELLOW<< left << setw(13) << "Information" << ": " << ev.info <<RESET<< endl;
                cout <<BLUE<< "---------------------------------------------------------------------------------------------------------------------------------------------" <<RESET<< endl;
            }
            else
            {
                cout <<RED<< "Event not found." <<RESET<< endl;
                cout << endl;
            }
            goto it10;
        }
        default:
        {
            cout <<RED<< "You enter invalid input..!!" <<RESET<< endl;
            break;
        }
        }
        break;
    }
    case 3:
    {
        return;
    }
    }
}
