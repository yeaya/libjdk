#ifndef _com_sun_xml_internal_stream_XMLEntityReader_h_
#define _com_sun_xml_internal_stream_XMLEntityReader_h_
//$ class com.sun.xml.internal.stream.XMLEntityReader
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLStringBuffer;
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
						namespace xni {
							class QName;
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					class XMLBufferListener;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLEntityReader : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(XMLEntityReader, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	XMLEntityReader();
	virtual int32_t getCharacterOffset() override {return 0;}
	virtual $String* getEncoding() override {return nullptr;}
	void init$();
	virtual $String* getVersion() {return nullptr;}
	virtual bool isExternal() {return false;}
	virtual int32_t peekChar() {return 0;}
	virtual void registerListener(::com::sun::xml::internal::stream::XMLBufferListener* listener) {}
	virtual int32_t scanChar() {return 0;}
	virtual int32_t scanContent(::com::sun::org::apache::xerces::internal::xni::XMLString* content) {return 0;}
	virtual bool scanData($String* delimiter, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* data) {return false;}
	virtual int32_t scanLiteral(int32_t quote, ::com::sun::org::apache::xerces::internal::xni::XMLString* content) {return 0;}
	virtual $String* scanName() {return nullptr;}
	virtual $String* scanNmtoken() {return nullptr;}
	virtual bool scanQName(::com::sun::org::apache::xerces::internal::xni::QName* qname) {return false;}
	virtual void setEncoding($String* encoding) {}
	virtual void setVersion($String* version) {}
	virtual bool skipChar(int32_t c) {return false;}
	virtual bool skipSpaces() {return false;}
	virtual bool skipString($String* s) {return false;}
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_XMLEntityReader_h_