/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x09170cff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c5c2ff, 0x09170cff, 0x596d5dff },
	[SchemeSel]  = { 0xc1c5c2ff, 0xC88B73ff, 0x578B77ff },
	[SchemeUrg]  = { 0xc1c5c2ff, 0x578B77ff, 0xC88B73ff },
};
