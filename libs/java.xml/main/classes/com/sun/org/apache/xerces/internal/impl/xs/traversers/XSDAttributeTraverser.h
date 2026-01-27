#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAttributeTraverser
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
								class XSAttributeDecl;
								class XSAttributeUseImpl;
								class XSComplexTypeDecl;
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

class XSDAttributeTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDAttributeTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDAttributeTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual void checkDefaultValid(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* attribute);
	virtual void checkDefaultValid(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* attrUse);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* traverseGlobal(::org::w3c::dom::Element* attrDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* traverseLocal(::org::w3c::dom::Element* attrDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* traverseNamedAttr(::org::w3c::dom::Element* attrDecl, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, bool isGlobal, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAttributeTraverser_h_