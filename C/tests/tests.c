#include "minunit.h"
#include "../Strings/palindrome.c"
#include "../Tableaux/tri.h"
#include "../Tableaux/morpion.h"

// void test_tri(void)
// {
//     int tab_before_sorting[10] = {4, 8, 2, 9, 1, 45, 23, 101, 15, 98};
//     int tab_after_sorting[10] = {1, 2, 4, 8, 9, 15, 23, 45, 98, 101};
// }
MU_TEST(test_echange)
{
    int a = 10, b = 20;
    echange(&a, &b);
    mu_assert_int_eq(10, b);
    mu_assert_int_eq(20, a);
}

MU_TEST(test_tri_bulle)
{
    int tab_before_sorting[10] = {4, 8, 2, 9, 1, 45, 23, 101, 15, 98};
    int tab_after_sorting[10] = {1, 2, 4, 8, 9, 15, 23, 45, 98, 101};
    tri_bulle(tab_before_sorting, 10);
    for (int i = 0; i < 10; i++)
    {
        mu_assert_int_eq(tab_after_sorting[i], tab_before_sorting[i]);
    }
}

MU_TEST(test_tri_selection)
{
    int tab_before_sorting[10] = {4, 8, 2, 9, 1, 45, 23, 101, 15, 98};
    int tab_after_sorting[10] = {1, 2, 4, 8, 9, 15, 23, 45, 98, 101};
    tri_selection(tab_before_sorting, 10);
    for (int i = 0; i < 10; i++)
    {
        mu_assert_int_eq(tab_after_sorting[i], tab_before_sorting[i]);
    }
}

MU_TEST(test_palindrome)
{
    mu_check(is_palindrome("kayak") == 1);
    // mu_check(is_palindrome("Kayak") == 1);
    mu_check(is_palindrome("Bonjour") == 0);
}

MU_TEST(test_morpion_combinaison)
{
    char grille[3][3] = {{'O', '+', '+'},
                         {'+', 'O', '+'},
                         {'+', '+', 'O'}};
    mu_check(combinaison(*grille) == 1);
    char grille2[3][3] = {{'X', '+', '+'},
                          {'X', 'O', '+'},
                          {'X', '+', 'O'}};
    mu_check(combinaison(*grille2) == 1);
    char grille3[3][3] = {{'O', 'O', 'O'},
                          {'X', 'O', '+'},
                          {'X', '+', 'X'}};
    mu_check(combinaison(*grille3) == 1);
}

// MU_TEST(test_assert)
// {
//     mu_assert(foo == 7, "foo should be 7");
// }

// MU_TEST(test_assert_fail)
// {
//     mu_assert(foo != 7, "foo should be <> 7");
// }

// MU_TEST(test_assert_int_eq)
// {
//     mu_assert_int_eq(4, bar);
// }

// MU_TEST(test_assert_int_eq_fail)
// {
//     mu_assert_int_eq(5, bar);
// }

// MU_TEST(test_assert_double_eq)
// {
//     mu_assert_double_eq(0.1, dbar);
// }

// MU_TEST(test_assert_double_eq_fail)
// {
//     mu_assert_double_eq(0.2, dbar);
// }

// MU_TEST(test_fail)
// {
//     mu_fail("Fail now!");
// }

// MU_TEST(test_string_eq)
// {
//     mu_assert_string_eq("Thisstring", foostring);
// }

// MU_TEST(test_string_eq_fail)
// {
//     mu_assert_string_eq("Thatstring", foostring);
// }

MU_TEST_SUITE(test_suite)
{
    // MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

    // MU_RUN_TEST(test_check);
    // MU_RUN_TEST(test_assert);
    // MU_RUN_TEST(test_assert_int_eq);
    // MU_RUN_TEST(test_assert_double_eq);

    // MU_RUN_TEST(test_check_fail);
    // MU_RUN_TEST(test_assert_fail);
    // MU_RUN_TEST(test_assert_int_eq_fail);
    // MU_RUN_TEST(test_assert_double_eq_fail);

    MU_RUN_TEST(test_morpion_combinaison);
    MU_RUN_TEST(test_tri_selection);
    MU_RUN_TEST(test_tri_bulle);
    MU_RUN_TEST(test_echange);

    MU_RUN_TEST(test_palindrome);
}

int main(int argc, char *argv[])
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}