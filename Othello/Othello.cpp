#include<simplecpp>
using namespace std;
int**a=new int*[8];int emp=64;
bool f1=false,f2=false,f3=false,f4=false,f5=false,f6=false,f7=false,f8=false;
int k1,k2,k3,k4,k5a,k5b,k6a,k6b,k7a,k7b,k8a,k8b,c1,c2,c3,c4,c5,c6,c7,c8;
int pk1,pk2,pk3,pk4,pk5a,pk5b,pk6a,pk6b,pk7a,pk7b,pk8a,pk8b,pc1,pc2,pc3,pc4,pc5,pc6,pc7,pc8;
void index(int&m,int&n,double &x, double&y){
    m=0;n=0;
    x=x-3;y=y-3;
    while(x>494.0/8){x=x-494.0/8;n++;}
    while(y>494.0/8){y=y-494.0/8;m++;}
    x=((n+0.5)*494.0/8)+3;
    y=((m+0.5)*494.0/8)+3;

}

void make_blue(int m, int n){double x,y;
    x=((n+0.5)*494.0/8)+3;
    y=((m+0.5)*494.0/8)+3;
    Circle pt(0,0,0);
    int i=55;
    pt.setColor((0,i,sinh(i/10+255/10)),true);
    for(int i=0;i<17;i++){pt.reset(x,y,i);pt.imprint();}

}

void make_orange(int m, int n){double x,y;
    x=((n+0.5)*494.0/8)+3;
    y=((m+0.5)*494.0/8)+3;
    Circle pt(0,0,0);
    int i=95;
    pt.setColor((0,i,sinh(i/10)),true);
    for(int i=0;i<17;i++){pt.reset(x,y,i);pt.imprint();}

}

void make_white(int m, int n){double x,y;
    x=((n+0.5)*494.0/8)+3;
    y=((m+0.5)*494.0/8)+3;
    Circle pt(0,0,0);
    int i=25;
    pt.setColor((0,0,tan(i/10)),true);
    for(int i=0;i<17;i++){pt.reset(x,y,i);pt.imprint();}

}

