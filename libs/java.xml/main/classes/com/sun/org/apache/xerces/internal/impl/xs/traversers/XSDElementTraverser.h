#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDElementTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDElementTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDElementTraverser
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
								class XSElementDecl;
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
						namespace util {
							class SymbolTable;
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
namespace java {
	namespace util {
		class Locale;
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

class XSDElementTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDElementTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDElementTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	virtual void reset(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, bool validateAnnotations, ::java::util::Locale* locale) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* traverseGlobal(::org::w3c::dom::Element* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* traverseLocal(::org::w3c::dom::Element* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	virtual void traverseLocal(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, ::org::w3c::dom::Element* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent, $StringArray* localNSDecls);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* traverseNamedElement(::org::w3c::dom::Element* elmDecl, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, bool isGlobal, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent);
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* fTempElementDecl = nullptr;
	bool fDeferTraversingLocalElements = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDElementTraverser_h_