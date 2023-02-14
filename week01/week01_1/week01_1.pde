size(400,400);//視窗大小
fill(255,0,0);//red
//ellipse(50,50,100,100);//橢圓形
noStroke();//不要畫外框
for(int y=0;y<400;y++){
  for(int x=0;x<400;x++){
    float x2=(x-200)/100.0;
    float y2=(200-y)/100.0;
    float left=x2*x2+y2*y2-1;
    if(left*left*left - x2*x2 * y2*y2*y2<0){
      ellipse(x,y,2,2);
    }
    
  }
}
