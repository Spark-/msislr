//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------


int findElement(char ch, int position, std::string const& text){
	while(text[position++] != ch);
	return position;
}

void removeSequence(int start, int end, std::string &text){
	text.erase(start, end-start);
}

void editText(&std::string text){
	for(int i=0; string[i]!='\0'; i++){
		if(string[i]=='#')	removeSequence(i, findElement('\n', i, text), text);
		if(string[i]=='/' && string[i+1] =='/') removeSequence(i, findElement('\n', i, text), text);
		if(string[i]=='"')	removeSequence(i, findElement('"', i, text), text);
		if(string[i]=='\'')	removeSequence(i, findElement('\'', i, text), text);
	}
	std::regex vocabulary("int|double|bool|char|void|string|namespace|std");
	for(std::sregex_iterator it(text.begin(), text.end(), vocabulary ), end; it != end; it++){
		regex_replace(text, it, "");
	}
}

std::string analizer(std::string text){
	editText(text);
	return text;

	std::map<std::string, int> textData;
	std::pair< std::map<std::string, int>::iterator, bool> mapControl;

}

#endif
