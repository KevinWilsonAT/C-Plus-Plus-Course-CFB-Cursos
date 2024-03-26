#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    /*
        SYNTAX

	        increment type:
	
	        for(<counter> = <start_value>; <counter> <= <end_value>; <counter>++){
	            <command_block>;
	        }

			EX.:
	        
	        for(x = 1; x <= 5; x++){
	        	<command_block>;
	    	}
	
	        decrement type:
	
	        for(<counter> = <start_value>; <counter> >= <end_value>; <counter>--){
	            <command_block>;
	        }
	        
	        EX.:
	        
	        for(x = 5; x >= 1; x--){
	        	<command_block>;
	    	}
    */
	
	/*
		You can make loops with multiple counters, multiple start values and multiple counter steps in one for command,
		but with only 1 end variable
		
		SYNTAX
		
			increment type:
	
	        for(<ct1> = <st_vl1>, <ct2> = <st_vl2>, ...; <ct1> <= <end_vl>; <ct1><increment1>, <ct2><increment2>, ...){
	            <command_block>;
	        }
	        
	        EX.:
	        
	        for(x = 1, y = 2; x <= 10; x++, y+=2){
	            <command_block>;
	        }
	        
	        decrement type:
	
	        for(<ct1> = <st_vl1>, <ct2> = <st_vl2>, ...; <ct1> >= <end_vl>; <ct1><increment1>, <ct2><increment2>, ...){
	            <command_block>;
	        }
	        
	        EX.:
	        
	        for(x = 10, y = 10; x >= 1; x--, y-=2){
	            <command_block>;
	        }
	*/
	
	/*
		You can also set multiple end values, since there's a logical condition in that statement
		
		SYNTAX
			
	        for(<ct1> = <st_vl1>, <ct2> = <st_vl2>, ...; <ct1> <rel_op> <end_vl1> <log_op> <ct2> <rel_op> <end_vl2> ... ; <ct1><increment1>, <ct2><increment2>, ...){
	            <command_block>;
	        }
	        
	    	EX.:
	    	
	    	for(x = 1, y = 2, z = 3; x <= 10 && z <= 6; x++, y+=2, z+=3){
	            <command_block>;
	        }
	*/
	
	system("pause");
	return 0;
}
