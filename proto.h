void catch_exit(int sig);
int execsh(char *cmd);
int oops(Display *d, XErrorEvent *ee);
unsigned int color_get(const char *name);
int window_get_prop(Window w, Atom prop, Atom *type, int *items, void *buffer, int bytes);
int window_get_atom_prop(Window w, Atom atom, Atom *list, int count);
void window_set_atom_prop(Window w, Atom prop, Atom *atoms, int count);
int window_get_cardinal_prop(Window w, Atom atom, unsigned long *list, int count);
void window_set_cardinal_prop(Window w, Atom prop, unsigned long *values, int count);
void ewmh_client_list();
void ewmh_active_window(Window w);
client* window_client(Window win);
void windows_visible(stack *s);
int window_message(Window target, Window subject, Atom atom, unsigned long protocol, unsigned long mask);
void client_free(client *c);
int client_protocol(client *c, Atom protocol);
void client_close(client *c);
void client_position(client *c, int x, int y, int w, int h);
void spot_xywh(int spot, int *x, int *y, int *w, int *h);
void client_spot(client *c, int spot, int force);
void client_cycle(client *c);
Window spot_active(int spot, Window except);
void client_stack(client *c, stack *all, stack *raise);
void client_raise(client *c);
void client_lower(client *c);
void client_active(client *c);
void find_or_start(char *class);
void window_listen(Window win);
void client_review(client *c);
void create_notify(XCreateWindowEvent *e);
void configure_request(XConfigureRequestEvent *e);
void map_request(XMapEvent *e);
void map_notify(XMapEvent *e);
void unmap_notify(XUnmapEvent *e);
void key_press(XKeyEvent *e);
void button_press(XButtonEvent *e);
void client_message(XClientMessageEvent *e);
void focus_change(XFocusChangeEvent *e);
int main(int argc, char *argv[]);
