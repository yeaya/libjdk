#ifndef _com_sun_org_apache_xml_internal_utils_MutableAttrListImpl_h_
#define _com_sun_org_apache_xml_internal_utils_MutableAttrListImpl_h_
//$ class com.sun.org.apache.xml.internal.utils.MutableAttrListImpl
//$ extends org.xml.sax.helpers.AttributesImpl
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <org/xml/sax/helpers/AttributesImpl.h>

namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export MutableAttrListImpl : public ::org::xml::sax::helpers::AttributesImpl, public ::java::io::Serializable {
	$class(MutableAttrListImpl, $NO_CLASS_INIT, ::org::xml::sax::helpers::AttributesImpl, ::java::io::Serializable)
public:
	MutableAttrListImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::Attributes* atts);
	virtual void addAttribute($String* uri, $String* localName, $String* qName, $String* type, $String* value) override;
	virtual void addAttributes(::org::xml::sax::Attributes* atts);
	virtual bool contains($String* name);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x57489F488521A6C6;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_MutableAttrListImpl_h_