/*define your colors here */

const char *colorname[] = {
  /* 8 normal colors */
"#010201", /* black   */
"#1E2F42", /* red     */
"#2A2946", /* green   */
"#465348", /* yellow  */
"#1D9C1F", /* blue    */
"#13DF10", /* magenta */
"#CFAD5A", /* cyan    */
"#f2dca8", /* white   */
  /*8 bright colors */
"#a99a75",  /* black   */
"#1E2F42",  /* red     */
"#2A2946", /* green   */
"#465348", /* yellow  */
"#1D9C1F", /* blue    */
"#13DF10", /* magenta */
"#CFAD5A", /* cyan    */
"#f2dca8", /* white   */
  [255] = 0,
    /* special colors */
  [256] = "#1D9C1F", /* cursor */
  [257] = "#13df10", /* text color */
  [258] = "#010201", /*background  */
  [259] = "#13df10"  /*foreground -> dunno */
};

/*
   In special colors  these are the config change accordingly( for main terminal apperance )
  [256] = cursor
  [257] = text color
  [258] = background
  [259] = foreground
*/
