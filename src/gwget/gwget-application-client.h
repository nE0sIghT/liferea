/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_gwget_Application
#define DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_gwget_Application

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_gwget_Application_open_window (DBusGProxy *proxy, const guint IN_timestamp, GError **error)

{
  return dbus_g_proxy_call (proxy, "OpenWindow", error, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_gnome_gwget_Application_open_window_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_gnome_gwget_Application_open_window_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_gnome_gwget_Application_open_window_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_gwget_Application_open_window_async (DBusGProxy *proxy, const guint IN_timestamp, org_gnome_gwget_Application_open_window_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "OpenWindow", org_gnome_gwget_Application_open_window_async_callback, stuff, g_free, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_gwget_Application_open_ur_i (DBusGProxy *proxy, const char * IN_uri, const guint IN_timestamp, GError **error)

{
  return dbus_g_proxy_call (proxy, "OpenURI", error, G_TYPE_STRING, IN_uri, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_gnome_gwget_Application_open_ur_i_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_gnome_gwget_Application_open_ur_i_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_gnome_gwget_Application_open_ur_i_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_gwget_Application_open_ur_i_async (DBusGProxy *proxy, const char * IN_uri, const guint IN_timestamp, org_gnome_gwget_Application_open_ur_i_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "OpenURI", org_gnome_gwget_Application_open_ur_i_async_callback, stuff, g_free, G_TYPE_STRING, IN_uri, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_gwget_Application_open_ur_idest (DBusGProxy *proxy, const char * IN_uri, const char * IN_destination_dir, const guint IN_timestamp, GError **error)

{
  return dbus_g_proxy_call (proxy, "OpenURIDest", error, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_destination_dir, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_gnome_gwget_Application_open_ur_idest_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_gnome_gwget_Application_open_ur_idest_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_gnome_gwget_Application_open_ur_idest_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_gwget_Application_open_ur_idest_async (DBusGProxy *proxy, const char * IN_uri, const char * IN_destination_dir, const guint IN_timestamp, org_gnome_gwget_Application_open_ur_idest_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "OpenURIDest", org_gnome_gwget_Application_open_ur_idest_async_callback, stuff, g_free, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_destination_dir, G_TYPE_UINT, IN_timestamp, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_gwget_Application */

G_END_DECLS