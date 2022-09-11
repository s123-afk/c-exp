unsigned int base_reten(string to_convert,int base){
	map<char,int> base_map;
	base_map['0'] = 0;
	base_map['1'] = 1;
	base_map['2'] = 2;
	base_map['3'] = 3;
	base_map['4'] = 4;
	base_map['5'] = 5;
	base_map['6'] = 6;
	base_map['7'] = 7;
	base_map['8'] = 8;
	base_map['9'] = 9;
	base_map['A'] = 10;
	base_map['B'] = 11;
	base_map['C'] = 12;
	base_map['D'] = 13;
	base_map['E'] = 14;
	base_map['F'] = 15;	
	unsigned int multiplier=1;
	unsigned int result=0;
	for(int i=to_convert.size()-1;i>=0;i--){
		result+=base_map[to_convert[i]]*multiplier;
		multiplier*=base;
	}
	return result;
	
}
