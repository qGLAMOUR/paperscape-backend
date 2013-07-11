typedef struct _force_params_t {
    bool do_close_repulsion;
    double close_repulsion_a;
    double close_repulsion_b;
    double close_repulsion_c;
    double close_repulsion_d;
    bool use_ref_freq;
    double anti_gravity_falloff_rsq;
    double anti_gravity_falloff_rsq_inv;
    double link_strength;
} force_params_t;

struct _quad_tree_t;

void quad_tree_forces(force_params_t *param, struct _quad_tree_t *qt);
void compute_attractive_link_force(force_params_t *param, bool do_tred, layout_t *layout);
