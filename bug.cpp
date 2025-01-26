std::vector<int> vec = {1, 2, 3, 4, 5};
int* ptr = &vec[0];
vec.push_back(6); //This might invalidate the pointer ptr
int val = *ptr; //Undefined Behavior. ptr might point to invalid memory