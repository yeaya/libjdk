#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap$DTMException_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap$DTMException_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap$DTMException
//$ extends org.w3c.dom.DOMException

#include <org/w3c/dom/DOMException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class DTMNamedNodeMap;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMNamedNodeMap$DTMException : public ::org::w3c::dom::DOMException {
	$class(DTMNamedNodeMap$DTMException, $NO_CLASS_INIT, ::org::w3c::dom::DOMException)
public:
	DTMNamedNodeMap$DTMException();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap* this$0, int16_t code, $String* message);
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap* this$0, int16_t code);
	::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x8CF3285B232133D2;
	DTMNamedNodeMap$DTMException(const DTMNamedNodeMap$DTMException& e);
	virtual void throw$() override;
	inline DTMNamedNodeMap$DTMException* operator ->() {
		return (DTMNamedNodeMap$DTMException*)throwing$;
	}
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap$DTMException_h_