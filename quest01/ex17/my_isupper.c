int my_isupper(char param_1){
   int abc = ("%d", param_1);
   for(int i = 65; i<=90; i++){
       if(i == abc){
           return 1;
       }
   }
   return 0;
}