const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#09170c", /* black   */
  [1] = "#578B77", /* red     */
  [2] = "#C88B73", /* green   */
  [3] = "#286C8E", /* yellow  */
  [4] = "#BE6B8A", /* blue    */
  [5] = "#54ABA9", /* magenta */
  [6] = "#BFB5AD", /* cyan    */
  [7] = "#c1c5c2", /* white   */

  /* 8 bright colors */
  [8]  = "#596d5d",  /* black   */
  [9]  = "#578B77",  /* red     */
  [10] = "#C88B73", /* green   */
  [11] = "#286C8E", /* yellow  */
  [12] = "#BE6B8A", /* blue    */
  [13] = "#54ABA9", /* magenta */
  [14] = "#BFB5AD", /* cyan    */
  [15] = "#c1c5c2", /* white   */

  /* special colors */
  [256] = "#09170c", /* background */
  [257] = "#c1c5c2", /* foreground */
  [258] = "#c1c5c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
