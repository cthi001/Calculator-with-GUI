int main() {
	/*	system("clear");
		std::cout  <<std::setw(15) <<std::setfill(' ')<<" "<< "HONDA-CRV CALCULATOR"<< std::endl;
		std::cout << " "<<std::setw(50) << std::setfill('_')<< " ";
		std::cout <<std::endl;
		std::cout << "||"<<std::setfill(' ')<<std::right<<std::setw(47)<<b<<"||"<< std::endl;
		std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
pipe(pip);
pid_t s = fork();*/
//pid_t x = fork();
//OUTPUT FORK()
//if (s == 0) {
	while (1) {
		//close(pip[1]);
		//read(pip[0],&c,sizeof(char));		
		system("clear");
		fflush(stdout);
		std::cout  <<std::setw(15) <<std::setfill(' ')<<" "<< "HONDA-CRV CALCULATOR"<< std::endl;
		std::cout << " "<<std::setw(50) << std::setfill('_')<< " ";
		std::cout <<std::endl;
		std::cout << "||"<<std::setfill(' ')<<std::right<<std::setw(47)<<b<<"||"<< std::endl;
		std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
		std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
		std::cout <<"||"<<std::setw(5)<<" "<< "'q'--QUIT "<< std::setw(5)<<" "<< "'d'--BACKSPACE ";
		std::cout<<std::setw(12)<< " " << "||"<<std::endl;		
		std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
		std::cout <<"||"<<std::setw(5)<< " " << "'='--COMPUTE "<< std::setw(2)<<" "<<"'x'--CLEAR"<<std::setw(17)<< " "<<"||"<<std::endl;
		std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
		system ("/bin/stty raw");
		c = getchar();
		system ("/bin/stty cooked");
		if (c == 'q'){std::cout << "\b";break;}
		else if (c == 'd'){if(b.empty()){continue;}b.pop_back();}
		else if (c == 'x') {b.clear();}
		else if(c == '=') {
			if (!valid(b)){
			b.clear();
			b="INVALID INPUT";
			}
			else{
			//compute here
			}
		}
		else {
			b+=c;
			if (!valid(b)){b.clear();}
		}
}
//}
//INPUT FORK()
/*else if (s >0) {
	while(c != 'q') {
		system ("/bin/stty raw");
		c= getchar();
		std::cout<<"\b"<<std::endl;
		system ("/bin/stty cooked");
		system("clear");
		write(pip[1],&c,sizeof(char));
		if (c == 'q') {break;}
}
wait(NULL);exit(2);
}
else {exit(1);}
*/
std::cout<<std::endl;
return 0;
}
