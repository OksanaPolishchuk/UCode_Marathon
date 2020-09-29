#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *ag =  NULL; 
    
    if(!name) {
        return ag;
    }

    ag = malloc(sizeof(struct s_agent));
    ag->name = mx_strdup(name);
    ag->power = power;
    ag->strength = strength;

    return ag;
}
