#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser
//$ extends com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("GLOBAL_NUM")
#undef GLOBAL_NUM

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
								class XSAnnotationImpl;
								class XSAttributeGroupDecl;
								class XSComplexTypeDecl;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSTypeDefinition;
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

class XSDComplexTypeTraverser : public ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser {
	$class(XSDComplexTypeTraverser, 0, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser)
public:
	XSDComplexTypeTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* gAttrCheck);
	void addAnnotation(::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl* annotation);
	void contentBackup();
	void contentRestore();
	$String* genAnonTypeName(::org::w3c::dom::Element* complexTypeDecl);
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* getErrorContent();
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* getErrorWildcard();
	void handleComplexTypeError($String* messageId, $ObjectArray* args, ::org::w3c::dom::Element* e);
	bool isAttrOrAttrGroup(::org::w3c::dom::Element* e);
	void mergeAttributes(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* fromAttrGrp, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* toAttrGrp, $String* typeName, bool extension, ::org::w3c::dom::Element* elem);
	void processComplexContent(::org::w3c::dom::Element* complexContentChild, bool isMixed, bool isDerivation, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void traverseComplexContent(::org::w3c::dom::Element* complexContentElement, bool mixedOnType, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void traverseComplexContentDecl(::org::w3c::dom::Element* complexContentDecl, bool mixedOnComplexTypeDecl);
	::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* traverseComplexTypeDecl(::org::w3c::dom::Element* complexTypeDecl, $String* complexTypeName, $ObjectArray* attrValues, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* traverseGlobal(::org::w3c::dom::Element* complexTypeNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* traverseLocal(::org::w3c::dom::Element* complexTypeNode, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void traverseSimpleContent(::org::w3c::dom::Element* simpleContentElement, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void traverseSimpleContentDecl(::org::w3c::dom::Element* simpleContentDecl);
	static const int32_t GLOBAL_NUM = 11;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* fErrorContent;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* fErrorWildcard;
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	int16_t fDerivedBy = 0;
	int16_t fFinal = 0;
	int16_t fBlock = 0;
	int16_t fContentType = 0;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fBaseType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* fAttrGrp = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fXSSimpleType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* fParticle = nullptr;
	bool fIsAbstract = false;
	::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* fComplexTypeDecl = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>* fAnnotations = nullptr;
	$ObjectArray* fGlobalStore = nullptr;
	int32_t fGlobalStorePos = 0;
	static const bool DEBUG = false;
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

#pragma pop_macro("DEBUG")
#pragma pop_macro("GLOBAL_NUM")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDComplexTypeTraverser_h_