void flip_coins(int m, int n,int i, float x, float y){
    if(i%2==0){
        if(m!=0){
        k1=m-1;c1=0;
        while(k1!=0 && a[k1][n]==2 ){c1++;k1--;}
        if(c1!=0 && a[k1][n]==1){f1=true;}}

        if(m!=7){
        k2=m+1;c2=0;
        while(a[k2][n]==2 && k2!=7){c2++;k2++;}
        if(c2!=0 && a[k2][n]==1){f2=true;}}

        if(n!=7){
        k3=n+1;c3=0;
        while(a[m][k3]==2 && k3!=7){c3++;k3++;}
        if(c3!=0 && a[m][k3]==1){f3=true;}}

        if(n!=0){
        k4=n-1;c4=0;
        while(a[m][k4]==2 && k4!=0){c4++;k4--;}
        if(c4!=0 && a[m][k4]==1){f4=true;}}

        if(m!=7 && n!=7){
        k5a=m+1;k5b=n+1;c5=0;
        while(a[k5a][k5b]==2 && k5a!=7 && k5b!=7){c5++;k5a++;k5b++;}
        if(c5!=0 && a[k5a][k5b]==1){f5=true;}}

        if(m!=0 && n!=0){
        k6a=m-1;k6b=n-1;c6=0;
        while(a[k6a][k6b]==2 && k6a!=0 && k6b!=0){c6++;k6a--;k6b--;}
        if(c6!=0 && a[k6a][k6b]==1){f6=true;}}

        if(m!=7 && n!=0){
        k7a=m+1;k7b=n-1;c7=0;
        while(a[k7a][k7b]==2 && k7a!=7 && k7b!=0){k7a++;k7b--;c7++;}
        if(c7!=0 && a[k7a][k7b]==1){f7=true;}}

        if(m!=0 && n!=7){
        k8a=m-1;k8b=n+1;c8=0;
        while(a[k8a][k8b]==2 && k8a!=0 && k8b!=7){k8a--;k8b++;c8++;}
        if(c8!=0 && a[k8a][k8b]==1){f8=true;}}
        /*if(m==0){f1=f6=f8=false;}
        if(m==7){f2=f5=f7=false;}
        if(n==0){f4=f6=f7=false;}
        if(n==7){f3=f5=f8=false;}*/

        if(f1){for(int l=m-1;l>=k1+1;l--){make_blue(l,n);a[l][n]=1;}}
        if(f2){for(int l=m+1;l<=k2-1;l++){make_blue(l,n);a[l][n]=1;}}
        if(f3){for(int l=n+1;l<=k3-1;l++){make_blue(m,l);a[m][l]=1;}}
        if(f4){for(int l=n-1;l>=k4+1;l--){make_blue(m,l);a[m][l]=1;}}
        if(f5){int l1=m+1,l2=n+1;
            while(l1<=k5a-1){a[l1][l2]=1;make_blue(l1,l2);l1++;l2++;}
        }
        if(f6){int l1=m-1,l2=n-1;
            while(l1>=k6a+1){a[l1][l2]=1;make_blue(l1,l2);l1--;l2--;}
        }
        if(f7){int l1=m+1,l2=n-1;
            while(l1<=k7a-1){a[l1][l2]=1;make_blue(l1,l2);l1++;l2--;}
        }
        if(f8){int l1=m-1,l2=n+1;
            while(l1>=k8a+1){a[l1][l2]=1;make_blue(l1,l2);l1--;l2++;}
        }
    }
    else{
        if(m!=0){
        k1=m-1;c1=0;
        while(a[k1][n]==1 && k1!=0){c1++;k1--;}
        if(c1!=0 && a[k1][n]==2){f1=true;}}

        if(m!=7){
        k2=m+1;c2=0;
        while(a[k2][n]==1 && k2!=7){c2++;k2++;}
        if(c2!=0 && a[k2][n]==2){f2=true;}}

        if(n!=7){
        k3=n+1;c3=0;
        while(a[m][k3]==1 && k3!=7){c3++;k3++;}
        if(c3!=0 && a[m][k3]==2){f3=true;}}

        if(n!=0){
        k4=n-1;c4=0;
        while(a[m][k4]==1 && k4!=0){c4++;k4--;}
        if(c4!=0 && a[m][k4]==2){f4=true;}}

        if(m!=7 && n!=7){
        k5a=m+1;k5b=n+1;c5=0;
        while(a[k5a][k5b]==1 && k5a!=7 && k5b!=7){c5++;k5a++;k5b++;}
        if(c5!=0 && a[k5a][k5b]==2){f5=true;}}

        if(m!=0 && n!=0){
        k6a=m-1;k6b=n-1;c6=0;
        while(a[k6a][k6b]==1 && k6a!=0 && k6b!=0){c6++;k6a--;k6b--;}
        if(c6!=0 && a[k6a][k6b]==2){f6=true;}}

        if(m!=7 && n!=0){
        k7a=m+1;k7b=n-1;c7=0;
        while(a[k7a][k7b]==1 && k7a!=7 && k7b!=0){k7a++;k7b--;c7++;}
        if(c7!=0 && a[k7a][k7b]==2){f7=true;}}

        if(m!=0 && n!=7){
        k8a=m-1;k8b=n+1;c8=0;
        while(a[k8a][k8b]==1 && k8a!=0 && k8b!=7){k8a--;k8b++;c8++;}
        if(c8!=0 && a[k8a][k8b]==2){f8=true;}}

        /*if(m==0){f1=f6=f8=false;}
        if(m==7){f2=f5=f7=false;}
        if(n==0){f4=f6=f7=false;}
        if(n==7){f3=f5=f8=false;}*/

        if(f1){for(int l=m-1;l>=k1+1;l--){make_orange(l,n);a[l][n]=2;}}
        if(f2){for(int l=m+1;l<=k2-1;l++){make_orange(l,n);a[l][n]=2;}}
        if(f3){for(int l=n+1;l<=k3-1;l++){make_orange(m,l);a[m][l]=2;}}
        if(f4){for(int l=n-1;l>=k4+1;l--){make_orange(m,l);a[m][l]=2;}}
        if(f5){int l1=m+1,l2=n+1;
            while(l1<=k5a-1){a[l1][l2]=2;make_orange(l1,l2);l1++;l2++;}
        }
        if(f6){int l1=m-1,l2=n-1;
            while(l1>=k6a+1 ){a[l1][l2]=2;make_orange(l1,l2);l1--;l2--;}
        }
        if(f7){int l1=m+1,l2=n-1;
            while(l1<=k7a-1){a[l1][l2]=2;make_orange(l1,l2);l1++;l2--;}
        }
        if(f8){int l1=m-1,l2=n+1;
            while(l1>=k8a+1){a[l1][l2]=2;make_orange(l1,l2);l1--;l2++;}
        }
    }
}
void check_flip_coins(int m, int n,int i, float x, float y){
    if(i%2==0){



        if(m!=0){
        k1=m-1;c1=0;
        while(k1!=0 && a[k1][n]==2 ){c1++;k1--;}
        if(c1!=0 && a[k1][n]==1){f1=true;}}

        if(m!=7){
        k2=m+1;c2=0;
        while(a[k2][n]==2 && k2!=7){c2++;k2++;}
        if(c2!=0 && a[k2][n]==1){f2=true;}}

        if(n!=7){
        k3=n+1;c3=0;
        while(a[m][k3]==2 && k3!=7){c3++;k3++;}
        if(c3!=0 && a[m][k3]==1){f3=true;}}

        if(n!=0){
        k4=n-1;c4=0;
        while(a[m][k4]==2 && k4!=0){c4++;k4--;}
        if(c4!=0 && a[m][k4]==1){f4=true;}}

        if(m!=7 && n!=7){
        k5a=m+1;k5b=n+1;c5=0;
        while(a[k5a][k5b]==2 && k5a!=7 && k5b!=7){c5++;k5a++;k5b++;}
        if(c5!=0 && a[k5a][k5b]==1){f5=true;}}

        if(m!=0 && n!=0){
        k6a=m-1;k6b=n-1;c6=0;
        while(a[k6a][k6b]==2 && k6a!=0 && k6b!=0){c6++;k6a--;k6b--;}
        if(c6!=0 && a[k6a][k6b]==1){f6=true;}}

        if(m!=7 && n!=0){
        k7a=m+1;k7b=n-1;c7=0;
        while(a[k7a][k7b]==2 && k7a!=7 && k7b!=0){k7a++;k7b--;c7++;}
        if(c7!=0 && a[k7a][k7b]==1){f7=true;}}

        if(m!=0 && n!=7){
        k8a=m-1;k8b=n+1;c8=0;
        while(a[k8a][k8b]==2 && k8a!=0 && k8b!=7){k8a--;k8b++;c8++;}
        if(c8!=0 && a[k8a][k8b]==1){f8=true;}}
    }
    else{


        if(m!=0){
        k1=m-1;c1=0;
        while(a[k1][n]==1 && k1!=0){c1++;k1--;}
        if(c1!=0 && a[k1][n]==2){f1=true;}}

        if(m!=7){
        k2=m+1;c2=0;
        while(a[k2][n]==1 && k2!=7){c2++;k2++;}
        if(c2!=0 && a[k2][n]==2){f2=true;}}

        if(n!=7){
        k3=n+1;c3=0;
        while(a[m][k3]==1 && k3!=7){c3++;k3++;}
        if(c3!=0 && a[m][k3]==2){f3=true;}}

        if(n!=0){
        k4=n-1;c4=0;
        while(a[m][k4]==1 && k4!=0){c4++;k4--;}
        if(c4!=0 && a[m][k4]==2){f4=true;}}

        if(m!=7 && n!=7){
        k5a=m+1;k5b=n+1;c5=0;
        while(a[k5a][k5b]==1 && k5a!=7 && k5b!=7){c5++;k5a++;k5b++;}
        if(c5!=0 && a[k5a][k5b]==2){f5=true;}}

        if(m!=0 && n!=0){
        k6a=m-1;k6b=n-1;c6=0;
        while(a[k6a][k6b]==1 && k6a!=0 && k6b!=0){c6++;k6a--;k6b--;}
        if(c6!=0 && a[k6a][k6b]==2){f6=true;}}

        if(m!=7 && n!=0){
        k7a=m+1;k7b=n-1;c7=0;
        while(a[k7a][k7b]==1 && k7a!=7 && k7b!=0){k7a++;k7b--;c7++;}
        if(c7!=0 && a[k7a][k7b]==2){f7=true;}}

        if(m!=0 && n!=7){
        k8a=m-1;k8b=n+1;c8=0;
        while(a[k8a][k8b]==1 && k8a!=0 && k8b!=7){k8a--;k8b++;c8++;}
        if(c8!=0 && a[k8a][k8b]==2){f8=true;}}
    }
}
void undo(int m, int n,int i){
    if(i%2==0){
        if(f1){for(int l=m-1;l>=k1+1;l--){make_orange(l,n);a[l][n]=2;}}
        if(f2){for(int l=m+1;l<=k2-1;l++){make_orange(l,n);a[l][n]=2;}}
        if(f3){for(int l=n+1;l<=k3-1;l++){make_orange(m,l);a[m][l]=2;}}
        if(f4){for(int l=n-1;l>=k4+1;l--){make_orange(m,l);a[m][l]=2;}}
        if(f5){int l1=m+1,l2=n+1;
            while(l1<=k5a-1){a[l1][l2]=2;make_orange(l1,l2);l1++;l2++;}
        }
        if(f6){int l1=m-1,l2=n-1;
            while(l1>=k6a+1){a[l1][l2]=2;make_orange(l1,l2);l1--;l2--;}
        }
        if(f7){int l1=m+1,l2=n-1;
            while(l1<=k7a-1){a[l1][l2]=2;make_orange(l1,l2);l1++;l2--;}
        }
        if(f8){int l1=m-1,l2=n+1;
            while(l1>=k8a+1){a[l1][l2]=2;make_orange(l1,l2);l1--;l2++;}
        }
    }
    else{
        if(f1){for(int l=m-1;l>=k1+1;l--){make_blue(l,n);a[l][n]=1;}}
        if(f2){for(int l=m+1;l<=k2-1;l++){make_blue(l,n);a[l][n]=1;}}
        if(f3){for(int l=n+1;l<=k3-1;l++){make_blue(m,l);a[m][l]=1;}}
        if(f4){for(int l=n-1;l>=k4+1;l--){make_blue(m,l);a[m][l]=1;}}
        if(f5){int l1=m+1,l2=n+1;
            while(l1<=k5a-1){a[l1][l2]=1;make_blue(l1,l2);l1++;l2++;}
        }
        if(f6){int l1=m-1,l2=n-1;
            while(l1>=k6a+1 ){a[l1][l2]=1;make_blue(l1,l2);l1--;l2--;}
        }
        if(f7){int l1=m+1,l2=n-1;
            while(l1<=k7a-1){a[l1][l2]=1;make_blue(l1,l2);l1++;l2--;}
        }
        if(f8){int l1=m-1,l2=n+1;
            while(l1>=k8a+1){a[l1][l2]=1;make_blue(l1,l2);l1--;l2++;}
        }
    }
    a[m][n]=0;
    make_white(m,n);emp++;
}


