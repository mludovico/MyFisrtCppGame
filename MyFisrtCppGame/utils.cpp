typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;

#define internal static;
#define global_variable static;

inline int clamp(int min, int max, int val) {
	if (val > max) return max;
	if (val < min) return min;
	return val;
}

