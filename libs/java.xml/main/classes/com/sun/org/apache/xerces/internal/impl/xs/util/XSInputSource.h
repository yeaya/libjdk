#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSInputSource_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSInputSource_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSInputSource
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
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
						namespace xs {
							class XSObject;
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
						namespace impl {
							namespace xs {
								namespace util {

class XSInputSource : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource {
	$class(XSInputSource, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource)
public:
	XSInputSource();
	void init$($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars);
	void init$($Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* component);
	$Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* getComponents();
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* getGrammars();
	void setComponents($Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* components);
	void setGrammars($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars);
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* fGrammars = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* fComponents = nullptr;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSInputSource_h_