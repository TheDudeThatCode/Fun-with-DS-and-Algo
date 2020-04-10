class SuperList(list):
    def __len__(self):
        return 1000


Super_List1 = SuperList()
print(len(Super_List1))
Super_List1.append(10)
print(Super_List1[0])
print(issubclass(SuperList, list))
