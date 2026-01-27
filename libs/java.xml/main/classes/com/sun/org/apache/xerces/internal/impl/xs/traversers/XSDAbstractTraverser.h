#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHILD_OF_GROUP")
#undef CHILD_OF_GROUP
#pragma push_macro("GROUP_REF_WITH_ALL")
#undef GROUP_REF_WITH_ALL
#pragma push_macro("NOT_ALL_CONTEXT")
#undef NOT_ALL_CONTEXT
#pragma push_macro("NO_NAME")
#undef NO_NAME
#pragma push_macro("PROCESSING_ALL_EL")
#undef PROCESSING_ALL_EL
#pragma push_macro("PROCESSING_ALL_GP")
#undef PROCESSING_ALL_GP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class XSFacets;
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
							namespace validation {
								class ValidationState;
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
									class XSDAbstractTraverser$FacetInfo;
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
							class XSTypeDefinition;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
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

class XSDAbstractTraverser : public ::java::lang::Object {
	$class(XSDAbstractTraverser, 0, ::java::lang::Object)
public:
	XSDAbstractTraverser();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* handler, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* attrChecker);
	void checkEnumerationAndLengthInconsistency(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* baseValidator, ::java::util::List* enumData, ::org::w3c::dom::Element* contextNode, $String* typeName);
	void checkEnumerationAndMaxLengthInconsistency(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* baseValidator, ::java::util::List* enumData, ::org::w3c::dom::Element* contextNode, $String* typeName);
	void checkEnumerationAndMinLengthInconsistency(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* baseValidator, ::java::util::List* enumData, ::org::w3c::dom::Element* contextNode, $String* typeName);
	virtual void checkNotationType($String* refName, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typeDecl, ::org::w3c::dom::Element* elem);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* checkOccurrences(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, $String* particleName, ::org::w3c::dom::Element* parent, int32_t allContextFlags, int64_t defaultVals);
	bool containsQName(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* type);
	static $String* escapeAttValue($String* original, int32_t from);
	static $String* getSchemaTypeName(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typeDefn);
	static $String* processAttValue($String* original);
	virtual void reportSchemaError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reportSchemaWarning($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reset(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, bool validateAnnotations, ::java::util::Locale* locale);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl* traverseAnnotationDecl(::org::w3c::dom::Element* annotationDecl, $ObjectArray* parentAttrs, bool isGlobal, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	virtual ::org::w3c::dom::Element* traverseAttrsAndAttrGrps(::org::w3c::dom::Element* firstAttr, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* attrGrp, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser$FacetInfo* traverseFacets(::org::w3c::dom::Element* content, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typeDef, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* baseValidator, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl* traverseSyntheticAnnotation(::org::w3c::dom::Element* annotationParent, $String* initialContent, $ObjectArray* parentAttrs, bool isGlobal, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	static $String* NO_NAME;
	static const int32_t NOT_ALL_CONTEXT = 0;
	static const int32_t PROCESSING_ALL_EL = 1;
	static const int32_t GROUP_REF_WITH_ALL = 2;
	static const int32_t CHILD_OF_GROUP = 4;
	static const int32_t PROCESSING_ALL_GP = 8;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* fSchemaHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* fAttrChecker = nullptr;
	bool fValidateAnnotations = false;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* fValidationState = nullptr;
	static ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fQNameDV;
	::java::lang::StringBuilder* fPattern = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* xsFacets = nullptr;
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

#pragma pop_macro("CHILD_OF_GROUP")
#pragma pop_macro("GROUP_REF_WITH_ALL")
#pragma pop_macro("NOT_ALL_CONTEXT")
#pragma pop_macro("NO_NAME")
#pragma pop_macro("PROCESSING_ALL_EL")
#pragma pop_macro("PROCESSING_ALL_GP")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractTraverser_h_