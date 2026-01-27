#ifndef _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl$1_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl$1
//$ extends javax.xml.stream.Location

#include <javax/xml/stream/Location.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLStreamReaderImpl;
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
						namespace impl {

class XMLStreamReaderImpl$1 : public ::javax::xml::stream::Location {
	$class(XMLStreamReaderImpl$1, $NO_CLASS_INIT, ::javax::xml::stream::Location)
public:
	XMLStreamReaderImpl$1();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl* this$0);
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLocationURI();
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl* this$0 = nullptr;
	$String* _systemId = nullptr;
	$String* _publicId = nullptr;
	int32_t _offset = 0;
	int32_t _columnNumber = 0;
	int32_t _lineNumber = 0;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl$1_h_