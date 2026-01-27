#ifndef _com_sun_org_apache_xerces_internal_xinclude_XInclude11TextReader_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XInclude11TextReader_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XInclude11TextReader
//$ extends com.sun.org.apache.xerces.internal.xinclude.XIncludeTextReader

#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {
							class XIncludeHandler;
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
							namespace parser {
								class XMLInputSource;
							}
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
						namespace xinclude {

class XInclude11TextReader : public ::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader {
	$class(XInclude11TextReader, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader)
public:
	XInclude11TextReader();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source, ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* handler, int32_t bufferSize);
	virtual bool isValid(int32_t ch) override;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xinclude_XInclude11TextReader_h_