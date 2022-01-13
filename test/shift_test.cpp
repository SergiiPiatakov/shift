#include <gtest/gtest.h>
#include <shift.h>



TEST (lcsh, Case_001_Zero)
{
    EXPECT_EQ (Shift::lcsh (1, 0), 1);
}

TEST (lcsh, Case_002_OneWoCarry)
{
    EXPECT_EQ (Shift::lcsh (1, 1), 2);
}

TEST (lcsh, Case_003_OneWithCarry)
{
    EXPECT_EQ (Shift::lcsh (2147483649, 1), 3);
}

TEST (lcsh, Case_004_FullCyrcle)
{
    EXPECT_EQ (Shift::lcsh (1, 32), 1);
}

TEST (lcsh, Case_005_OneReminderWoCarry)
{
    EXPECT_EQ (Shift::lcsh (1, 33), 2);
}

TEST (lcsh, Case_006_OneReminderWithCarry)
{
    EXPECT_EQ (Shift::lcsh (2147483649, 33), 3);
}
