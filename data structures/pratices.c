#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lnode{
  char title[100];
  struct lnode*link;
};
typedef struct lnode playlists;
playlists*head=NULL;

void addsongs(char songname)
{
 playlists*newsongs=(playlists*)malloc(sizeof(playlists));
 newsongs->title=songname;
 newsongs->link=head;
 head=newsongs;
}
void display()
{
  playlists*list=head;
  if(list==NULL)
  {
    printf("playlist is empty");
  }
  while(list!=NULL)
  {
    printf("%d\t",list->title);
    strcpy(list,list->link);
  }
}
int main()
{
  addsongs("hits songs");
  display();
}