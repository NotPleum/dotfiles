const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#070711", /* black   */
  [1] = "#504364", /* red     */
  [2] = "#564769", /* green   */
  [3] = "#77628d", /* yellow  */
  [4] = "#977bb8", /* blue    */
  [5] = "#a384c2", /* magenta */
  [6] = "#a985ad", /* cyan    */
  [7] = "#c1c1c3", /* white   */

  /* 8 bright colors */
  [8]  = "#56566a",  /* black   */
  [9]  = "#504364",  /* red     */
  [10] = "#564769", /* green   */
  [11] = "#77628d", /* yellow  */
  [12] = "#977bb8", /* blue    */
  [13] = "#a384c2", /* magenta */
  [14] = "#a985ad", /* cyan    */
  [15] = "#c1c1c3", /* white   */

  /* special colors */
  [256] = "#070711", /* background */
  [257] = "#c1c1c3", /* foreground */
  [258] = "#c1c1c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
