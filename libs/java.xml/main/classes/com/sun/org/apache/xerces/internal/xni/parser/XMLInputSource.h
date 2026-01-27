#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLInputSource_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLInputSource_h_
//$ class com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLResourceIdentifier;
						}
					}
				}
			}
		}
	}
}
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
							namespace parser {

class XMLInputSource : public ::java::lang::Object {
	$class(XMLInputSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLInputSource();
	void init$($String* publicId, $String* systemId, $String* baseSystemId, bool isCreatedByResolver);
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	void init$(::org::xml::sax::InputSource* inputSource, bool isCreatedByResolver);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::InputStream* byteStream, $String* encoding);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::Reader* charStream, $String* encoding);
	virtual $String* getBaseSystemId();
	virtual ::java::io::InputStream* getByteStream();
	virtual ::java::io::Reader* getCharacterStream();
	virtual $String* getEncoding();
	virtual $String* getPublicId();
	virtual $String* getSystemId();
	virtual bool isCreatedByResolver();
	virtual void setBaseSystemId($String* baseSystemId);
	virtual void setByteStream(::java::io::InputStream* byteStream);
	virtual void setCharacterStream(::java::io::Reader* charStream);
	virtual void setCreatedByResolver(bool createdByResolver);
	virtual void setEncoding($String* encoding);
	virtual void setPublicId($String* publicId);
	virtual void setSystemId($String* systemId);
	$String* fPublicId = nullptr;
	$String* fSystemId = nullptr;
	$String* fBaseSystemId = nullptr;
	::java::io::InputStream* fByteStream = nullptr;
	::java::io::Reader* fCharStream = nullptr;
	$String* fEncoding = nullptr;
	bool fIsCreatedByResolver = false;
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLInputSource_h_