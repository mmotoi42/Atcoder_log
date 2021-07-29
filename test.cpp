#include <bits/stdc++.h>

std::vector<std::string> split(std::string s, char delim) {
  std::vector<std::string> v;
  std::stringstream ss(s);
  std::string item;
  while (std::getline(ss, item, delim)) {
    v.push_back(item);
  }
  return v;
}

int main()
{
  std::string digits = "0123456789";
  split()
}