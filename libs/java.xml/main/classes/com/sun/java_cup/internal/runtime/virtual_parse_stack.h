#ifndef _com_sun_java_cup_internal_runtime_virtual_parse_stack_h_
#define _com_sun_java_cup_internal_runtime_virtual_parse_stack_h_
//$ class com.sun.java_cup.internal.runtime.virtual_parse_stack
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

class virtual_parse_stack : public ::java::lang::Object {
	$class(virtual_parse_stack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual_parse_stack();
	void init$(::java::util::Stack* shadowing_stack);
	virtual bool empty();
	virtual void get_from_real();
	virtual void pop();
	virtual void push(int32_t state_num);
	virtual int32_t top();
	::java::util::Stack* real_stack = nullptr;
	int32_t real_next = 0;
	::java::util::Stack* vstack = nullptr;
};

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com

#endif // _com_sun_java_cup_internal_runtime_virtual_parse_stack_h_