#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDSimpleTypeTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDSimpleTypeTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDSimpleTypeTraverser
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
							namespace dv {
								class XSSimpleType;
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
						namespace xni {
							class QName;
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

class XSDSimpleTypeTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser {
	$class(XSDSimpleTypeTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser)
public:
	XSDSimpleTypeTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	bool checkBuiltIn($String* name, $String* namespace$);
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* errorType($String* name, $String* namespace$, int16_t refType);
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* findDTValidator(::org::w3c::dom::Element* elm, $String* refName, ::com::sun::org::apache::xerces::internal::xni::QName* baseTypeStr, int16_t baseRefContext, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	$String* genAnonTypeName(::org::w3c::dom::Element* simpleTypeDecl);
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* getSimpleType($String* name, ::org::w3c::dom::Element* simpleTypeDecl, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	bool isListDatatype(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* validator);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* traverseGlobal(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* traverseLocal(::org::w3c::dom::Element* elmNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* traverseSimpleTypeDecl(::org::w3c::dom::Element* simpleTypeDecl, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	bool fIsBuiltIn = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDSimpleTypeTraverser_h_