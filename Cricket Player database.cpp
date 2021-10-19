
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cricket_player_database{
    char player_name[100];
    char player_country[100];
    char gender[100];
    char maritial_status[100];
    char captain[100];
    char player_type[100];
    char IPL[100];
    float salary;
    int age;
    int player_ranking;

};
void query()
{
    printf("PRESS....\n\n1.find out the highest salary of bangladeshi player\n2.find out the player name who get lowest salary\n3.find out the player name whose age between 25-35\n4.find out the player whose age is highest\n5.find out the player who play IPL\n6.find out the married & unmarried player\n7.find out the player who is captain\n8.find out the player who is captain of india\n9.find out the player type whose are: 1)batsman 2)bowler 3)all rounder\n10.find out the rank in top 10\n11.find out the rank of bangladeshi player\n12.find out the player who come from: 1)bangladesh 2)india 3)pakistan 4)srilanka13.find out the ranking of bangladeshi player who is in rank 1-10\n14.find out the player & his rank who is bowler of srilanka\n15.find out the player name who is batsman of pakistan & his rank 1-10\n\n\n");
}

int main()
{
    int n=50,y;
    cricket_player_database s[50];
    FILE *fp;
    fp=fopen("cricket_player_database.txt","r");

    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%f:%d:%d",&s[i].player_name,&s[i].player_country,&s[i].gender,&s[i].maritial_status,&s[i].captain,&s[i].player_type,&s[i].IPL,&s[i].salary,&s[i].age,&s[i].player_ranking);
    }


           /*** testing ***/

     /*   for(int i=0;i<n;i++)

        {
            printf("name:");
            puts(s[i].player_name);
            //printf("\n");
            printf("country:");
            puts(s[i].player_country);
            //printf("\n");
            printf("gender:");
            puts(s[i].gender);
            //printf("\n");
            printf("maritial_status:");
            puts(s[i].maritial_status);
            //printf("\n");
            printf("captain:");
            puts(s[i].captain);
            //printf("\n");
            printf("player_type:");
            puts(s[i].player_type);
            //printf("\n");
            printf("IPL:");
            puts(s[i].IPL);
            //printf("\n");
            printf("salary:");
            printf("%.2f\n",s[i].salary);
            //printf("\n");
            printf("age:");
            printf("%d\n",s[i].age);
            //printf("\n");
            printf("ranking:");
            printf("%d\n",s[i].player_ranking);
            printf("\n");

        }
    */

        /*** list of quaries ***/

        //1.find out the highest salary of bangladeshi player
        //2.find out the player name who get lowest salary
        //3.find out the player name whose age between 25-35
        //4.find out the player whose age is highest
        //5.find out the player who play IPL
        //6.find out the married & unmarried player
        //7.find out the player who is captain
        //8.find out the player who is captain of india
        //9.find out the player type whose are: 1)batsman 2)bowler 3)all rounder
        //10.find out the rank in top 10
        //11.find out the rank of bangladeshi player
        //12.find out the player who come from: 1)bangladesh 2)india 3)pakistan 4)srilanka1
        //13.find out the ranking of bangladeshi player who is in rank 1-10
        //14.find out the player & his rank who is bowler of srilanka
        //15.find out the player name who is batsman of pakistan & his rank 1-10

        int i;

        /*** 1.find out the highest salary of bangladeshi player ***/
        query();

        while(1){
            scanf("%d",&y);
            if(y==1)
                {
                    system("cls");
                    printf("The Highest Salary of Bangladeshi Player:\n");
                    printf("\n");

                    float max_salary=s[0].salary;
                    int max_index=0;

                    for(int i=0;i<n;i++)
                        {
                           if(strcmp(s[i].player_country,"bangladesh")==0)
                              {
                                 max_salary=s[i].salary;
                                 max_index=i;
                                 break;
                              }
                        }

                    for(int i=0;i<n;i++)
                        {
                            if( (strcmp(s[i].player_country,"bangladesh")==0) && (s[i].salary>max_salary) )
                              {
                                max_salary=s[i].salary;
                                max_index=i;
                              }
                        }
                          printf("NAME :");
                          puts(s[max_index].player_name);
                          scanf("%d",&y);
                          printf("\n");

                }



            /***2.find out the player name who get lowest salary ***/


                 if(y==2)
                    {
                        system("cls");
                        query();
                        printf("The Player Name who get Lowest Salary:\n");
                        printf("\n");

                        float min_salary=s[0].salary;
                        int min_index=0;

                        for(i=0;i<n;i++)
                        {
                            if(s[i].salary<min_salary)
                            {
                                min_salary=s[i].salary;
                                min_index=i;
                            }

                        }
                          printf("NAME :");
                          puts(s[min_index].player_name);
                          scanf("%d",&y);
                          printf("\n");
                    }




            /*** 3.find out the player name whose age between 25-35 ***/

                if(y==3)
                {
                    system("cls");
                    query();
                    printf("Player Name between 25-30:\n");
                    printf("\n");
                    int min_index=0;
                    int min_age=s[0].age;

                    for(i=0;i<n;i++)
                    {
                        if(s[i].age>=25 && s[i].age<=30)
                        {
                            printf("NAME :");
                            puts(s[i].player_name);
                            printf("AGE :");
                            printf("%d\n",s[i].age);
                        }
                    }
                    scanf("%d",&y);
                    printf("\n");
                }



            /*** 4.find out the player whose age is highest ***/

            if(y==4)
            {
                system("cls");
                    query();
                 printf("The Player whose Age is Highest:\n");
                 printf("\n");
                 int max=-100000;
                 for(i=0;i<n;i++)
                 {
                    if(s[i].age>max)
                    {
                        max=s[i].age;
                    }
                 }
                 for(i=0;i<n;i++)
                 {
                    if(s[i].age==max)
                    {
                        printf("NAME :");
                        puts(s[i].player_name);
                    }
                 }
                 scanf("%d",&y);
                 printf("\n");

            }



            /*** 5.find out the player who play IPL ***/

            if(y==5)
                {
                    system("cls");
                    query();
                    printf("The Player who play IPL:\n");
                    printf("\n");

                    for(i=0;i<n;i++)
                       {
                          if(strcmp(s[i].IPL,"yes")==0)
                            {
                                printf("NAME :");
                                puts(s[i].player_name);
                            }
                       }
                         scanf("%d",&y);
                         printf("\n");
                }



            /*** 6.find out the married & unmarried player ***/

                if(y==6)
                 {
                     system("cls");
                    query();
                    printf("The Player who is Married:\n");
                    printf("\n");

                    for(i=0;i<n;i++)
                      {
                        if(strcmp(s[i].maritial_status,"married")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }
                      }
                       printf("\n\n");


                  printf("The Player who is Unmarried:\n");

                  for(i=0;i<n;i++)
                    {
                      if(strcmp(s[i].maritial_status,"unmarried")==0)
                        {
                            printf("NAME :");
                            puts(s[i].player_name);
                        }
                    }
                     scanf("%d",&y);
                     printf("\n");
                }



            /*** 7.find out the player who is captain ***/

                if(y==7)
                    {
                        system("cls");
                    query();
                      printf("The Player who is Captain:\n");
                      printf("\n");

                      for(i=0;i<n;i++)
                        {
                          if(strcmp(s[i].captain,"yes")==0)
                            {
                                printf("NAME :");
                                puts(s[i].player_name);
                            }
                       }
                         scanf("%d",&y);
                         printf("\n");
                   }




            /*** 8.find out the player who is captain of india ***/

                if(y==8)
                {
                    system("cls");
                    query();
                  printf("The Player who is Captain of India:\n");
                  printf("\n");

                  for(i=0;i<n;i++)
                    {
                      if(strcmp(s[i].captain,"yes")==0 && strcmp(s[i].player_country,"india")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }
                   }

                    scanf("%d",&y);
                    printf("\n");
                }



            /*** 9.find out the player type whose are: 1)batsman 2)bowler 3)all rounder ***/
                if(y==9)
                 {
                     system("cls");
                    query();
                    printf("The Player Type whose are: 1)Batsman 2)Bowler 3)All rounder:\n");
                    printf("\n");

                    printf("Batsman:\n");
                    for(i=0;i<n;i++)

                    {
                      if(strcmp(s[i].player_type,"batsman")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }
                    }
                    printf("\n\n");



                    printf("Bowler:\n");
                    for(i=0;i<n;i++)

                    {
                      if(strcmp(s[i].player_type,"bowler")==0)
                           {
                                printf("NAME :");
                                puts(s[i].player_name);
                           }
                    }
                    printf("\n\n");



                    printf("All rounder:\n");
                    printf("\n");
                    for(i=0;i<n;i++)

                    {
                      if(strcmp(s[i].player_type,"all rounder")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }

                    }
                     scanf("%d",&y);
                     printf("\n");
                 }



             /*** 10.find out the rank in top-10 ***/

                if(y==10)
                {
                    system("cls");
                    query();
                   printf("The Rank in Top-10:\n");
                   printf("\n");

                   for(i=0;i<n;i++)
                    {
                        if(s[i].player_ranking>=01 && s[i].player_ranking<=10)
                        {
                            printf("NAME :");
                            puts(s[i].player_name);
                            printf("PLAYER RANK :");
                            printf("%d\n",s[i].player_ranking);
                        }
                    }
                     scanf("%d",&y);
                     printf("\n");
                }




                /*** 11.find out the rank of bangladeshi player ***/

                if(y==11)
                    {
                        system("cls");
                    query();

                      printf("The Rank of Bangladeshi Player:\n");
                      printf("\n");

                      for(i=0;i<n;i++)
                         {
                           if(strcmp(s[i].player_country,"bangladesh")==0)
                             {
                                 printf("NAME :");
                                 puts(s[i].player_name);
                                 printf("PLAYER RANK :");
                                 printf("%d\n",s[i].player_ranking);
                             }

                        }
                         scanf("%d",&y);
                         printf("\n");
                    }



                /*** 12.find out the player who come from: 1)bangladesh 2)india 3)pakistan 4)srilanka1 ***/

                if(y==12)
                    {
                        system("cls");
                    query();
                         printf("The Player who Come from: 1)Bangladesh 2)India 3)Pakistan 4)Srilanka1:\n");
                         printf("\n");

                         printf("From Bangladesh:\n");
                         printf("\n");
                    for(i=0;i<n;i++)

                     {
                        if(strcmp(s[i].player_country,"bangladesh")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }

                    }
                    printf("\n");

                        printf("From India:\n");
                        printf("\n");
                    for(i=0;i<n;i++)

                     {
                        if(strcmp(s[i].player_country,"india")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }

                     }
                     printf("\n");

                       printf("From Pakistan:\n");
                       printf("\n");
                    for(i=0;i<n;i++)

                        {
                         if(strcmp(s[i].player_country,"pakistan")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }

                        }
                        printf("\n");


                        printf("From Srilanka:\n");
                        printf("\n");
                      for(i=0;i<n;i++)

                   {
                     if(strcmp(s[i].player_country,"srilanka")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                           }

                   }
                    scanf("%d",&y);
                    printf("\n");

                }



                /*** 13.find out the ranking of bangladeshi player who is in rank 1-10 ***/

                if(y==13)
                {
                    system("cls");
                    query();
                    printf("The Rank of Bangladeshi Player who is in Rank 1-10:\n");
                    printf("\n");

                    for(i=0;i<n;i++)
                    {
                        if((strcmp(s[i].player_country,"bangladesh")==0) && s[i].player_ranking>=01 && s[i].player_ranking<=10)
                        {
                            printf("NAME :");
                            puts(s[i].player_name);
                            printf("PLAYER RANK :");
                            printf("%d\n",s[i].player_ranking);
                        }
                    }
                     scanf("%d",&y);
                     printf("\n");
                }


                /*** 14.find out the player & his rank who is bowler of srilanka ***/

                 if(y==14)
                   {
                       system("cls");
                    query();
                      printf("The Player Name & his Rank who is Bowler of Srilanka:\n");
                      printf("\n");

                      for(i=0;i<n;i++)
                       {
                         if(strcmp(s[i].player_country,"srilanka")==0 && strcmp(s[i].player_type,"bowler")==0)
                           {
                               printf("NAME :");
                               puts(s[i].player_name);
                               printf("PLAYER RANK :");
                               printf("%d\n",s[i].player_ranking);
                           }
                      }
                       scanf("%d",&y);
                       printf("\n");
                  }



                /*** 15.find out the player name who is batsman of pakistan & his rank 1-10 ***/

                if(y==15)
                 {
                     system("cls");
                    query();
                    printf("The player Name who is Batsman of Pakistan & his Rank 1-10:\n");
                    printf("\n");

                    for(i=0;i<n;i++)
                    {
                        if(strcmp(s[i].player_country,"pakistan")==0)
                        {

                            if(strcmp(s[i].player_type,"all rounder")==0)
                            {
                                if(s[i].player_ranking>=1)
                                {
                                    if(s[i].player_ranking<=10)
                                    {
                                        printf("NAME :");
                                        puts(s[i].player_name);
                                        printf("PLAYER RANK :");
                                        printf("Player Rank-%d\n",s[i].player_ranking);
                                    }
                                }
                            }
                        }

                    }
                     //scanf("%d",&y);
                     printf("\n");
                }
                else if(y==0)
                {
                    system("cls");
                    query();
                    printf("Thank you ..\n");
                    break;
                }
                else
                {
                    system("cls");
                    query();
                    printf("Wrong keyword !!!\n");
                }

                //goto up;
        }


        fclose(fp);

        return 0;
}

