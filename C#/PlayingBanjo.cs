using System;

public class Kata
{
  public static string AreYouPlayingBanjo(string name)
  {
    char firstLetter = name[0];
    if(firstLetter == 'R' || firstLetter == 'r'){
      return $"{name} plays banjo";
    }else{
      return $"{name} does not play banjo"; 
    } 
  }
}