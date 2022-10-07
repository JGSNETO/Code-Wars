def rps(p1, p2):
    
    if(p1 == p2):
        return "Draw!"
    if(p1 == "rock" and p2 == "paper"):
        return "Player 2 won!"
    if(p1 == "rock" and p2 == "scissors"):
        return "Player 1 won!"
    if(p1 == "paper" and p2 == "scissors"):
        return "Player 2 won!"
    if(p1 == "paper" and p2 == "rock"):
        return "Player 1 won!"
    if(p1 == "scissors" and p2 == "rock"):
        return "Player 2 won!"
    if(p1 == "scissors" and p2 == "paper"):
        return "Player 1 won!"
    
"""
def rps(p1, p2):
    beats = {'rock': 'scissors', 'scissors': 'paper', 'paper': 'rock'}
    if beats[p1] == p2:
        return "Player 1 won!"
    if beats[p2] == p1:
        return "Player 2 won!"
    return "Draw!"
"""