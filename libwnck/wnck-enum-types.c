
/* Generated data (by glib-mkenums) */

#include <libwnck/libwnck.h>

/* enumerations from "window.h" */
GType
wnck_window_state_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { WNCK_WINDOW_STATE_MINIMIZED, "WNCK_WINDOW_STATE_MINIMIZED", "minimized" },
      { WNCK_WINDOW_STATE_MAXIMIZED_HORIZONTALLY, "WNCK_WINDOW_STATE_MAXIMIZED_HORIZONTALLY", "maximized-horizontally" },
      { WNCK_WINDOW_STATE_MAXIMIZED_VERTICALLY, "WNCK_WINDOW_STATE_MAXIMIZED_VERTICALLY", "maximized-vertically" },
      { WNCK_WINDOW_STATE_SHADED, "WNCK_WINDOW_STATE_SHADED", "shaded" },
      { WNCK_WINDOW_STATE_SKIP_PAGER, "WNCK_WINDOW_STATE_SKIP_PAGER", "skip-pager" },
      { WNCK_WINDOW_STATE_SKIP_TASKLIST, "WNCK_WINDOW_STATE_SKIP_TASKLIST", "skip-tasklist" },
      { WNCK_WINDOW_STATE_STICKY, "WNCK_WINDOW_STATE_STICKY", "sticky" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("WnckWindowState", values);
  }
  return etype;
}

GType
wnck_window_actions_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { WNCK_WINDOW_ACTION_MOVE, "WNCK_WINDOW_ACTION_MOVE", "move" },
      { WNCK_WINDOW_ACTION_RESIZE, "WNCK_WINDOW_ACTION_RESIZE", "resize" },
      { WNCK_WINDOW_ACTION_SHADE, "WNCK_WINDOW_ACTION_SHADE", "shade" },
      { WNCK_WINDOW_ACTION_STICK, "WNCK_WINDOW_ACTION_STICK", "stick" },
      { WNCK_WINDOW_ACTION_MAXIMIZE_HORIZONTALLY, "WNCK_WINDOW_ACTION_MAXIMIZE_HORIZONTALLY", "maximize-horizontally" },
      { WNCK_WINDOW_ACTION_MAXIMIZE_VERTICALLY, "WNCK_WINDOW_ACTION_MAXIMIZE_VERTICALLY", "maximize-vertically" },
      { WNCK_WINDOW_ACTION_CHANGE_WORKSPACE, "WNCK_WINDOW_ACTION_CHANGE_WORKSPACE", "change-workspace" },
      { WNCK_WINDOW_ACTION_CLOSE, "WNCK_WINDOW_ACTION_CLOSE", "close" },
      { WNCK_WINDOW_ACTION_UNMAXIMIZE_HORIZONTALLY, "WNCK_WINDOW_ACTION_UNMAXIMIZE_HORIZONTALLY", "unmaximize-horizontally" },
      { WNCK_WINDOW_ACTION_UNMAXIMIZE_VERTICALLY, "WNCK_WINDOW_ACTION_UNMAXIMIZE_VERTICALLY", "unmaximize-vertically" },
      { WNCK_WINDOW_ACTION_UNSHADE, "WNCK_WINDOW_ACTION_UNSHADE", "unshade" },
      { WNCK_WINDOW_ACTION_UNSTICK, "WNCK_WINDOW_ACTION_UNSTICK", "unstick" },
      { WNCK_WINDOW_ACTION_MINIMIZE, "WNCK_WINDOW_ACTION_MINIMIZE", "minimize" },
      { WNCK_WINDOW_ACTION_UNMINIMIZE, "WNCK_WINDOW_ACTION_UNMINIMIZE", "unminimize" },
      { WNCK_WINDOW_ACTION_MAXIMIZE, "WNCK_WINDOW_ACTION_MAXIMIZE", "maximize" },
      { WNCK_WINDOW_ACTION_UNMAXIMIZE, "WNCK_WINDOW_ACTION_UNMAXIMIZE", "unmaximize" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("WnckWindowActions", values);
  }
  return etype;
}


/* Generated data ends here */