void play(){
    int h=0,m1,n1;
    Circle pt(0,0,0);
    int i=0;
    double x,y;
    for(;i<64;i++){
        if(i>=4){
            int cPos = getClick(); // ask the user to click on a point
            x = cPos/65536.0; // x coordinate of the point
            y = cPos%65536; // the point's y coordinate
        }
        if(x>=210 && x<=290 && y<=570 && y>=530){undo(m1,n1,i-1);i-=2;f1=f2=f3=f4=f5=f6=f7=f8=false;continue;}
        if(y>500 && !(x>=210 && x<=290 && y<=570 && y>=530)){i--;continue;}

        f1=f2=f3=f4=f5=f6=f7=f8=false;
        int m,n;
        if(i>=4)index(m,n,x,y);
        if(i<4){
            if(i==0){m=3;n=3;}
            else if(i==2){m=4;n=4;}
            else if(i==1){m=4;n=3;}
            else{m=3;n=4;}
            x=((n+0.5)*494.0/8)+3;
            y=((m+0.5)*494.0/8)+3;
        }
        if(i>=4){for(int k=0;k<8;k++){
                    for(int l=0;l<8;l++){check_flip_coins(k,l,i,x,y);
                        if(a[k][l]==0 && (f1==false && f2==false && f3==false && f4==false && f5==false && f6==false && f7==false && f8==false)){h++;}
                        f1=f2=f3=f4=f5=f6=f7=f8=false;
                    }
                }
                if(h==emp){cout<<"endgame"<<endl;break;}
                h=0;
        }

        if(i>=4)check_flip_coins(m,n,i,x,y);
        bool g1,g2,g3,g4,g5,g6,g7,g8;
        if(i>=4){if (a[m][n]!=0 || (f1==false && f2==false && f3==false && f4==false && f5==false && f6==false && f7==false && f8==false)){k1=pk1;k2=pk2;k3=pk3;k4=pk4;k5a=pk5a;k5b=pk5b;k6a=pk6a;k6b=pk6b;k7a=pk7a;k7b=pk7b;k8a=pk8a;k8b=pk8b;c1=pc1;c2=pc2;c3=pc3;c4=pc4;c5=pc5;c6=pc6;c7=pc7;c8=pc8;f1=g1;f2=g2;f3=g3;f4=g4;f5=g5;f6=g6;f7=g7;f8=g8;i--;cout<<"retry"<<endl;continue;}
        }
        if(i%2==0){
            a[m][n]=1;
            make_blue(m,n);emp--;
        }
        else{
            a[m][n]=2;
            make_orange(m,n);emp--;
        }
        f1=f2=f3=f4=f5=f6=f7=f8=false;
        flip_coins(m,n,i,x,y);
        pk1=k1;pk2=k2;pk3=k3;pk4=k4;pk5a=k5a;pk5b=k5b;pk6a=k6a;pk6b=k6b;pk7a=k7a;pk7b=k7b;pk8a=k8a;pk8b=k8b;pc1=c1;pc2=c2;pc3=c3;pc4=c4;pc5=c5;pc6=c6;pc7=c7;pc8=c8;
        g1=f1;g2=f2;g3=f3;g4=f4;g5=f5;g6=f6;g7=f7;g8=f8;
        m1=m;n1=n;
    }
    int blue=0;int red=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]==1){blue++;}
            if(a[i][j]==2){red++;}
        }
    }
    if(red<blue){cout<<"blue wins!";}
    if(blue<red){cout<<"red wins!";}
    if(blue==red){cout<<"tie!";}

}

