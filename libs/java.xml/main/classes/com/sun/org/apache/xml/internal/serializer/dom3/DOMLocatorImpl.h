#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOMLocatorImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOMLocatorImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOMLocatorImpl
//$ extends org.w3c.dom.DOMLocator

#include <org/w3c/dom/DOMLocator.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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

class DOMLocatorImpl : public ::org::w3c::dom::DOMLocator {
	$class(DOMLocatorImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMLocator)
public:
	DOMLocatorImpl();
	void init$();
	void init$(int32_t lineNumber, int32_t columnNumber, $String* uri);
	void init$(int32_t lineNumber, int32_t columnNumber, int32_t utf16Offset, $String* uri);
	void init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, ::org::w3c::dom::Node* relatedData, $String* uri);
	void init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, ::org::w3c::dom::Node* relatedData, $String* uri, int32_t utf16Offset);
	virtual int32_t getByteOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual ::org::w3c::dom::Node* getRelatedNode() override;
	virtual $String* getUri() override;
	virtual int32_t getUtf16Offset() override;
	int32_t fColumnNumber = 0;
	int32_t fLineNumber = 0;
	::org::w3c::dom::Node* fRelatedNode = nullptr;
	$String* fUri = nullptr;
	int32_t fByteOffset = 0;
	int32_t fUtf16Offset = 0;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOMLocatorImpl_h_