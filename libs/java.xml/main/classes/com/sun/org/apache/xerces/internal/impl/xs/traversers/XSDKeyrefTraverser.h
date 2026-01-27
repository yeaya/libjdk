#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDKeyrefTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDKeyrefTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDKeyrefTraverser
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

class XSDKeyrefTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser {
	$class(XSDKeyrefTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser)
public:
	XSDKeyrefTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual void traverse(::org::w3c::dom::Element* krElem, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDKeyrefTraverser_h_