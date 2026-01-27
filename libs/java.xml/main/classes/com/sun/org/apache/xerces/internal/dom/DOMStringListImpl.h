#ifndef _com_sun_org_apache_xerces_internal_dom_DOMStringListImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMStringListImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMStringListImpl
//$ extends org.w3c.dom.DOMStringList

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
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMStringListImpl : public ::org::w3c::dom::DOMStringList {
	$class(DOMStringListImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMStringList)
public:
	DOMStringListImpl();
	void init$();
	void init$(::java::util::List* params);
	virtual void add($String* param);
	virtual bool contains($String* param) override;
	virtual int32_t getLength() override;
	virtual $String* item(int32_t index) override;
	::java::util::List* fStrings = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMStringListImpl_h_