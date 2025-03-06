/*Halcyon - net address*/
#include<bits/stdc++.h>
using namespace std;
string ipv4ToBinary(const string &ip) {
    stringstream ss(ip);
    string token;
    string binaryIP;
    while(getline(ss, token, '.')) {
        int octet = stoi(token);
        bitset<8> bs(octet);
        binaryIP += bs.to_string() + ".";
    }
    if (!binaryIP.empty()) {
        binaryIP.pop_back();
    }
    
    return binaryIP;
}
vector<int> parseIP(const string &ip) {
    vector<int> parts;
    stringstream ss(ip);
    string token;
    while(getline(ss, token, '.')) {
        parts.push_back(stoi(token));
    }
    return parts;
}
string getNetworkAddress(const string &ip, const string &mask) {
    vector<int> ipParts = parseIP(ip);
    vector<int> maskParts = parseIP(mask);
    stringstream network;
    for (int i = 0; i < 4; i++) {
        int netPart = ipParts[i] & maskParts[i];
        network << netPart;
        if(i < 3)
            network << ".";
    }
    return network.str();
}
main(){
int number;
    string ip ;
    string mask ;
    cin >> ip>> mask;
    cout << ipv4ToBinary(ip) <<"\n" <<ipv4ToBinary(mask)<<"\n"<<ipv4ToBinary(getNetworkAddress(ip,mask))<<endl;
    cout <<  getNetworkAddress(ip, mask) ;
}

