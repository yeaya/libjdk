#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser
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
								class XSParticleDecl;
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
									class XSDAbstractParticleTraverser$ParticleArray;
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

class XSDAbstractParticleTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDAbstractParticleTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDAbstractParticleTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual bool hasAllContent(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseAll(::org::w3c::dom::Element* allDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseChoice(::org::w3c::dom::Element* choiceDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseSeqChoice(::org::w3c::dom::Element* decl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, bool choice, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseSequence(::org::w3c::dom::Element* seqDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser$ParticleArray* fPArray = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser_h_