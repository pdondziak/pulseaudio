#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <pulsecore/module.h>
#include <stdio.h>

int pa__init(pa_module* m)
{
  printf("Hello from Genivi Audio Manager Module!");
  return 0;
}
