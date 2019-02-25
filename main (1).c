#include <kipr/botball.h>

int main ()
{
	//wait_for_light(3);
	//shut_down_in(15);
	create_connect();
	set_create_total_angle(0);
    	while(abs(get_create_total_angle())<25)
    	{
        	create_drive_direct(-150,150);
        	msleep(10);
    	}      
	create_drive_direct(150,150);
	msleep(1000);
	set_create_total_angle(0);
	while(abs(get_create_total_angle())<25)
    	{
        	create_drive_direct(150,-150);
        	msleep(10);
    	}      
	while(analog(1)<2600)
	{
		create_drive_direct(250,250);
		msleep(10);
	}
	set_create_total_angle(0);
    	while(abs(get_create_total_angle())<40)
    	{
        	create_drive_direct(-150,150);
        	msleep(10);
    	}      
    	while(get_create_rfcliff_amt()>1900)
    	{
        	create_drive_direct(150,150);
        	msleep(10);
    	}
    	create_stop();
	//mav(0,500);
	//msleep(3000);
	//ao();
    	create_disconnect();
    	return 0;
}
