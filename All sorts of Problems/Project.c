 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
          FILE *in_file  = fopen("ratings", "r");
          FILE *out_file = fopen("ratings", "w");

          if (in_file == NULL || out_file == NULL)
            {
              printf("Error! Could not open file\n");
              exit(-1);
            }


          /*fprintf(file, "this is a test %d\n", integer); // write to file

          fprintf(stdout, "this is a test %d\n", integer); // write to screen
          printf(         "this is a test %d\n", integer); // write to screen  */

          char line[100];int int_var_1;
          fgets( line, 100, stdin );
      //    fscanf(file, "%d", &int_var_1);
      fscanf(stdin, "%d", &int_var_1);
          //scanf(        "%d %d", &int_var_1, &int_var_2);

           while ( fgets( line, 100, stdin ) != NULL )
            {
              fprintf("The line is: %s\n", line);
            }
    fprintf(stdout, "this is a test %d\n", int_val_1);
return 0;
 }
