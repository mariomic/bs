#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int main(int argc, char **argv) {

	pid_t pid; 
	time_t t;
    t = time(NULL);

	
	pid = getpid(); //Prozess ID

	
    if( argc != 2 ) {
	(void)fprintf(stderr, "synopsis: ticker message\n");
	return(1);
    }

    while(1) {
		
		(void)printf("%d: %s: %s", pid, argv[1], ctime(&t) );
	(void)sleep(1);
    }

    return(0);
}
