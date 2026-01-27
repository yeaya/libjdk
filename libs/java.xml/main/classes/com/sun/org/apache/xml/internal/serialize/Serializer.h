#ifndef _com_sun_org_apache_xml_internal_serialize_Serializer_h_
#define _com_sun_org_apache_xml_internal_serialize_Serializer_h_
//$ interface com.sun.org.apache.xml.internal.serialize.Serializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class DOMSerializer;
							class OutputFormat;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DocumentHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class Serializer : public ::java::lang::Object {
	$interface(Serializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::xml::sax::ContentHandler* asContentHandler() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serialize::DOMSerializer* asDOMSerializer() {return nullptr;}
	virtual ::org::xml::sax::DocumentHandler* asDocumentHandler() {return nullptr;}
	virtual void setOutputByteStream(::java::io::OutputStream* output) {}
	virtual void setOutputCharStream(::java::io::Writer* output) {}
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) {}
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_Serializer_h_