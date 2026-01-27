#ifndef _com_sun_org_apache_xml_internal_serializer_Serializer_h_
#define _com_sun_org_apache_xml_internal_serializer_Serializer_h_
//$ interface com.sun.org.apache.xml.internal.serializer.Serializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class DOMSerializer;
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
namespace java {
	namespace util {
		class Properties;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class Serializer : public ::java::lang::Object {
	$interface(Serializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::xml::sax::ContentHandler* asContentHandler() {return nullptr;}
	virtual $Object* asDOM3Serializer() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serializer::DOMSerializer* asDOMSerializer() {return nullptr;}
	virtual ::java::util::Properties* getOutputFormat() {return nullptr;}
	virtual ::java::io::OutputStream* getOutputStream() {return nullptr;}
	virtual ::java::io::Writer* getWriter() {return nullptr;}
	virtual bool reset() {return false;}
	virtual void setOutputFormat(::java::util::Properties* format) {}
	virtual void setOutputStream(::java::io::OutputStream* output) {}
	virtual void setWriter(::java::io::Writer* writer) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_Serializer_h_