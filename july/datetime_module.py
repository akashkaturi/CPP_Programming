"""
Date time module practice
"""
import datetime

class Dark:
    """
    Enter DOB
    """
    def __init__(self,**kwargs) -> None:
        k=kwargs["dob"].split("-")
        self.dob=','.join(k)
        self.name=kwargs["name"]
    def calculate(self):
        """
        calculate age
        """
        today=datetime.date.today()
        bday=datetime.date()
        age=today-bday
        return age.days()
    def __str__(self) -> str:
        return self.dob
birthday=input("What is your Date of Birth? ( in DD/MM/YYYY) ")
birthdate=datetime.datetime.strptime(birthday,"%d/%m/%Y").date()
print(birthdate)
obj=Dark(dob=birthdate,name="Akash")
print(obj.calculate())

