bool mysql_load_papers(const char *where_clause, int *num_papers_out, paper_t **papers_out, keyword_set_t **keyword_set_out);
bool mysql_save_paper_positions(layout_t *layout);
bool mysql_load_paper_positions(layout_t *layout);
