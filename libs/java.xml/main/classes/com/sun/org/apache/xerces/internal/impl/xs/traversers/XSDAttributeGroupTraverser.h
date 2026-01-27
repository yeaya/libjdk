#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeGroupTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeGroupTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAttributeGroupTraverser
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
								class XSAttributeGroupDecl;
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
						namespace impl {
							namespace xs {
								namespace traversers {
									class XSAttributeChecker;
									class XSDHandler;
									class XSDocumentInfo;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
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

class XSDAttributeGroupTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDAttributeGroupTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDAttributeGroupTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* traverseGlobal(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* traverseLocal(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeGroupTraverser_h_