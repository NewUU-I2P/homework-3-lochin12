void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
if (consumed_water<=30){
    cost= (consumed_water*0.4) +13;}
if (consumed_water>30 and consumed_water<=50){
        cost= (consumed_water-30)*0.12 + 30*0.4 +13;}
if (consumed_water>50 and consumed_water<=60){
    cost = (consumed_water -50)*1.4+ 30*0.4 + 20*0.12+13;}
if (consumed_water>60)
     cost= (consumed_water-60)*1.5 + 1.4*10 +20*0.12 +30*0.4+13;
    return cost;
}
