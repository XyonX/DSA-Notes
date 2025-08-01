/*
Problem: Counting Valleys
Prompt: Given a hike of steps steps represented by a string path of 'U' (uphill) and 'D' (downhill), count how many valleys the hiker walked through. A valley is a sequence of consecutive steps below sea level, starting with a 'D' from sea level and ending with a 'U' back to sea level.

Constraints
1 <= steps <= 10^6
path.length == steps
path contains only 'U' and 'D' characters
*/


//the conept to solve this is we do incelremtn the valley cout only if came to sea levl 
//below sea levgel even if we from v or A shape its still in the valley
//the sequernce matters here
//we iterate over all the steps
//we can haev two option eiher the current step if U OR D
// IF THE curent step if down we simply decrese hte count As we are finished the valley or anytig
//now if we came up we have aoption like we may end up at the sea level 0
//s0 we we first icrement the altiifvev if we see we are at the sea level we incremtn the valley count

int countingValleys(int steps, string path) {
    
    int altitude=0;
    int valleyCount=0;
    
    for(char step : path){
        
        if(step=='U'){
            
            altitude++;
            if (altitude == 0){
              valleyCount++; 
            }
            
            
        }else if(step=='D'){
            altitude--;
        }
    }
    return valleyCount;

}