main_program{
    //array initialization
    for(int i=0;i<8;i++){
        a[i]=new int[8];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            a[i][j]=0;
        }
    }
    initCanvas("othello",500,600);
    float i=0;
    Line la (3+i,3,3+i,497);
    i+=494.0/8;
    Line ab (3+i,3,3+i,497);
    i+=494.0/8;
    Line bs (3+i,3,3+i,497);
    i+=494.0/8;
    Line cb (3+i,3,3+i,497);
    i+=494.0/8;
    Line dk (3+i,3,3+i,497);
    i+=494.0/8;
    Line eh (3+i,3,3+i,497);
    i+=494.0/8;
    Line fk (3+i,3,3+i,497);
    i+=494.0/8;
    Line gj (3+i,3,3+i,497);
    i+=494.0/8;
    Line hh (3+i,3,3+i,497);
    i=0;
    Line zl (3,3+i,497,3+i);
    i+=494.0/8;
    Line xq (3,3+i,497,3+i);
    i+=494.0/8;
    Line yr (3,3+i,497,3+i);
    i+=494.0/8;
    Line tt (3,3+i,497,3+i);
    i+=494.0/8;
    Line uy (3,3+i,497,3+i);
    i+=494.0/8;
    Line vt (3,3+i,497,3+i);
    i+=494.0/8;
    Line sh (3,3+i,497,3+i);
    i+=494.0/8;
    Line qg (3,3+i,497,3+i);
    i+=494.0/8;
    Line rh (3,3+i,497,3+i);
    i+=494.0/8;
    Text t(250,550,"UNDO");
Rectangle r(250,550, 80, 40);
    //Line mh (3,3+i,497,3+i);
    i+=494.0/8;
    play();
    wait(298457);

}
