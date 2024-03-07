//
// Created by 76284 on 2023/3/8.
//
#include <nlohmann/json.hpp>

#include <fstream>
#include <iostream>
using json = nlohmann::json;
bool is_date(std::string str){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y=std::atoi(str.substr(0,2).c_str());
    int m=std::atoi(str.substr(2,2).c_str());
    int d=std::atoi(str.substr(4,2).c_str());

    if(y<=23){
        y+=2000;
    }else{
        y+=1900;
    }
    if((y%4==0&&y%100!=0)||(y%400==0)){//如果是闰年
        month[1] = 29;
        if(0<d&& d<=month[m-1] && m>0 && m<=12)
            return true;
        else
            return false;
    }
    else{
        if(0<d&& d<=month[m-1] && 0<m && 12>=m)
            return true;
        else
            return false;
    }

    return false;
}
int main(){
    std::string str=std::string("200229");

    std::cout<<is_date(str)<<std::endl;
    //json j;
//    char * data_path;
//    if(!(data_path= getenv("FinraDataPath"))){
//        perror("please set env FinraDataPath");
//    }

//    char* data_path="/tmp/dzl/Lumine-benchmarks/Experiments/05/data/";
//    std::ifstream jfile(std::string(data_path)+"portfolios.json");
//    jfile>>j;
//    //char output[] = "succeed!\n";
//    int tilength = j["1234"].size();
//    bool valid=true;
//    for (int i = 0; i < tilength; i++) {
//        auto str=j["1234"][i].at("LastPx").get<std::string>();
//        auto divide_place=str.find(".");
//        auto len_a=divide_place;
//        auto len_b=str.length()-divide_place-1;
//        if(!((len_a==3&&len_b==6)||(len_a==4&&len_b==5)||(len_a==5&&len_b==4)||(len_a==6&&len_b==3))){
//            valid = false;
//            break;
//        }
//    }
//    if (!valid){
//        printf("123");
//    }

    return 0;
}
