function makefullcirclefirework(fire) {
   let color = randColor ();
   let velocity = Math.random() * 8 + 8;
   let max = firenumber * 3;
   for (let i = 0; i < max; i++) {
     let angle = (i * 360) / max;
     let radian = (angle * Math.PI) / 180;
     let vx = Math.cos(radian) * velocity * (Math.random() * 0.5 + 0.75);
     let vy = Math.sin(radian) * velocity * (Math.random() * 0.5 + 0.75);
     let particle = new Particle(fire.x, fire.y, vx, vy, color);
     particles.push(particle);
   }