#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDWildcardTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDWildcardTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDWildcardTraverser
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
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
								class XSParticleDecl;
								class XSWildcardDecl;
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

class XSDWildcardTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDWildcardTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDWildcardTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseAny(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* traverseAnyAttribute(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* traverseWildcardDecl(::org::w3c::dom::Element* elmNode, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDWildcardTraverser_h_