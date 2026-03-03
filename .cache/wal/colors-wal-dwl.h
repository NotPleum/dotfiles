/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x070711ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c1c3ff, 0x070711ff, 0x56566aff },
	[SchemeSel]  = { 0xc1c1c3ff, 0x564769ff, 0x504364ff },
	[SchemeUrg]  = { 0xc1c1c3ff, 0x504364ff, 0x564769ff },
};
