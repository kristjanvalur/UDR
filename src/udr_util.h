/*****************************************************************************
Copyright 2012 Laboratory for Advanced Computing at the University of Chicago

This file is part of UDR.

Licensed under the Apache License, Version 2.0 (the "License"); 
you may not use this file except in compliance with the License. 
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions 
and limitations under the License.
*****************************************************************************/

#ifndef UDR_PROCESSES_H
#define UDR_PROCESSES_H

#include <sys/types.h>
#include <string>
#include <sstream>
#include <vector>

template <typename T>
std::string n_to_string ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

pid_t fork_exec(const std::vector<std::string> &args, int &p_to_c, int &c_to_p);
pid_t fork_execvp(const char *program, char* argv[], int * ptc, int * ctp);
int get_server_connection(char * host, char * port, char * udr_cmd, char * line, int line_size);
        
#endif
