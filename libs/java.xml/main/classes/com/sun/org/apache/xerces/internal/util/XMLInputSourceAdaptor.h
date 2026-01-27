#ifndef _com_sun_org_apache_xerces_internal_util_XMLInputSourceAdaptor_h_
#define _com_sun_org_apache_xerces_internal_util_XMLInputSourceAdaptor_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLInputSourceAdaptor
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLInputSourceAdaptor : public ::javax::xml::transform::Source {
	$class(XMLInputSourceAdaptor, $NO_CLASS_INIT, ::javax::xml::transform::Source)
public:
	XMLInputSourceAdaptor();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* core);
	virtual $String* getSystemId() override;
	virtual void setSystemId($String* systemId) override;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fSource = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLInputSourceAdaptor_h_