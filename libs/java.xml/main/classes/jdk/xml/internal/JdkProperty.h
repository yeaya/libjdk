#ifndef _jdk_xml_internal_JdkProperty_h_
#define _jdk_xml_internal_JdkProperty_h_
//$ class jdk.xml.internal.JdkProperty
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$ImplPropMap;
			class JdkProperty$State;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class JdkProperty : public ::java::lang::Object {
	$class(JdkProperty, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JdkProperty();
	void init$(::jdk::xml::internal::JdkProperty$ImplPropMap* name, Object$* value, ::jdk::xml::internal::JdkProperty$State* state);
	$Object* getValue();
	bool setValue($String* name, Object$* value, ::jdk::xml::internal::JdkProperty$State* state);
	::jdk::xml::internal::JdkProperty$ImplPropMap* pName = nullptr;
	$Object* pValue = nullptr;
	::jdk::xml::internal::JdkProperty$State* pState = nullptr;
};

		} // internal
	} // xml
} // jdk

#endif // _jdk_xml_internal_JdkProperty_h_