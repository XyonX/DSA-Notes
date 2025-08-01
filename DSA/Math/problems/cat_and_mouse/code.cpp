string catAndMouse(int x, int y, int z) {

int dis_a = abs(z-x);
int dis_b=abs(z-y);

    string out="Mouse C";

    if(dis_a<dis_b){
        out="Cat A";
    }
    else if (dis_b<dis_a){
        out="Cat B";
    }
    

    return out;
    
}