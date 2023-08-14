#include <device.h>
#define ROUND(a) ((int)(a+0.5))

void lineDDA (int xa,int ya,int xb,int yb){
    int dx = xb - xa,dy = yb - ya,steps,k;
    float xIncrement,yIncrement,x=xa,y=ya;
    if(abs(dx) > abs(dy) ) steps = abs(dx);
    else steps = abs(dy);
    xIncrement = dx/(float) steps;
    yIncrement = dy/(float) steps;

    setPixel (ROUND(x), ROUND(y) );
    for(k=0;k<steps;k++){
        x+=xIncrement;
        y+=yIncrement;
        setPixel (ROUND(x), ROUND(y) );
    }
}

void linesBres(int xa,int ya,int xb,int yb){
    int dx = abs(xa - xb),dy = abs(ya - yb);
    int p = 2*(dy - dx);
    int twoDy  = 2*dy,twoDyDx = 2*(dy-dx);
    int x,y,xEnd;

    if(xa > xb){
        x = xb;
        y = yb;
        xEnd = xa;
    }
    else{
        x = xa;
        y = ya;
        xEnd = xb;
    }
    setPixel(x,y);

    while(x<xEnd){
        x++;
        if(p < 0) p+=twoDy;
        else{
            y++;
            p+=twoDyDx;
        }
        setPixel(x,y);
    }
}

void midpoint(int xa,int ya,int xb,int yb){

}

int main(){
    cout<<"LINE DRAWING ALGORITHMS"<<endl;
    int xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    lineDDA(xa,ya,xb,yb);
    return 0;
}