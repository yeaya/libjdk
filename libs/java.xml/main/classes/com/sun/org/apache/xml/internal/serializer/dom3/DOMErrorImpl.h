#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOMErrorImpl
//$ extends org.w3c.dom.DOMError

#include <org/w3c/dom/DOMError.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {
								class DOMLocatorImpl;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMLocator;
		}
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

class DOMErrorImpl : public ::org::w3c::dom::DOMError {
	$class(DOMErrorImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMError)
public:
	DOMErrorImpl();
	void init$();
	void init$(int16_t severity, $String* message, $String* type);
	void init$(int16_t severity, $String* message, $String* type, ::java::lang::Exception* exception);
	void init$(int16_t severity, $String* message, $String* type, ::java::lang::Exception* exception, Object$* relatedData, ::com::sun::org::apache::xml::internal::serializer::dom3::DOMLocatorImpl* location);
	virtual ::org::w3c::dom::DOMLocator* getLocation() override;
	virtual $String* getMessage() override;
	virtual $Object* getRelatedData() override;
	virtual $Object* getRelatedException() override;
	virtual int16_t getSeverity() override;
	virtual $String* getType() override;
	void reset();
	int16_t fSeverity = 0;
	$String* fMessage = nullptr;
	$String* fType = nullptr;
	::java::lang::Exception* fException = nullptr;
	$Object* fRelatedData = nullptr;
	::com::sun::org::apache::xml::internal::serializer::dom3::DOMLocatorImpl* fLocation = nullptr;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorImpl_h_