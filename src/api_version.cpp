#include <nintendo_hac_hb_api_version.h>

#ifndef PROJECT_VER_MAJOR
#define PROJECT_VER_MAJOR 0
#endif

#ifndef PROJECT_VER_MINOR
#define PROJECT_VER_MINOR 0
#endif

#ifndef PROJECT_VER_PATCH
#define PROJECT_VER_PATCH 0
#endif

void _nintendo_hac_hb_get_api_version(uint32_t& major, uint32_t& minor, uint32_t& patch)
{
	major = PROJECT_VER_MAJOR;
	minor = PROJECT_VER_MINOR;
	patch = PROJECT_VER_PATCH;
}