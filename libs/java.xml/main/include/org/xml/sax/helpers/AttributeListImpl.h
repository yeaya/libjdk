#ifndef _org_xml_sax_helpers_AttributeListImpl_h_
#define _org_xml_sax_helpers_AttributeListImpl_h_
//$ class org.xml.sax.helpers.AttributeListImpl
//$ extends org.xml.sax.AttributeList

#include <org/xml/sax/AttributeList.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $import AttributeListImpl : public ::org::xml::sax::AttributeList {
	$class(AttributeListImpl, $NO_CLASS_INIT, ::org::xml::sax::AttributeList)
public:
	AttributeListImpl();
	void init$();
	void init$(::org::xml::sax::AttributeList* atts);
	virtual void addAttribute($String* name, $String* type, $String* value);
	virtual void clear();
	virtual int32_t getLength() override;
	virtual $String* getName(int32_t i) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* name) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* name) override;
	virtual void removeAttribute($String* name);
	virtual void setAttributeList(::org::xml::sax::AttributeList* atts);
	::java::util::List* names = nullptr;
	::java::util::List* types = nullptr;
	::java::util::List* values = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_AttributeListImpl_h_