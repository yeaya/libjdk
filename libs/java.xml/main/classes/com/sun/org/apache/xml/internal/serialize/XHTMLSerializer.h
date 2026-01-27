#ifndef _com_sun_org_apache_xml_internal_serialize_XHTMLSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_XHTMLSerializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.XHTMLSerializer
//$ extends com.sun.org.apache.xml.internal.serialize.HTMLSerializer

#include <com/sun/org/apache/xml/internal/serialize/HTMLSerializer.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class XHTMLSerializer : public ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer {
	$class(XHTMLSerializer, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer)
public:
	XHTMLSerializer();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	using ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer::startDocument;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_XHTMLSerializer_h_