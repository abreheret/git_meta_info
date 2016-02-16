#include "git_meta_info.h"
#include <stdio.h>

int main() {
	printf("----------------------------------\n");
	printf("Meta git info : \n");
	printf("----------------------------------\n");
	printf("branch   : %s\n",GIT_BRANCH);
	printf("commit   : %s\n",GIT_COMMIT_HASH);
	printf("date     : %s\n",GIT_DATE);
	printf("last tag : %s\n",GIT_TAG);
	printf("all      : %s\n",META_INFO);
	printf("----------------------------------\n");
}

