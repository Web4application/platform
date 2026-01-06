diff --git a/vp9/common/loongarch/vp9_subpel_filter_lsx.c b/vp9/common/loongarch/vp9_subpel_filter_lsx.c
index 8c4d7a112..f1a92bc34 100644
--- a/vp9/common/loongarch/vp9_subpel_filter_lsx.c
+++ b/vp9/common/loongarch/vp9_subpel_filter_lsx.c
@@ -XX,7 +XX,15 @@ void vp9_convolve8_horiz_lsx(const uint8_t *src, int src_stride,
                              int x_step_q4,
                              uint8_t *dst, int dst_stride)
 {
-    const int8_t *filter = vp9_sub_pel_filters_lsx[subpel_x - 1];
+    const int8_t *filter = NULL;
+
+    if (subpel_x) {
+        filter = vp9_sub_pel_filters_lsx[subpel_x - 1];
+    }

     /* existing implementation unchanged */
 }

@@ -YY,7 +YY,15 @@ void vp9_convolve8_vert_lsx(const uint8_t *src, int src_stride,
                             int y_step_q4,
                             uint8_t *dst, int dst_stride)
 {
-    const int8_t *filter = vp9_sub_pel_filters_lsx[subpel_y - 1];
+    const int8_t *filter = NULL;
+
+    if (subpel_y) {
+        filter = vp9_sub_pel_filters_lsx[subpel_y - 1];
+    }

     /* existing implementation unchanged */
 }

@@ -ZZ,7 +ZZ,15 @@ void vp9_convolve8_hv_lsx(const uint8_t *src, int src_stride,
                           int x_step_q4, int y_step_q4,
                           uint8_t *dst, int dst_stride)
 {
-    const int8_t *h_filter = vp9_sub_pel_filters_lsx[subpel_x - 1];
-    const int8_t *v_filter = vp9_sub_pel_filters_lsx[subpel_y - 1];
+    const int8_t *h_filter = NULL;
+    const int8_t *v_filter = NULL;
+
+    if (subpel_x) {
+        h_filter = vp9_sub_pel_filters_lsx[subpel_x - 1];
+    }
+
+    if (subpel_y) {
+        v_filter = vp9_sub_pel_filters_lsx[subpel_y - 1];
+    }

     /* existing implementation unchanged */
 }