#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$SAX2XNIUtil_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$SAX2XNIUtil_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil
//$ extends com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper

#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XNIException;
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
								class XMLParseException;
							}
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
			class SAXException;
			class SAXParseException;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class XSDHandler$SAX2XNIUtil : public ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper {
	$class(XSDHandler$SAX2XNIUtil, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper)
public:
	XSDHandler$SAX2XNIUtil();
	void init$();
	static ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* createXMLParseException0(::org::xml::sax::SAXParseException* exception);
	static ::com::sun::org::apache::xerces::internal::xni::XNIException* createXNIException0(::org::xml::sax::SAXException* exception);
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$SAX2XNIUtil_h_