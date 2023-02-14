#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>


    int a,b,c,d,e,f,g,h,i1,j5,k,l,m,n;
    char arr[5][100] = { "13 No","6 No","6 No 2","7 No","8 No"};
    char A[17][100]={"Achim Paribahan","Agradut-Boishakhi","Airport Bangabandhu Avenue","Akik Paribahan","Al Madina Plus One","Al Makka Transport","Alif Enterprise","Alif Enterprise 2","Alif Enterprise 3","Alike","Anabil","Ark Transport","Ashirbad Paribahan","Ashulia Classic","Asmani Paribahan","Ayat","Azmery Glory"};
    char B[20][100] = {"BRTC","BRTC 2","BRTC 3","BRTC 4","BRTC 5","BRTC 6","Bahon","Balaka Paribahan","Basumati","Basumati Transport","Best Transport","Bhuiyan Paribahan","Bihanga","Bihanga Paribahan","Bihanga Paribahan 2","Bikalpa Auto Service","Bikalpa City Super Service","Bikash Paribahan","Bondhu Paribahan","Brothers"};
    char C[4][100] = {"Cantonment Bus Service","Cantonment Mini Service","Champion","City Link"};
    char D[9][100] = {"D link","D One Transport","Desh Bangla","Dhaka Chaka","Dhaka Chaka 2","Dhaka Paribahan","Dipon","Dishari Paribahan"};
    char EFG[7][100] = {"ETC Transport","FTCL","First Ten","Gazipur Paribahan","Grameen","Grameen Shubheccha","Green Dhaka"};
    char HIJ[6][100] = {"Haji Transport","Himachol","Itihash Paribahan","J M Super Paribahan","Jabale Nur Paribahan","Janjabil"};
    char KL[5][100] = {"Kanak","Khajababa Paribahan","Kironmala Paribahan","Labbaik","Lams Paribahan"};
    char M[14][100] = {"M M Lovely","MTCL 2","Malancha Transport","Manjil Express","Meghla Transport","Meshkat Transport","Midline","Mirpur Link","Mirpur Metro Service","Mirpur United Service","Modhumoti Paribahan","Mohona","Moitri","Moumita Transport"};
    char NOP[12][100] = {"Nilachol","Nobokoli Paribahan","Nur E Makka Paribahan","Omama International","One Transport","Pallabi Super Service","Paristhan Paribahan","Power Paribahan","Prattay","Pravati Banasree Paribahan","Prochesta","Projapoti Paribahan"};
    char R[8][100] = {"Rabrab Paribahan","Raida","Raja City","Rajanigandha","Rajdhani Super Service","Ramzan","Runway Express","Rupa Paribahan"};
    char S[18][100] = {"Safety Druti","Salsabil","Savar Paribahan","Shadhin","Shadhin Express","Shahria Enterprise","Shahriar Paribahan","Shatabdi Transport","Shikhar Paribahan","Shikor Paribahan","Shubheccha","Shuvojatra","Skyline","Smart Winner","Somota Paribahan","Somoy","Somoy Niyantran","Supravat Special Service"};
    char T[12][100] = {"Talukdar","Tanjil Paribahan","Tetuliya Paribahan","The New Visison","Thikana","Thikana Express","Trans Silva","Trust Transport Services","Trust Transport Services (AC)","Trust Transport Services 2","Trust Transport Services 3","Turag"};
    char VWZ[5][100] = {"VIP 27","Victor Classic","Victor Paribahan","Welcome","Zarif"};
    char route[142][35][100] = {
   {"Mohammadpur","Shankar","Star Kabab","Dhanmondi 15","Jigatola","City College","New Market","Nilkhet","Azimpur"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Gulshan 2","Natun Bazar"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Wireless Mor","Gulshan 1","Gulshan 2","Natun Bazar"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Gulistan","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Jatrabari","Jonopath Mor","Sayedabad","Motijheel","Daynik Bangla Mor","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli"},
   {"Gabtoli","Technical","Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Banasree","Demra Staff Quarter"},
   {"Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","Agargaon","Ziya Uddan","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Shahjadpur","Bashtola","Natun Bazar"},
   {"Fulbaria","Golap Shah Mazar","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahanagir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar"},
   {"Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel","Kamalapur"},
   {"Motijheel","Gulistan","GPO","Paltan","Kakrail","Malibagh","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","ECB Square","Kalshi","Purobi","Mirpur -10","Mirpur -2","Mirpur - 1"},
   {"Mirpur -1","Mirpur -2","Mirpur - 10","Kazipara","Shewrapara","Agargaon","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Rampura Bridge","Banasree"},
   {"Shia Masjid","Japan Garden City","Adabor","Shyamoli","Shishu Mela","Agargaon","Ziya Uddan","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Link Road","Badda","Maddhya Badda","Merul","Rampura","Banasree"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Fantasy Kingdom"},
   {"Balughat","Signal","CMH","Garrison","Adamjee College","Workshop","Jahangir Gate","Farmgate","Bangla Motor","Shahbag"},
   {"Sign Board","Shonir Akhra","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Gazipur Chowrasta"},
   {"Ghatar Char","Mohammadpur","Asad Gate","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara","Dhour"},
   {"Duaripara","Rupnagar Abashik Mor","Shiyal Bari","Proshika Mor","Mirpur -2","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Nobinagar","Baipayl","Jamgora","Fantasy Kingdom","Zirabo","Ashulia Bazar","Kamarpara","Abdullahpur","House Building","Airport","Kuril Bishwa Road","Shewra","MES","Kakoli","Banani","Chairman Bari","Mohakhali"},
   {"Dhour","Abdullahpur","House Building","Azampur","Rajlakshmi","Jasimuddin","Airport","Khilkhet","Kuril Bishwa Road","Jamuna Future Park","Nadda","Natun Bazar","Shahjadpur","Uttar Badda Bazar","Badda","Madhya Badda","Merul","Rampura","Banasree","Demra Staff Quarter","Tarabo","Madanpur"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Kamalapur"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Bypass","Konabari","Chandra"},
   {"Madanpur","Kanchpur","Chittagong Road","Sign Board","Shonir Akhra","Jatra Bari","Sayedabad","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","Shyamoli","Kallyanpur","Technical","Gabtoli","Savar"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Kakoli","Banani","Staff Road","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Darussalam","Technical","Gabtoli","Amin Bazar","Hemayetpur","Baipayl","Zirani Bazar","Chandra"},
   {"Mohammadpur","Asad Gate","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Press Club","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Bhulta","Kanchan Bridge","Nila Market","300 Feet","Bashundhara Ra","Kuril Bishwa Road"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Mirpur -1","Ansar Camp","Bangla College","Technical","Darussalam","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Arambagh","Kamalapur","Mugdapara","Basabo","Khilgaon"},
   {"Sayedabad","Manik Nagar","TT Para","Kamalapur","Malibagh","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Banani","Kakoli","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Manik Khan","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj","Mawa"},
   {"Gabtoli","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Mirpur-10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Ittefaq","Sayedabad","Jatrabari"},
   {"Japan Garden City","Ring Road","Adabor","Shyamoli","Shishu Mela","Agargaon","Zia Uddan","Bijoy Sarani","Old Airport","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur"},
   {"Mirpur -12","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Agargaon","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda"},
   {"Duaripara","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Tolarbag","Ansar Camp","Mirpur -1","Mirpur -2","Proshika Mor","Rupnagar","Duaripara"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Gulistan","Motijheel"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 27","Dhanmondi 32","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara","Dhour"},
   {"Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli","Aminbazar","Hemayetpur","Savar"},
   {"Mirpur -14","Kochukhet","Mirpur Cantonment","Shainik Club","Kakoli","Banani"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur","Bosila","Ghatar Char"},
   {"Dhamrai","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Fulbaria"},
   {"Kalampur","Dhamrai","Nobinagar","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","College Gate","Asad Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Kamarpara"},
   {"Azimpur","Nilkhet","New Market","City College","Science Lab","Katabon","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Police Plaza","Gulshan 1","Gulshan 2"},
   {"Banani","Gulshan 2","Natun Bazar"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Kakoli","Banani","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Board Bazar","Gazipur Chowrasta","Shibbari"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Jakir Hossain Road","Salimullah Road","Tajmahal Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Motijheel","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta","Shibbari"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Fulbaria"},
   {"Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Rampura","Merul","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Jalkuri","Shibu Market","Chashara","Metro Hall"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli","Aminbazar","Hemayetpur","Savar","Nobinagar","Baipayl","Zirani Bazar","Nandan Park","Chandra"},
   {"Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari"},
   {"Kamrangirchar","Bosila","Mohammadpur","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Ansar Camp","Mirpur -1","Rupnagar","Birulia","Ashulia","Zirabo","Narshinghapur","Sura Bari","Kashimpur","Jarun","Konabari"},
   {"Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","Mohammadpur"},
   {"Dhupkhola","Dayaganj","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Sign Board","Kanchpur","Bhulta"},
   {"Mohammadpur","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Ittefaq","Sayedabad","Jonopath Mor","Jatrabari","Shonir Akhra","Sign Board","Chittagong Road"},
   {"Khilgaon","Basabo","Mugdapara","Kamalapur","Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"ECB Square","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Mirpur -1","Ansar Camp","Tolarbag","Bangla College","Technical","Darussalam","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","IDB","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Link Road","Badda","Merul","Rampura","Banasree","Demra Staff Quarter"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Fantasy Kingdom"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Jalkuri","Shibu Market","Chashara"},
   {"Paturia","Manikganj","Nobinagar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Chittagong Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Fulbaria","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Aftab Nagar"},
   {"Motijheel","Daynik Bangla Mor","Paltan","Press Club","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli","Amin Bazar","Hemayetpur","Savar","Nobinagar","Baipayl","Zirani Bazar","Nandan Park"},
   {"Gabtoli","Technical","Ansar Camp","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara"},
   {"Bosila","Mohammadpur","Asad Gate","College Gate","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Narshinghapur","Sura Bari","Kashimpur","Jarun","Konabari"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Fulbaria","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta","Joydebpur","Sreepur","Baromi"},
   {"Mawa","Keraniganj","Babu Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Bosila","Mohammadpur","Asad Gate","College Gate","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara"},
   {"Gabtoli","Technical","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Purobi","Kalshi","ECB Square","MES","Banani","Kakoli","Chairman Bari","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Rampura Bridge","Banasree"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Diabari"},
   {"Postogola","Jurain","Dayaganj","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Basila","Ghatar Char"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Jatrabari","Sayedabad","Gulistan","GPO","Press Club","Shahbag","Science Lab","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Hemayetpur","Gabtoli","Technical","Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Banasree","Demra Staff Quarter"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Bata Signal","Katabon","Shahbag","Motsho Bhaban","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Banasree","Demra Staff Quarter"},
   {"Keraniganj","Kadamtoli","Babu Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Press Club","Motsho Bhaban","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Agargaon","Shewrapara","Kazipara","Mirpur -10","Mirpur -11","Mirpur -12","ECB Square"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Gazipur"},
   {"Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Shahbag","High Court","Press Club","GPO","Golap Shah Mazar","Sadarghat"},
   {"Bosila","Mohammadpur","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Railgate","Rampura","Banasree","Demra Staff Quarter"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj","Mawa"},
   {"Postogola","Jurain","Gandaria","Dayaganj","Tikatuli","Ittefaq","Motijheel","Arambagh","Fakirapool","Kakrail","Motsho Bhaban","Shahbag","Katabon","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli"},
   {"Jurain","Gandaria","Dayaganj","Tikatuli","Ittefaq","Motijheel","Arambagh","Fakirapool","Kakrail","Motsho Bhaban","Shahbag","Katabon","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Adabor","Japan City Garden"},
   {"Motijheel","Paltan","Kakrail","Malibagh","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Kamarpara"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari"},
   {"Mirpur -12","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Manikganj","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Shahbag","High Court","Press Club","GPO","Golap Shah Mazar","Fulbaria"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Panthapath","Kawran Bazar","Bot Tola","Nabisco","Mohakhali","Wireless Mor","Gulshan 1","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road"},
   {"Chiriakhana","Rainkhola","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Chittagong Road"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board","Sanarpar","Chittagong Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Shia Masjid","Japan City Garden","Ring Road","Adabor","Shyamoli","Shishu Mela","Agargaon","Taltola","Shewrapara","Kazipara","Mirpur -10","Mirpur -11","Purobi","Pallabi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Dholairpar","Jurain","Postagola","Hasnabad","Rajendrapur","Kuchiamura","Nimtola","Shonbari Sreenagar"},
   {"Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","Science Lab","Bata Signal","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jonopath Mor","Jatrabari"},
   {"Mirpur D.O.H.S","Kalshi","ECB Square","Garrison","Adamjee Cantonment","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Mirpur D.O.H.S","Kalshi","ECB Square","Garrison","Adamjee Cantonment","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar"},
   {"Mirpur -10","Mirpur -13","Mirpur -14","Kochukhet","Shainik Club","Banani"},
   {"Mirpur -10","Mirpur -13","Mirpur -14","Kochukhet","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag"},
   {"Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 27","Dhanmondi 32","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Diabari"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road"},
   {"Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel"},
   {"Mirpur -14","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Kamalapur"}
     };



typedef struct login{
    char fname[50];
    char lname[50];
    char username[50];
    char password[50];
}login;

void logins()
{
    system("CLS");
    char username[50];
    char password[50];
    FILE *log;
    log = fopen("Login1.txt","r");
    login L;
    printf("\nUser ID: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s",&password);
    int t=0;
    while(fread(&L,sizeof(login),1,log))
    {
        if(strcmp(username,L.username)==0 && strcmp(password,L.password)==0)
        {

            printf("Successfully logged in\n");


            t=1;
            break;

        }

    }
    fclose(log);
    if(t!=1)
    {

        printf("Please enter correct user id and password\n");
        getch();
        logins();
    }
}

void registe(){
    system("CLS");
    FILE *log;

    login id ;
    login L;
    printf("\nEnter first name: ");
    scanf("%s",id.fname);
    printf("Enter last name: ");
    scanf("%s",id.lname);
    printf("Enter user name: ");
    scanf("%s",id.username);
    printf("Enter password: ");
    scanf("%s",id.password);

    log = fopen("login1.txt","a+");

    while(fread(&L,sizeof(login),1,log))
    {
        if(strcmp(id.username,L.username)==0)
        {
            printf("Please enter different user name\n");
            getch();
            registe();
            break;
        }
    }
    fwrite(&id,sizeof(login),1,log);

    fclose(log);

    printf("\n\n Your user name is your userid\n");
    printf("Now log in with user id and password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    logins();
}



void names(){
     printf("#\n");
   for(a=0;a<5;a++){
         printf("  %s\n",arr[a]);

   }

    printf("A\n");
   for(b=0;b<17;b++){
         printf("  %s\n",A[b]);
   }

    printf("B\n");
   for(c=0;c<20;c++){
         printf("  %s\n",B[c]);
   }

    printf("C\n");
   for(d=0;d<4;d++){
         printf("  %s\n",C[d]);
   }

    printf("D\n");
   for(e=0;e<9;e++){
         printf("  %s\n",D[e]);
   }

    printf("E-F-G\n");
   for(f=0;f<7;f++){
         printf("  %s\n",EFG[f]);
   }

    printf("H-I-J\n");
   for(g=0;g<6;g++){
         printf("  %s\n",HIJ[g]);
   }

    printf("K-L\n");
   for(h=0;h<5;h++){
         printf("  %s\n",KL[h]);
   }

    printf("M\n");
   for(i1=0;i1<14;i1++){
         printf("  %s\n",M[i1]);
   }

    printf("N-O-P\n");
   for(j5=0;j5<12;j5++){
         printf("  %s\n",NOP[j5]);
   }

    printf("R\n");
   for(k=0;k<8;k++){
         printf("  %s\n",R[k]);
   }

    printf("S\n");
   for(l=0;l<18;l++){
         printf("  %s\n",S[l]);
   }

    printf("T\n");
   for(m=0;m<12;m++){
         printf("  %s\n",T[m]);
   }

    printf("V-W-Z\n");
   for(n=0;n<5;n++){
         printf("  %s\n",VWZ[n]);
   }

}



int search(){

     char W[100];
                scanf("%s", &W);

   int Z = 0;


   for(a=0;a<5;a++){
        Z++;
        if(strcmp(arr[a],W)== 0){

             printf("  %s\n",arr[a]);

             return Z;

         }

   }

   for(b=0;b<17;b++){
        Z++;
        if(strcmp(A[b],W)== 0){
             printf("  %s\n",A[b]);

            return Z;
         }

   }

   for(c=0;c<20;c++){
        Z++;
        if(strcmp(B[c],W)== 0){
             printf("  %s\n",B[c]);

             return Z;
         }

   }

   for(d=0;d<4;d++){
        Z++;
        if(strcmp(C[d],W)== 0){
             printf("  %s\n",C[d]);

             return Z;
         }

   }

   for(e=0;e<9;e++){
        Z++;
        if(strcmp(D[e],W)== 0){
             printf("  %s\n",D[e]);

             return Z;
         }

   }

   for(f=0;f<7;f++){
        Z++;
        if(strcmp(EFG[f],W)== 0){
             printf("  %s\n",EFG[f]);

             return Z;
         }

   }

   for(g=0;g<6;g++){
        Z++;
        if(strcmp(HIJ[g],W)== 0){
             printf("  %s\n",HIJ[g]);

             return Z;
         }

   }

   for(h=0;h<5;h++){
        Z++;
        if(strcmp(KL[h],W)== 0){
             printf("  %s\n",KL[h]);

              return Z;
         }

   }

   for(i1=0;i1<14;i1++){
        Z++;
        if(strcmp(M[i1],W)== 0){
             printf("  %s\n",M[i1]);
            return Z;
         }

   }

   for(j5=0;j5<12;j5++){
        Z++;
        if(strcmp(NOP[j5],W)== 0){
             printf("  %s\n",NOP[j5]);

            return Z;
         }

   }

   for(k=0;k<8;k++){
        Z++;
        if(strcmp(R[k],W)== 0){
             printf("  %s\n",R[k]);

              return Z;
         }

   }

   for(l=0;l<18;l++){
        Z++;
        if(strcmp(S[l],W)== 0){
             printf("  %s\n",S[l]);

             return Z;
         }

   }

   for(m=0;m<12;m++){
        Z++;
        if(strcmp(T[m],W)== 0){
             printf("  %s\n",T[m]);

            return Z;
         }

   }

   for(n=0;n<5;n++){
        Z++;
        if(strcmp(VWZ[n],W)== 0){
             printf("  %s\n",VWZ[n]);

              return Z;
         }

   }

     // return Z;
}

void search1(int Sea){


   int Z = 0;


   for(a=0;a<5;a++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",arr[a]);

             break;

         }


   }

   for(b=0;b<17;b++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",A[b]);

             break;
         }

   }

   for(c=0;c<20;c++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",B[c]);

             break;
         }

   }

   for(d=0;d<4;d++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",C[d]);
                  return;
             break;
         }

   }

   for(e=0;e<9;e++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",D[e]);

             break;
         }

   }

   for(f=0;f<7;f++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",EFG[f]);

             break;
         }

   }

   for(g=0;g<6;g++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",HIJ[g]);

             break;
         }

   }

   for(h=0;h<5;h++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",KL[h]);

             break;
         }

   }

   for(i1=0;i1<14;i1++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",M[i1]);

             break;
         }

   }

   for(j5=0;j5<12;j5++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",NOP[j5]);

             break;
         }

   }

   for(k=0;k<8;k++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",R[k]);

             break;
         }

   }

   for(l=0;l<18;l++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",S[l]);

             break;
         }

   }

   for(m=0;m<12;m++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",T[m]);

             break;
         }

   }

   for(n=0;n<5;n++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",VWZ[n]);

             break;

         }

   }
   return;
}


void Route1(int z5)
{
     int i,j;
     i = z5;
            printf("Bus -%d  = ",z5+1);
       for(j=0;j<35;j++){
            printf("%s  ", route[i][j]);
            }
     printf("\n");

    return;
}




void Route()
{
    char b1[100],c1[100];

    printf("Enter Source Place name - \n");
    scanf("%s",&b1);

    printf("Enter Destination Place name - \n");
     scanf("%s",c1);

int i,j,cnt=0,q1=0,q2=0,q3=0, k=0, q4=0,arr[142];

     for(i=0;i<142;i++){

     cnt = 0;
       for(j=0;j<35;j++){

     if(strcmp(route[i][j],b1)==0){
            printf("\n%s\n", route[i][j]);
            cnt = 1;
            break;
     }

  }
  for(j=0;j<35;j++){

     if(strcmp(route[i][j],c1)==0){
            printf("%s\n", route[i][j]);
            cnt= cnt+2;
            break;
     }
  }

  if(cnt == 0) {// printf ("No match\n");
                q1++;}
  if(cnt == 1){ //printf("First match\n");
               q2++;}
  if(cnt==2) { //printf("Second match\n");
               q3++;}
  if(cnt==3){ //printf("Both matched\n");
              arr[k] = i;
              k++;
              q4++;}


  printf("\n\n");
}

//printf("No match bus %d\n",q1);
printf("First match bus %d\n",q2);
printf("Second match bus %d\n",q3);
printf("Both match bus %d\n",q4);
printf("\n");

int z3;
for(i=0;i<q4;i++){
    z3 = arr[i];
    search1(z3);
    printf("\n");
}

}





int main()
{
    int choice,choice1,choice3;
    printf("\tWelcome to this Bus Route Program.\n");
    printf(" This Program will provide available buses within Dhaka city and their route\n ");
    printf("##To access the program you must have a User ID here.\n");
    printf("\n>>If You are new here then, Press '1' for Registration\n");
    printf(">>If you have an ID, Press '2' for Log in\n");
    printf("\t Let's Go & Press - ");


    scanf("%d",&choice);
    if(choice==1)
    {
        system("CLS");
        registe();
    }

    else
    {
        system("CLS");
        logins();
    }

    system("CLS");
    printf("\t Now lets check it out--\n");

    int fu;

        while(choice1 != 0)
    {

        printf("\n1. Show Available Bus Names\n");
        printf("2. Search A Bus\n");
        printf("3. Show A bus Route\n");
        printf("4. Search a bus for X to Y\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice1);

        switch(choice1)
        {
            case 1:
                printf("Here are the 142 bus names with in Dhaka City - \n ");
                names();
                break;
            case 2:
                printf("\nWe know there are 142 buses in Dhaka listed here.\n");
                printf("Let's see if the bus you are searching are available here or not.\n");
                printf("Enter the name of the bus you are searching -  ");
                fu = search();

                break;


            case 3:
                printf("Here are the 142 bus names with in Dhaka City - \n ");
                names();
                while(1){
                printf("Enter a bus name to show it's route - ");

                fu = search();
                printf("%d\n",fu-1);
               // Route1(fu);

                printf("\nDo You want to see another bus route?\n");
                printf("If yes Press '1' else Press '2'\n");
                int choice2;
                scanf("%d",&choice2);

                if(choice2 == 2) break;
                }

                break;

            case 4:
                Route();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-4");
                break;
        }

        printf("\n\n\n\n\n");

    }
    getch();
    printf("Thank You\n");
    printf("\t  Z2M  \t\n");
    return 0;
}






