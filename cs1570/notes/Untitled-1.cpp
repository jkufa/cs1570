if (players[j].get_array_path()[var[j]] == "rhino" 
          && players[j].get_lives() > 0)
      {
        if (var[j] < 40)
        {
          int even_odd;
          even_odd = (rand() % 8) + 1;
          if ((even_odd % 2) == 0)
          {
            if (j == 0)
            {
              if(a + even_odd < 42)
              {
                a += even_odd;
                var[j] = a;
              }
            }else if (j == 1)
            {
              if(b + even_odd < 42)
              {
                b += even_odd;
                var[j] = b;
              }
            }else if (j == 2)
            {
              if(c + even_odd < 42)
              {
                c += even_odd;
                var[j] = c;
              }
            }else if (j == 3)
            {
              if(d + even_odd < 42)
              {
                d += even_odd;
                var[j] = d;
              }
            }
            if(var[j] < 42)
            {
              cout << "You rolled a " << even_odd << ", proceed." << endl;
              cout << "Tile: #" << var[j] << " You landed on " 
                   << players[j].get_array_path()[var[j]] << endl << endl;
            }
          }else if (a + even_odd < 42 || b + even_odd < 42 || c + even_odd < 42
                    || d + even_odd < 42 || even_odd % 2 == 1)
          {
            cout << "You rolled a " << even_odd << ", do not move forward." 
                 << endl << endl;
          }
        }else
        {
          cout << "You are exempt from the rhino rule since you are on the "
               << "last tile" << endl;
          roll = (rand() % 8) + 1;
          cout << "Move forward " << roll << " spaces" << endl;
          if(j == 0 && players[0].get_lives() > 0)
          {
            if(var[j] + roll < 42)
            {
              var[j] += roll;
              cout << "Tile: #" << var[j] << " You landed on " 
                   << players[j].get_array_path()[a] << endl << endl;
            }else
            {
              cout << "You rolled too high! You have to roll the"
                  << " exact number to win" << endl << endl;
            }
          }
        }
      }else
      {
        roll = (rand() % 8) + 1;
        cout << "Move forward " << roll << " spaces" << endl;
        if(j == 0 && players[0].get_lives() > 0)
        {
          if(a + roll < 42)
          {
            a += roll;
            var[j] = a;
            cout << "Tile: #" << a << " You landed on " 
                 << players[j].get_array_path()[a] << endl << endl;
          }else
          {
            cout << "You rolled too high! You have to roll the"
                << " exact number to win" << endl << endl;
          }
        }else if (j == 1 && players[1].get_lives() > 0)
        {
          if(b + roll < 42)
          {
            b += roll;
            var[j] = b;
            cout << "Tile: #" << b << " You landed on " 
                 << players[j].get_array_path()[b] << endl << endl;
          }else
          {
            cout << "You rolled too high! You have to roll the"
                 << " exact number to win" << endl << endl;
          }
        }else if (j == 2 && players[2].get_lives() > 0)
        {
          if(c + roll < 42)
          {
            c += roll;
            var[j] = c;
            cout << "Tile: #" << c << " You landed on " 
                 << players[j].get_array_path()[c] << endl << endl;
          }else
          {
            cout << "You rolled too high! You have to roll the"
                 << " exact number to win" << endl << endl;
          }
        }else if (j == 3 && players[3].get_lives() > 0)
        {
          if(d + roll < 42)
          {
            d += roll;
            var[j] = d;
            cout << "Tile: #" << d << " You landed on "
                 << players[j].get_array_path()[d] << endl << endl;        
          }else
          {
            cout << "You rolled too high! You have to roll the"
                 << " exact number to win" << endl << endl;
          }
        }
        if (a == 41)
        {
          break;
          break;
        }
        if (b == 41)
        {
          break;
          break;
        }
        if (c == 41)
        {
          break;
          break;
        }
        if (d == 41)
        {
          break;
          break;
        }
      }
      if (players[j].get_array_path()[var[j]] == "jungle"
          && players[j].get_lives() > 0)
      {
        for (int k = 0; k < 3; k++)
        {
          strcpy(temp_char, stack.next_card().get_rescuer());
          cout << stack.next_card().get_riddle() << endl;
          phrases ();
          cout << " It's a " << stack.next_card().get_answer() << "!" << endl;
          cout << "You may be rescued by a " << temp_char << endl;
          for (int l = 0; l < 50; l++)
          {
            int roll1 = (rand() % 8);
            int roll2 = (rand() % 8);
            int roll3 = (rand() % 8);
            int roll4 = (rand() % 8);  
            if ((roll1==roll2 && roll1==roll3 && roll1==roll4
                && (!(strcmp (rescue_die[roll1], temp_char))))
                || (roll1==roll2 && roll1==roll3 && roll1==roll4 
                && (!(strcmp (rescue_die[roll1], "hourglass")))))
            {
              survived = 1;
              cout << "All four rolls match. Carry on." << endl << endl;
              k = 3;
              break;
              break;
            }
          } 
          if (k <= 1) 
          {
            cout << "None of them matched, proceeding to the next card"
                 << endl << endl;
          }
        }
        if (survived == 0)
        {
          players[0].decrease_lives();
          players[1].decrease_lives();
          players[2].decrease_lives();
          players[3].decrease_lives();            
          cout << endl;
          cout << "Sorry! None of the tries matched! Everyone loses a life"
               << endl << "Player 1" << " has " << players[0].get_lives()
               << " lives remaining" << endl;
          cout << "Player 2 has " << players[1].get_lives() 
               << " lives remaining" << endl << "Player 3 has "               
               << players[2].get_lives() << " lives remaining" << endl 
               << "Player 4 has " << players[3].get_lives()
               << " lives remaining" << endl << endl;
        }
      }else if (players[j].get_array_path()[var[j]] == "wait for 5 or 8"
           && players[j].get_lives() > 0)
      {
        cout << "Keep rolling until you get a 5 or 8, every time you dont, "
             << "move back a space, at least until you hit start again!"
             << endl << endl;
        do
        {
          roll = (rand() % 8) +1;
          if (roll == 5 || roll == 8)
          {
            cout << "You rolled a " << roll << ", you may stop rolling" <<endl;
            cout << "You are now on tile " << var[j] << endl << endl;
            break;
          }else
          {
            cout << "You rolled a " << roll << ", try again" << endl;
            if (j == 0)
            {
              a--;
              var[j] = a;
            }
            else if (j == 1)
            {
              b--;
              var[j] = b;
            }
            else if (j == 2)
            {
              c--;
              var[j] = c;
            }
            else if (j == 3)
            {
              d--;
              var[j] = d;
            }
            if (var[j] == 0)
              break;
          }
        }while (true);
      }else if (players[j].get_array_path()[var[j]] == "blank"
          && players[j].get_lives() > 0)
      {
        for (int k = 0; k < 3; k++)
        {
          survived = 0;
          move_forward = stack.next_card().get_spaces();
          strcpy(temp_char, stack.next_card().get_rescuer());
          cout << stack.next_card().get_riddle() << endl;
          phrases ();
          cout << " It's a " << stack.next_card().get_answer() << "!" << endl;
          cout << "You may be rescued by a " << temp_char << endl;
          for (int l = 0; l < 50; l++)
          {
            int roll1 = (rand() % 8);
            int roll2 = (rand() % 8);
            int roll3 = (rand() % 8);
            int roll4 = (rand() % 8);  
            if ((roll1==roll2 && roll1==roll3 && roll1==roll4
                && (!(strcmp (rescue_die[roll1], temp_char))))
                || (roll1==roll2 && roll1==roll3 && roll1==roll4 
                && (!(strcmp (rescue_die[roll1], "hourglass")))))
            {
              survived = 1;
              cout << "All four rolls match. Carry on." << endl << endl;
              
              if (j == 0)
              {
                b += move_forward;
                c += move_forward;
                d += move_forward;
              }else if (j == 1)
              {
                a += move_forward;
                c += move_forward;
                d += move_forward;
              }
               if (j == 2)
              {
                a += move_forward;
                b += move_forward;
                d += move_forward;
              }else if (j == 3)
              {
                a += move_forward;
                b += move_forward;
                c += move_forward;
              }
              k = 3;
              break;
              break;
            }
          } 
          if (k <= 1) 
          {
            cout << "None of them matched, proceeding to the next card"
                 << endl << endl;
          }
        }
        if (survived == 0)
        {
          players[j].decrease_lives();
          cout << "None of them matched! Lose a life" << endl
               << "Player " << j+1 << " has " << players[j].get_lives()
               << " lives remaining" << endl << endl;
          if(j == 0)
            a -= move_forward;          
          if(j == 1)
            b -= move_forward;
          if(j == 2)
            c -= move_forward;
          if(j == 3)
            d -= move_forward;
        }
      }
    }
    if(players[0].get_lives() == 0)
      cout << "Player 1 has been eliminated!" << endl;
    if(players[1].get_lives() == 0)
      cout << "Player 2 has been eliminated!" << endl;
    if(players[2].get_lives() == 0)
      cout << "Player 3 has been eliminated!" << endl;
    if(players[3].get_lives() == 0)
      cout << "Player 4 has been eliminated!" << endl;      
    cout << "---------------------" << endl;

    if (a == 41)
      break;
    if (b == 41)
      break;
    if (c == 41)
      break;
    if (d == 41)
      break;
    if (players[0].get_lives() == 0 && players[1].get_lives() == 0
        && players[2].get_lives() == 0 && players[3].get_lives() == 0)
    {
      break;
    }
  } while (true);

  cout << "The game has ended!" << endl;
  if (a == 41)
    cout << "Player 1 has won!" << endl;
  if (b == 41)
    cout << "Player 2 has won!" << endl;
  if (c == 41)
    cout << "Player 3 has won!" << endl;
  if (d == 41)
    cout << "Player 4 has won!" << endl;
  cout << "Please play again!" << endl << endl;
return 0;
}