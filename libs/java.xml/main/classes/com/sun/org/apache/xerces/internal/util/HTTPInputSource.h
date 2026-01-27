#ifndef _com_sun_org_apache_xerces_internal_util_HTTPInputSource_h_
#define _com_sun_org_apache_xerces_internal_util_HTTPInputSource_h_
//$ class com.sun.org.apache.xerces.internal.util.HTTPInputSource
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

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
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class HTTPInputSource : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource {
	$class(HTTPInputSource, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource)
public:
	HTTPInputSource();
	void init$($String* publicId, $String* systemId, $String* baseSystemId);
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::InputStream* byteStream, $String* encoding);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::Reader* charStream, $String* encoding);
	bool getFollowHTTPRedirects();
	::java::util::Iterator* getHTTPRequestProperties();
	$String* getHTTPRequestProperty($String* key);
	void setFollowHTTPRedirects(bool followRedirects);
	void setHTTPRequestProperty($String* key, $String* value);
	bool fFollowRedirects = false;
	::java::util::Map* fHTTPRequestProperties = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_HTTPInputSource_h_