#include "register_types.h"
#include "class_db.h"
#include "hello.h"

void register_hello_types() {
  ClassDB::register_class<Summator>();
}

void unregister_hello_types() {
}
