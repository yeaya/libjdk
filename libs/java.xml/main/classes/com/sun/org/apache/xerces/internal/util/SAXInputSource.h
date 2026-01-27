#ifndef _com_sun_org_apache_xerces_internal_util_SAXInputSource_h_
#define _com_sun_org_apache_xerces_internal_util_SAXInputSource_h_
//$ class com.sun.org.apache.xerces.internal.util.SAXInputSource
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
			class XMLReader;
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

class SAXInputSource : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource {
	$class(SAXInputSource, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource)
public:
	SAXInputSource();
	void init$();
	void init$(::org::xml::sax::InputSource* inputSource);
	void init$(::org::xml::sax::XMLReader* reader, ::org::xml::sax::InputSource* inputSource);
	::org::xml::sax::InputSource* getInputSource();
	::org::xml::sax::XMLReader* getXMLReader();
	virtual void setByteStream(::java::io::InputStream* byteStream) override;
	virtual void setCharacterStream(::java::io::Reader* charStream) override;
	virtual void setEncoding($String* encoding) override;
	void setInputSource(::org::xml::sax::InputSource* inputSource);
	virtual void setPublicId($String* publicId) override;
	virtual void setSystemId($String* systemId) override;
	void setXMLReader(::org::xml::sax::XMLReader* reader);
	::org::xml::sax::XMLReader* fXMLReader = nullptr;
	::org::xml::sax::InputSource* fInputSource = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SAXInputSource_h_