TEST(VectorIncrementTest, HandlesPositiveNumbers) {
    vector<int> vec = { 1, 2, 3, 4 };
    int n = 5;
    vector<int> expected = { 6, 7, 8, 9 };
    EXPECT_EQ(incrementVector(vec, n), expected);
}

TEST(VectorIncrementTest, HandlesNegativeNumbers) {
    vector<int> vec = { -1, -2, -3, -4 };
    int n = 3;
    vector<int> expected = { 2, 1, 0, -1 };
    EXPECT_EQ(incrementVector(vec, n), expected);
}

TEST(VectorIncrementTest, HandlesMixedNumbers) {
    vector<int> vec = { 1, -2, 3, -4 };
    int n = 2;
    vector<int> expected = { 3, 0, 5, -2 };
    EXPECT_EQ(incrementVector(vec, n), expected);
}
