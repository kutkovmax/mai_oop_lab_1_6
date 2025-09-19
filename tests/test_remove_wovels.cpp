#include <gtest/gtest.h>
#include "../src/remove_wovels.h"

TEST(test_remove_wovels, only_wovels) {
    EXPECT_EQ(removeWovels("aaaaa"), "");
}

TEST(test_remove_wovels, no_wovels) {
    EXPECT_EQ(removeWovels("bCd"), "bCd");
}

TEST(test_remove_wovels, common) {
    EXPECT_EQ(removeWovels("abecid"), "bcd");
}

TEST(test_remove_wovels, all_wowels) {
    EXPECT_EQ(removeWovels("AaEeIiOoUuYy"), "");
}

TEST(test_remove_wovels, with_numbers) {
    EXPECT_EQ(removeWovels("AbC!dEFz"), "bC!dFz");
}


