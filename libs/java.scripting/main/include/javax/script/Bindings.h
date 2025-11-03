#ifndef _javax_script_Bindings_h_
#define _javax_script_Bindings_h_
//$ interface javax.script.Bindings
//$ extends java.util.Map

#include <java/util/Map.h>

namespace javax {
	namespace script {

class $import Bindings : public ::java::util::Map {
	$interface(Bindings, $NO_CLASS_INIT, ::java::util::Map)
public:
	virtual bool containsKey(Object$* key) override {return false;}
	virtual $Object* get(Object$* key) override {return nullptr;}
	virtual $Object* put($String* name, Object$* value) {return nullptr;}
	virtual $Object* put(Object$* name, Object$* value) override;
	virtual void putAll(::java::util::Map* toMerge) override {}
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override {return nullptr;}
};

	} // script
} // javax

#endif // _javax_script_Bindings_h_