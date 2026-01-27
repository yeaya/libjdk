#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDUniqueOrKeyTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDUniqueOrKeyTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDUniqueOrKeyTraverser
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractIDConstraintTraverser

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractIDConstraintTraverser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
								class XSElementDecl;
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

class XSDUniqueOrKeyTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser {
	$class(XSDUniqueOrKeyTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser)
public:
	XSDUniqueOrKeyTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual void traverse(::org::w3c::dom::Element* uElem, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDUniqueOrKeyTraverser_h_