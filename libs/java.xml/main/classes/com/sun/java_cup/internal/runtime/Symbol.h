#ifndef _com_sun_java_cup_internal_runtime_Symbol_h_
#define _com_sun_java_cup_internal_runtime_Symbol_h_
//$ class com.sun.java_cup.internal.runtime.Symbol
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

class Symbol : public ::java::lang::Object {
	$class(Symbol, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Symbol();
	void init$(int32_t id, int32_t l, int32_t r, Object$* o);
	void init$(int32_t id, Object$* o);
	void init$(int32_t sym_num, int32_t l, int32_t r);
	void init$(int32_t sym_num);
	void init$(int32_t sym_num, int32_t state);
	virtual $String* toString() override;
	int32_t sym = 0;
	int32_t parse_state = 0;
	bool used_by_parser = false;
	int32_t left = 0;
	int32_t right = 0;
	$Object* value = nullptr;
};

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com

#endif // _com_sun_java_cup_internal_runtime_Symbol_h_