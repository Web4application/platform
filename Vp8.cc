const int8_t *h_filter = NULL;
const int8_t *v_filter = NULL;

if (xoffset) {
    h_filter = vp8_subpel_filters_lsx[xoffset - 1];
}

if (yoffset) {
    v_filter = vp8_subpel_filters_lsx[yoffset - 1];
}