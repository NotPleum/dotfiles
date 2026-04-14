/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x302425ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xcbc8c8ff, 0x302425ff, 0x7f686bff },
	[SchemeSel]  = { 0xcbc8c8ff, 0xC2AAB2ff, 0x75BDCEff },
	[SchemeUrg]  = { 0xcbc8c8ff, 0x75BDCEff, 0xC2AAB2ff },
};
