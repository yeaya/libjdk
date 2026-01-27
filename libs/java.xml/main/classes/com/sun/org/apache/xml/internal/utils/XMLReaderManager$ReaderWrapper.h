#ifndef _com_sun_org_apache_xml_internal_utils_XMLReaderManager$ReaderWrapper_h_
#define _com_sun_org_apache_xml_internal_utils_XMLReaderManager$ReaderWrapper_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLReaderManager$ReaderWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class XMLReaderManager;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export XMLReaderManager$ReaderWrapper : public ::java::lang::Object {
	$class(XMLReaderManager$ReaderWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLReaderManager$ReaderWrapper();
	void init$(::com::sun::org::apache::xml::internal::utils::XMLReaderManager* this$0, ::org::xml::sax::XMLReader* reader, bool overrideDefaultParser);
	::com::sun::org::apache::xml::internal::utils::XMLReaderManager* this$0 = nullptr;
	::org::xml::sax::XMLReader* reader = nullptr;
	bool overrideDefaultParser = false;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLReaderManager$ReaderWrapper_h_