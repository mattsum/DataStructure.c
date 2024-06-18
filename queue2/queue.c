static int queue[100];
static int rear; 	
static int front;

void push(int data) {		// func. definition
   queue[rear] = data;
   ++rear;
}

int pop(void) {
   --rear;
   return queue[rear];
}