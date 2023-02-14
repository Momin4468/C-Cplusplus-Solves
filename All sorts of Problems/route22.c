#include<stdio.h>
#include<conio.h>

int main()
{
    int k = 0,b_num[142];
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


char b1[100],c1[100];

gets(b1);
gets(c1);




int i,j,cnt=0,q1=0,q2=0,q3=0,  q4=0;

     for(i=0;i<142;i++){
            printf("Bus -%d  = ",i+1);
      // for(j=0;j<35;j++){
         //   printf("%s  ", route[i][j]);
        //    }
       // if(route[i][j]!= "") printf("->");}
     cnt = 0;
       for(j=0;j<35;j++){

     if(strcmp(route[i][j],b1)==0){
            // printf("Got one\n");
            printf("\n%s\n", route[i][j]);
            // j = i+1;
             cnt = 1;
             break;
     }

  }
  for(j=0;j<35;j++){

     if(strcmp(route[i][j],c1)==0){
           //  printf("Got two\n");
            printf("%s\n", route[i][j]);
             cnt= cnt+2;
             break;
     }

  }

  if(cnt == 0) { printf ("No match\n"); q1++;}
  if(cnt == 1){ printf("First match\n"); q2++;}
  if(cnt==2) { printf("Second match\n"); q3++;}
  if(cnt==3){ printf("Both matched\n");
             q4++;

             b_num[k]  = i+1;
             k++;
             }




  printf("\n\n");
}
for(k=0;k<q4;k++) printf("%d ",b_num[k]);
printf("\nNo match bus %d\n",q1);
printf("First match bus %d\n",q2);
printf("Second match bus %d\n",q3);
printf("Both match bus %d\n",q4);


printf("\n");

getch();
}
