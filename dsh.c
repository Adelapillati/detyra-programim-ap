#include <stdio.h>

void konverto_noten_ne_shkronjen(int pike) {

     switch (pike) {
	     case 90 ... 100:
	     	printf("A") ;
	     	break;
	    case 80 ... 89:
	    	printf("B");
	    	break;
	    case 70 ... 79:
	    	printf("C");
	    	break;
	    case 60 ... 69:
		    printf("D");
		    break;
		case 0 ... 59:
			printf("F");
			break;
		default:
			printf("gabim piket variojne nga 0-100.");
	}
}

int main () {
	int pike;
	printf("jep piket ne forme shkonjore");
	scanf("%d",&pike);
	
	konverto_noten_ne_shkronjen(pike);
	
	return 0;
}

			
