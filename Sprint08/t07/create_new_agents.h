#pragma once

#include "agent.h"

#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
t_agent *mx_create_agent(char *name, int power, int strength);

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);
