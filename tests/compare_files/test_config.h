#ifndef TEST_CONFIG_H
#define TEST_CONFIG_H

/* Generated with ninja-bear v1.0.0 (https://pypi.org/project/ninja-bear/). */
const struct {
    unsigned char MyBoolean;
    int MyInteger;
    float MyFloat;
    float MyCombinedFloat;
    double MyDouble;
    char MyRegex[15]; /* Just another RegEx. */
    char MySubstitutedString[45];
} TestConfig = {
    1,
    142,
    322.0f,
    45724.0f,
    233.9,
    "Test Reg(E|e)x",
    "Sometimes I just want to scream Hello World!",
};

#endif /* TEST_CONFIG_H */
