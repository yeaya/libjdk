#ifndef _javax_script_SimpleBindings_h_
#define _javax_script_SimpleBindings_h_
//$ class javax.script.SimpleBindings
//$ extends javax.script.Bindings

#include <javax/script/Bindings.h>

namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}

namespace javax {
	namespace script {

class $import SimpleBindings : public ::javax::script::Bindings {
	$class(SimpleBindings, $NO_CLASS_INIT, ::javax::script::Bindings)
public:
	SimpleBindings();
	void init$(::java::util::Map* m);
	void init$();
	void checkKey(Object$* key);
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put($String* name, Object$* value) override;
	virtual $Object* put(Object$* name, Object$* value) override;
	virtual void putAll(::java::util::Map* toMerge) override;
	using ::javax::script::Bindings::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual ::java::util::Collection* values() override;
	::java::util::Map* map = nullptr;
};

	} // script
} // javax

#endif // _javax_script_SimpleBindings_h_