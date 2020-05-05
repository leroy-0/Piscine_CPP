/*
** castmania.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex04
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 12:04:56 2017 leroy_0
** Last update Thu Jan  5 12:04:56 2017 leroy_0
*/

#include <stdio.h>
#include "castmania.h"

void	exec_operation(t_instruction_type instruction_type, void *data)
{
	if (instruction_type == ADD_OPERATION)
	{
		exec_add(((t_instruction *)data)->operation);
		if (((t_instruction *)data)->output_type == VERBOSE)
			printf("%d\n", ((t_add *)((t_instruction *)data)->operation)->add_op.res);
	}
	else if (instruction_type == DIV_OPERATION)
	{
		exec_div(((t_instruction *)data)->operation);
		if (((t_instruction *)data)->output_type == VERBOSE && ((t_div *)((t_instruction *)data)->operation)->div_type == INTEGER)
			printf("%d\n", ((t_integer_op *)((t_div *)((t_instruction *)data)->operation)->div_op)->res);
		if (((t_instruction *)data)->output_type == VERBOSE && ((t_div *)((t_instruction *)data)->operation)->div_type == DECIMALE)
			printf("%f\n", ((t_decimale_op *)((t_div *)((t_instruction *)data)->operation)->div_op)->res);
	}
}

void	exec_instruction(t_instruction_type instruction_type, void *data)
{
	if (instruction_type == PRINT_INT)
		printf("%d\n", (*(int *)data)); 
	else if (instruction_type == PRINT_FLOAT)
		printf("%f\n", (*(float *)data));
	else
		exec_operation(instruction_type, data);
}

int 	main()
{
    int 			i = 5;
    float 			f = 42.5;
    t_instruction 	inst;
    t_add			add;
    t_div			div;
    t_integer_op	int_op;
    printf("Display i: ");
    exec_instruction(PRINT_INT, &i);
    printf("Display f: ");
    exec_instruction(PRINT_FLOAT, &f);
    printf("\n");
    int_op.a = 10;
    int_op.b = 3;
    add.add_type = ABSOLUTE;
    add.add_op = int_op;
    inst.output_type = VERBOSE;
    inst.operation = &add;
    printf("10 + 3 = ");
    exec_operation(ADD_OPERATION, &inst);
    printf("Indeed , 10 + 3 = %d\n\n", add.add_op.res);
    div.div_type = INTEGER;
    div.div_op = &int_op;
    inst.operation = &div;
    printf(" 10 / 3 = ");
    exec_operation(DIV_OPERATION, &inst);
    printf( " Indeed , 10 / 3 = %d\n\n " , int_op.res);
    return (0);
}