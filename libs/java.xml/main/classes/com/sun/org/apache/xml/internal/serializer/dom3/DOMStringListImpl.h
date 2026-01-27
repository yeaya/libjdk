#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOMStringListImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOMStringListImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOMStringListImpl
//$ extends org.w3c.dom.DOMStringList

#include <java/lang/Array.h>
#include <org/w3c/dom/DOMStringList.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

class DOMStringListImpl : public ::org::w3c::dom::DOMStringList {
	$class(DOMStringListImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMStringList)
public:
	DOMStringListImpl();
	void init$();
	void init$(::java::util::List* params);
	void init$($StringArray* params);
	void add($String* param);
	virtual bool contains($String* param) override;
	virtual int32_t getLength() override;
	virtual $String* item(int32_t index) override;
	::java::util::List* fStrings = nullptr;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOMStringListImpl_h_