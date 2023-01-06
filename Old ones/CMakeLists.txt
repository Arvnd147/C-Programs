cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C
        questions/set1/1.c
        questions/set1/2.c
        questions/set1/3.c
        questions/set1/4.c
        questions/set1/5.c
        questions/set1/6.c
        questions/set1/tempCodeRunnerFile.c
        add.c
        armstrong.c
        armstrong_series.c
        ASCII.c
        automorphic.c
        calc.c
        CG_Puzzle.c
        char_print.c
        code_blocks.c
        egg.c
        even_number25.c
        fibonacci.c
        gatequestion.c
        gh1.c
        harsha.c
        hello_world.c
        labfat.c
        low_up_num.c
        matrix_90_anticlock.c
        matrixadd.c
        menu.c
        mergesort.c
        node_creation.c
        odd_number.c
        pointer.c
        prepost.c
        prime25.c
        recs.c
        reverse_num.c
        sample.c
        sizeof.c
        small_large_array.c
        strings_with_space.c
        sum_of_digits.c
        sum_of_first_row_matrix.c
        sum_product.c
        swap.c
        tempCodeRunnerFile.c
        vowel.c)

add_executable(fibonacci fibonacci.c)
add_executable(add add.c)