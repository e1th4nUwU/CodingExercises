let aveSpd = (upTime, upSpd, downSpd) =>(upTime*upSpd*2)/(upTime+((upTime*upSpd)/downSpd));

console.log(aveSpd(18, 20, 60));
