const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#302425", /* black   */
  [1] = "#75BDCE", /* red     */
  [2] = "#C2AAB2", /* green   */
  [3] = "#E1A4AC", /* yellow  */
  [4] = "#EECEA8", /* blue    */
  [5] = "#9DDBDF", /* magenta */
  [6] = "#DFD5DE", /* cyan    */
  [7] = "#cbc8c8", /* white   */

  /* 8 bright colors */
  [8]  = "#7f686b",  /* black   */
  [9]  = "#75BDCE",  /* red     */
  [10] = "#C2AAB2", /* green   */
  [11] = "#E1A4AC", /* yellow  */
  [12] = "#EECEA8", /* blue    */
  [13] = "#9DDBDF", /* magenta */
  [14] = "#DFD5DE", /* cyan    */
  [15] = "#cbc8c8", /* white   */

  /* special colors */
  [256] = "#302425", /* background */
  [257] = "#cbc8c8", /* foreground */
  [258] = "#cbc8c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
