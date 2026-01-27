#ifndef _com_sun_org_apache_xml_internal_dtm_ref_ExtendedType_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_ExtendedType_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.ExtendedType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class ExtendedType : public ::java::lang::Object {
	$class(ExtendedType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExtendedType();
	using ::java::lang::Object::equals;
	void init$(int32_t nodetype, $String* namespace$, $String* localName);
	void init$(int32_t nodetype, $String* namespace$, $String* localName, int32_t hash);
	bool equals(::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType* other);
	$String* getLocalName();
	$String* getNamespace();
	int32_t getNodeType();
	virtual int32_t hashCode() override;
	void redefine(int32_t nodetype, $String* namespace$, $String* localName);
	void redefine(int32_t nodetype, $String* namespace$, $String* localName, int32_t hash);
	int32_t nodetype = 0;
	$String* namespace$ = nullptr;
	$String* localName = nullptr;
	int32_t hash = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_ExtendedType_h_