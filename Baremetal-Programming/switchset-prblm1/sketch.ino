


#include "led.h"
void setup() {
  init_f(0xFF);
  init_k(0x00);
}

unsigned char data;
unsigned char count = 0;
unsigned char cnt = 0;
void loop() {
  data = read_k(); //reading k port input register
  if ( count == 0 && data == 0x01  ) {
    write_f(0xff);

    while (1) {
     data = read_k();

     if (data == 0x04) {
        blink_f(0xff, 3);
        cnt++; 
      }else if (data == 0x08){
        lsb_to_msb_f();
        cnt += 1;
      }
      else if (data != 0x00) {
        msb_to_lsb_f();
        cnt += 1;
      }
      else if (cnt == 3) {
        count += 1;
        break;
      }
    }
  }
  else if (count == 1 && data == 0x01) {
    write_f(0x55);
    while (1) {
      data = read_k();
      if (data == 0x80) {
        write_f(0xAA);
        count += 1;
        break;
      }
    }
  }
  else if ( count == 2 && data == 0x01) {

    unsigned char val = 0x01;
    cnt = 1;
    write_f(val);
    while (1) {
      data = read_k();
      wait(1000);

      switch (data) {
        case 0x02:
          val |= 0x02;
          write_f(val);
          cnt += 1;
          break;
        case 0x04:
          val |= 0x04;
          write_f(val);
          cnt += 1;
          break;
        case 0x08:
          val |= 0x08;
          write_f(val);
          cnt += 1;
          break;
        case 0x10:
          val |= 0x010;
          write_f(val);
          cnt += 1;
          break;
        case 0x20:
          val |= 0x20;
          write_f(val);
          cnt += 1;
          break;
        case 0x40:
          val |= 0x40;
          write_f(val);
          cnt += 1;
          break;
        case 0x80:
          val |= 0x80;
          write_f(val);
          cnt += 1;

          break;

      }
      if (cnt == 8) {
        count += 1;
        break;
      }
    }

  }
  else if ( count == 3 && data == 0x01) {
    unsigned char val = 0x80;
    cnt = 1;
    write_f(val);
    while (1) {
      data = read_k();
      wait(1000);
      switch (data) {
        case 0x02:
          val |= 0x40;
          write_f(val);
          cnt++;
          break;
        case 0x04:
          val |= 0x20;
          write_f(val);
          cnt++;
          break;
        case 0x08:
          val |= 0x10;
          write_f(val);
          cnt++;
          break;
        case 0x10:
          val |= 0x08;
          write_f(val);
          cnt++;
          break;
        case 0x20:
          val |= 0x04;
          write_f(val);
          cnt++;
          break;
        case 0x40:
          val |= 0x02;
          write_f(val);
          cnt++;
          break;
        case 0x80:
          val |= 0x01;
          write_f(val);
          cnt++;
          break;

      }
      if (cnt == 8) {
        count += 1;
        break;
      }
    }

  }
  else if ( count == 4 && data == 0x01 ) {
    unsigned char ip = 0x01;
    bool flag = true;
    cnt = 0;
    while (1) {
      data = read_k();
      if(flag && data != 0x00 ) {
        ip = 1 << cnt;
        flag = !flag;
      }else if ( !flag && data != 0x00 ) {
        ip = 0x00;
        cnt++;
        flag = !flag;
      }
      write_f(ip);
      if (cnt == 8) {
        count += 1;
        break;
      }
    }
  } else if (count == 5 && data == 0x01) {
    unsigned char val = 0x99;
    write_f(val);
  }
}


