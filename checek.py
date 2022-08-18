"""
d = {'k1':[1,2,{'k2':['this is tricky',{'tough':[1,2,['hello']]}]}]}
print(d["k1"][2]["k2"][1]["tough"][2])
"""
#  EVEN ODD CHECK
"""num=int(input("enter the number : "))
if (num%2==0):
    print(num,"even")
else:
    print(num , "odd")
"""
"""def even(num):
    # input("enter the number")
    result = num%2 ==0
    return result
print(even(45))
print(even(454))
print(even(5))
print(even(458))
print(even(457))
print(even(457.8))
"""
"""# even check in a list
def check_even_list(num_list):
    # Go through each number
    for number in num_list:
        # Once we get a "hit" on an even number, we return True
        if number % 2 == 0:
            return True
        # Otherwise we don't do anything
        else:
            pass
            #return false  only first index number checked   


print(check_even_list([2,5,9,7,2]))
print(check_even_list([4,8,6,7,2]))
"""
# return all even number from the list
"""
def even_num_list(num_list):
    even_numbers = []
    
    # Go through each number
    for number in num_list:
        # Once we get a "hit" on an even number, we append the even number
        if number % 2 == 0:
            even_numbers.append(number)
        # Don't do anything if its not even
        else:
            pass
    # Notice the indentation! This ensures we run through the entire for loop    
    return even_numbers
print(even_num_list([4 ,8,9,2,6,7]))"""
#tuples unpacking
"""work_hours = [('Abby',100),('Billy',7800),('Cassie',800)]
def employee_check(work_hours):
    
    # Set some max value to intially beat, like zero hours
    current_max = 0
    # Set some empty value before the loop
    employee_of_month = ''
    
    for employee,hours in work_hours:
        if hours > current_max:
            current_max = hours
            employee_of_month = employee
        else:
            pass
    
    # Notice the indentation here
    return (employee_of_month,current_max)
print(employee_check(work_hours))"""
# a = "Hello , World"
# print(a.split(",")) # returns ['Hello', ' World!']
# myList = [1,3,5,8,4,2,3,6,9,0] 
# num= 2
# for i in myList:
#    num +=1
# print("The number is "  +str(num)+"!")
import random
suits = ('Hearts', 'Clubs','Diamonds', 'Spades' )
ranks = ('Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten', 'Jack', 'Queen', 'King', 'Ace')
values = {'Two': 2, 'Three': 3, 'Four': 4, 'Five': 5, 'Six': 6, 'Seven': 7, 'Eight': 8, 'Nine': 9, 'Ten': 10,
          'Jack': 10, 'Queen': 10, 'King': 10, 'Ace': 11}
playing = True
class Card():

    def __init__(self,suit,rank):
        self.suit = suit
        self.rank = rank
        # self.value = values[rank]
    def __str__(self):
        return self.rank + " of "+self.suit
# x=card(suits[3],ranks[7])
# print(x)
class Deck():
    def __init__(self):
        self.all_cards=[]
        for suit in suits:
            for rank in ranks:
                self.all_cards.append(Card(suit,rank))
    def __str__(self):
        deck_comp = ''  # start with an empty string
        for Card in self.all_cards:
            deck_comp += '\n '+Card.__str__() # add each Card object's print string
            return 'The deck has:' + deck_comp
    def shuffle(self):
        random.shuffle(self.all_cards)
    def deal(self):
        single_card=self.all_cards.pop()
        return single_card
test_deck = Deck()
print(test_deck)
# class Hand:
#     def __init__(self):
#         self.cards = []  # start with an empty list as we did in the Deck class
#         self.value = 0   # start with zero value
#         self.aces = 0    # add an attribute to keep track of aces
#     def add_card(self,new_cards):
#         if type(new_cards)==type([]):
#             self.all_cards.extend(new_cards)
#         else:
#             self.all_cards.append(new_cards)
#
#     def adjust_for_ace(self):
#
