void message(string name, string surname,string albumNumber)
{
	fstream file;
	file.open("message.txt", ios::out);
	file << name << "; " << surname << "; " << albumNumber << endl;
	file.close();
}