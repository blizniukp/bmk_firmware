#ifndef LED_STRIP_H__
#define LED_STRIP_H__

#define		COLOR_WHITE		    			1
#define		COLOR_RED		    			2
#define		COLOR_GREEN		    			3
#define		COLOR_BLUE		    			4
#define		COLOR_YELLOW	    			5
#define		COLOR_BLACK		    			0
#define		COLOR_VIOLET	    			6
#define		COLOR_TURQUOISE	    			7
#define		COLOR_ORANGE	    			8

#define		MODE_GTA						0
#define		MODE_ALTIUM						1
#define		MODE_VSC						2

#define 	THREAD_LED_STRIP_PRIORITY 		7
#define 	THREAD_LED_STRIP_STACKSIZE  	512

static const uint8_t gta_pattern[40] =     {0x00, 0x20, 0x2F, 0x2F, 
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x20, 0x2F, 0x2F,
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x2f, 0x00, 0x00,
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x2f, 0x00, 0x00, 
											0x00, 0x2f, 0x00, 0x00};

static const uint8_t altium_pattern[40] =  {0x00, 0x20, 0x2F, 0x2F, 
							   				0x00, 0x2f, 0x17, 0x00, 
							   				0x00, 0x20, 0x2F, 0x2F,
		         			   				0x00, 0x2f, 0x17, 0x00, 
											0x00, 0x2f, 0x17, 0x00, 
											0x00, 0x2f, 0x17, 0x00, 
											0x00, 0x2f, 0x17, 0x00,
											0x00, 0x2f, 0x17, 0x00, 
											0x00, 0x2f, 0x17, 0x00, 
											0x00, 0x2f, 0x17, 0x00};

static const uint8_t vsc_pattern[40] =     {0x00, 0x20, 0x2F, 0x2F, 
							   				0x00, 0x00, 0x00, 0x2f, 
							   				0x00, 0x20, 0x2F, 0x2F,
		         			   				0x00, 0x00, 0x00, 0x2f, 
											0x00, 0x00, 0x00, 0x2f, 
											0x00, 0x00, 0x00, 0x2f, 
											0x00, 0x00, 0x00, 0x2f,
											0x00, 0x00, 0x00, 0x2f, 
											0x00, 0x00, 0x00, 0x2f, 
											0x00, 0x00, 0x00, 0x2f};

static const uint8_t turn_off_pattern[40] ={0x00, 0x00, 0x00, 0x00, 
							   				0x00, 0x00, 0x00, 0x00, 
							   				0x00, 0x00, 0x00, 0x00,
		         			   				0x00, 0x00, 0x00, 0x00, 
											0x00, 0x00, 0x00, 0x00, 
											0x00, 0x00, 0x00, 0x00, 
											0x00, 0x00, 0x00, 0x00,
											0x00, 0x00, 0x00, 0x00, 
											0x00, 0x00, 0x00, 0x00, 
											0x00, 0x00, 0x00, 0x00};

static const uint8_t red_pattern[40] 	  ={0x00, 0x20, 0x00, 0x00, 
							   				0x00, 0x20, 0x00, 0x00, 
							   				0x00, 0x20, 0x00, 0x00,
		         			   				0x00, 0x20, 0x00, 0x00, 
											0x00, 0x20, 0x00, 0x00, 
											0x00, 0x20, 0x00, 0x00, 
											0x00, 0x20, 0x00, 0x00,
											0x00, 0x20, 0x00, 0x00, 
											0x00, 0x20, 0x00, 0x00, 
											0x00, 0x20, 0x00, 0x00};

static const uint8_t green_pattern[40] 	  ={0x00, 0x00, 0x20, 0x00, 
							   				0x00, 0x00, 0x20, 0x00, 
							   				0x00, 0x00, 0x20, 0x00,
		         			   				0x00, 0x00, 0x20, 0x00, 
											0x00, 0x00, 0x20, 0x00, 
											0x00, 0x00, 0x20, 0x00, 
											0x00, 0x00, 0x20, 0x00,
											0x00, 0x00, 0x20, 0x00, 
											0x00, 0x00, 0x20, 0x00, 
											0x00, 0x00, 0x20, 0x00};

static const uint8_t blue_pattern[40] 	  ={0x00, 0x00, 0x00, 0x20, 
							   				0x00, 0x00, 0x00, 0x20, 
							   				0x00, 0x00, 0x00, 0x20,
		         			   				0x00, 0x00, 0x00, 0x20, 
											0x00, 0x00, 0x00, 0x20, 
											0x00, 0x00, 0x00, 0x20, 
											0x00, 0x00, 0x00, 0x20,
											0x00, 0x00, 0x00, 0x20, 
											0x00, 0x00, 0x00, 0x20, 
											0x00, 0x00, 0x00, 0x20};

extern int8_t mode_counter;

int led_strip_init(void);
int set_button_color(uint8_t position, uint8_t color);
int set_button_pattern(const uint8_t *pattern);
int turn_off_all_buttons(void);
int set_pattern_without_one_button(uint32_t position);

void thread_led_strip(void);


#endif

