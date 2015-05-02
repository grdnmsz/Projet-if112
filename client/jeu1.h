#ifndef _JEU1_H
#define _JEU1_H

#define MAX_QUESTION_LEN 5000

struct deck {
    int nb_qst;
    int nb_lignes;
    char **questions;
};

struct double_char {
    char **s;
    int n_i; // nombre de lignes du double tableau
};

void __free(struct double_char *d_str); // size est le nombre de lignes


void wait_for_quit(const struct board_t *board); 
/* attendre l'appuie d'une touche pour quitter */


void print_question(const struct board_t *board, struct deck m_deck, int flag);


void countdown(const struct board_t *board);


void init_deck(struct deck *my_deck); 
/* on calcule le nombre de questions et on charge le fichier dans un 
   tableau de chaîne */

#endif