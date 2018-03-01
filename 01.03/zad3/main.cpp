#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string s="Lorem ipsum dolor sit amet enim. Etiam ullamcorper. Suspendisse a pellentesque dui, non felis. Maecenas malesuada elit lectus felis, malesuada ultricies. Curabitur et ligula. Ut molestie a, ultricies porta urna. Vestibulum commodo volutpat a, convallis ac, laoreet enim. Phasellus fermentum in, dolor. Pellentesque facilisis. Nulla imperdiet sit amet magna. Vestibulum dapibus, mauris nec malesuada fames ac turpis velit, rhoncus eu, luctus et interdum adipiscing wisi. Aliquam erat ac ipsum. Integer aliquam purus. Quisque lorem tortor fringilla sed, vestibulum id, eleifend justo vel bibendum sapien massa ac turpis faucibus orci luctus non, consectetuer lobortis quis, varius in, purus. Integer ultrices posuere cubilia Curae, Nulla ipsum dolor lacus, suscipit adipiscing. Cum sociis natoque penatibus et ultrices volutpat. Nullam wisi ultricies a, gravida vitae, dapibus risus ante sodales lectus blandit eu, tempor diam pede cursus vitae, ultricies eu, faucibus quis, porttitor eros cursus lectus, pellentesque eget, bibendum a, gravida ullamcorper quam. Nullam viverra consectetuer. Quisque cursus et, porttitor risus. Aliquam sem. In hendrerit nulla quam nunc, accumsan congue. Lorem ipsum primis in nibh vel risus. Sed vel lectus. Ut sagittis, ipsum dolor quam.";
    ofstream file; // tworzenie pliku . ofstream tez jest klasa
    file.open("text.txt");
    size_t testPos=0,lastPos=0,pos=0;

    while(testPos!=string::npos){
        while(testPos!=string::npos){

            if(testPos-lastPos<20)
                pos=testPos;
            else
                break;
            testPos=s.find(' ',testPos+1);

        }
        file<<s.substr(lastPos,pos-lastPos)<<"\n";    // zapisanie do pliku
        lastPos=pos+1;
    }

    file.close();

    return 0;

}

