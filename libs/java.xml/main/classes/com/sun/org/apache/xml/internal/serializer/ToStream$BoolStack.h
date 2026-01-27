#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$BoolStack_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$BoolStack_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$BoolStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ToStream$BoolStack : public ::java::lang::Object {
	$class(ToStream$BoolStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToStream$BoolStack();
	void init$();
	void init$(int32_t size);
	void clear();
	void grow();
	bool isEmpty();
	bool peek();
	bool peekOrFalse();
	bool peekOrTrue();
	bool pop();
	bool popAndTop();
	bool push(bool val);
	void setTop(bool b);
	int32_t size();
	$booleans* m_values = nullptr;
	int32_t m_allocatedSize = 0;
	int32_t m_index = 0;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$BoolStack_h_