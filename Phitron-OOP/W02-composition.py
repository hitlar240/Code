# Composition provides "has a" relation

class CPU:
    def __init__(self, core) -> None:
        self.core = core

class RAM:
    def __init__(self,size) -> None:
        self.size = size

class SSD:
    def __init__(self,size) -> None:
        self.size = size

# computer has a cpu
# computer has a ram
# computer has a ssd
class Computer:
    def __init__(self,cpu,ram,ssd) -> None:
        self.cpu = CPU(cpu)
        self.ram = RAM(ram)
        self.ssd = SSD(ssd)

# class Computer(CPU,RAM,SSD):
#     def __init__(self, core) -> None:
#         super().__init__(core)

lptp = Computer(8,16,512)