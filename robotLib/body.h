//
// Created by Charlie Wadds on 2024-02-27.
//
#include <stdint.h>
#include "Matrices.h"
#ifndef MULTIBODY_DYNAMICS_LG_C_BODY_H
#define MULTIBODY_DYNAMICS_LG_C_BODY_H


/*
 *    - Name:       Assigned name to identify body
%     - Type:       Identify rigid or flexible body
%     - Mass:       Assigned mass matric of the body about BCF (both inertia and mass)
%     - Transform:  Screw associated with transformation from start to end                       (RIGID ONLY)
%     - Stiff:      Stiffness Matrix of the body about BCF (axial, shear, torsional & bending)   (FLEXIBLE ONLY)
%     - Damp:       Dampiing Matrix of the body about BCF (axial, shear, torsional & bending)    (FLEXIBLE ONLY)
%     - CoM:        Screw associated with transformation from start to Center of Mass            (RIGID ONLY)
%     - F_0:        Twist associated with free strain of the continuum under no applied loadings (FLEXIBLE ONLY)
%     - N:          Number of elements used to discretize the continuum                          (FLEXIBLE ONLY)
%     - L:          Reference length of continuum under no applied loadings                      (FLEXIBLE ONLY)
 */

typedef struct rigid_body_s{

    char *Name;
    matrix *Mass; //Assigned mass matric of the body about BCF todo what is BCF?
    matrix *Transform; //Screw associated with transformation from start to end

    matrix *CoM; //Screw associated with transformation from start to Center of Mass



}rigid_body;

typedef struct soft_body_s{
    /*
     * NAME        = varargin{1};
        TYPE        = 'FLEXIBLE';
        MASS        = varargin{3};
        TRANSFORM   = zeros(6,1);
        STIFF       = varargin{4};
        DAMP        = varargin{5};
        CoM         = zeros(6,1);
        F_0         = varargin{6};
        N           = varargin{7};
        L           = varargin{8};
     */

    char *Name;
    matrix *Mass;
    matrix *Stiff;
    matrix *Damp;
    matrix *F_0;
    uint8_t N;
    uint8_t L;



}soft_body;


#endif //MULTIBODY_DYNAMICS_LG_C_BODY_H
