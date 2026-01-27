#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XSGrammar
//$ implements com.sun.org.apache.xerces.internal.xs.XSNamespaceItem

#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <java/lang/Array.h>

#pragma push_macro("BASICSET_COUNT")
#undef BASICSET_COUNT
#pragma push_macro("FULLSET_COUNT")
#undef FULLSET_COUNT
#pragma push_macro("GLOBAL_COMP")
#undef GLOBAL_COMP
#pragma push_macro("GRAMMAR_XS")
#undef GRAMMAR_XS
#pragma push_macro("GRAMMAR_XSI")
#undef GRAMMAR_XSI
#pragma push_macro("INC_SIZE")
#undef INC_SIZE
#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE
#pragma push_macro("MAX_COMP_IDX")
#undef MAX_COMP_IDX
#pragma push_macro("REDEFINED_GROUP_INIT_SIZE")
#undef REDEFINED_GROUP_INIT_SIZE
#pragma push_macro("SG_XSI")
#undef SG_XSI

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
								class SchemaGrammar$BuiltinSchemaGrammar;
								class XSAnnotationImpl;
								class XSAttributeDecl;
								class XSAttributeGroupDecl;
								class XSComplexTypeDecl;
								class XSDDescription;
								class XSElementDecl;
								class XSGroupDecl;
								class XSNotationDecl;
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
								namespace identity {
									class IdentityConstraint;
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
						namespace impl {
							namespace xs {
								namespace util {
									class SimpleLocator;
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
						namespace parsers {
							class DOMParser;
							class SAXParser;
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
							class SymbolHash;
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
						namespace xni {
							namespace grammars {
								class XMLGrammarDescription;
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
							class StringList;
							class XSAttributeDeclaration;
							class XSAttributeGroupDefinition;
							class XSElementDeclaration;
							class XSIDCDefinition;
							class XSModel;
							class XSModelGroupDefinition;
							class XSNamedMap;
							class XSNotationDeclaration;
							class XSObjectList;
							class XSTypeDefinition;
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
							namespace datatypes {
								class ObjectList;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class SchemaGrammar : public ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar, public ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem {
	$class(SchemaGrammar, 0, ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar, ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem)
public:
	SchemaGrammar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* targetNamespace, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* grammarDesc, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual void addAnnotation(::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl* annotation);
	virtual void addComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* locator);
	virtual void addDocument(Object$* document, $String* location);
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl);
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl, $String* location);
	virtual void addGlobalAttributeGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl);
	virtual void addGlobalAttributeGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl, $String* location);
	virtual void addGlobalComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl);
	virtual void addGlobalComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl, $String* location);
	virtual void addGlobalElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl);
	virtual void addGlobalElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl, $String* location);
	virtual void addGlobalElementDeclAll(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl);
	virtual void addGlobalGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* decl);
	virtual void addGlobalGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* decl, $String* location);
	virtual void addGlobalNotationDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* decl);
	virtual void addGlobalNotationDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* decl, $String* location);
	virtual void addGlobalSimpleTypeDecl(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* decl);
	virtual void addGlobalSimpleTypeDecl(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* decl, $String* location);
	virtual void addGlobalTypeDecl(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* decl);
	virtual void addGlobalTypeDecl(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* decl, $String* location);
	void addIDConstraintDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* decl);
	void addIDConstraintDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* decl, $String* location);
	virtual void addRedefinedGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* derived, ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* base, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* locator);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* getAttributeGroup($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponents(int16_t objectType) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* getComponentsExt(int16_t objectType);
	virtual ::com::sun::org::apache::xerces::internal::parsers::DOMParser* getDOMParser();
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getDocumentLocations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration($String* name) override;
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* getGlobalAttributeDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* getGlobalAttributeDecl($String* declName, $String* location);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* getGlobalAttributeGroupDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* getGlobalAttributeGroupDecl($String* declName, $String* location);
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl($String* declName, $String* location);
	::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* getGlobalGroupDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* getGlobalGroupDecl($String* declName, $String* location);
	::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* getGlobalNotationDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* getGlobalNotationDecl($String* declName, $String* location);
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getGlobalTypeDecl($String* declName);
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getGlobalTypeDecl($String* declName, $String* location);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* getGrammarDescription() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getIDCDefinition($String* name) override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIDConstraintDecl($String* declName);
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIDConstraintDecl($String* declName, $String* location);
	virtual ::java::util::List* getImportedGrammars();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* getModelGroupDefinition($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotationDeclaration($String* name) override;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* getRGLocators();
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>* getRedefinedGroupDecls();
	static ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* getS4SGrammar(int16_t schemaVersion);
	virtual ::com::sun::org::apache::xerces::internal::parsers::SAXParser* getSAXParser();
	virtual $String* getSchemaNamespace() override;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* getSubstitutionGroups();
	$String* getTargetNamespace();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition($String* name) override;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* getUncheckedCTLocators();
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>* getUncheckedComplexTypeDecls();
	bool hasIDConstraints();
	virtual bool isImmutable();
	virtual bool isNamespaceAware();
	virtual void removeDocument(int32_t index);
	virtual void resetComponents();
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>* oldArray, int32_t newSize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>* oldArray, int32_t newSize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* oldArray, int32_t newSize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* oldArray, int32_t newSize);
	virtual void setImmutable(bool isImmutable);
	virtual void setImportedGrammars(::java::util::List* importedGrammars);
	void setUncheckedTypeNum(int32_t newSize);
	virtual $String* toString() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel($Array<::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar>* grammars) override;
	$String* fTargetNamespace = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrGrpDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalElemDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalGroupDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalNotationDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalIDConstraintDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalTypeDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrGrpDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalElemDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalGroupDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalNotationDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalIDConstraintDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalTypeDeclsExt = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fAllGlobalElemDecls = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* fGrammarDescription = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>* fAnnotations = nullptr;
	int32_t fNumAnnotations = 0;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::lang::ref::SoftReference* fSAXParser = nullptr;
	::java::lang::ref::SoftReference* fDOMParser = nullptr;
	bool fIsImmutable = false;
	static const int32_t BASICSET_COUNT = 29;
	static const int32_t FULLSET_COUNT = 46;
	static const int32_t GRAMMAR_XS = 1;
	static const int32_t GRAMMAR_XSI = 2;
	::java::util::List* fImported = nullptr;
	static const int32_t INITIAL_SIZE = 16;
	static const int32_t INC_SIZE = 16;
	int32_t fCTCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>* fComplexTypeDecls = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* fCTLocators = nullptr;
	static const int32_t REDEFINED_GROUP_INIT_SIZE = 2;
	int32_t fRGCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>* fRedefinedGroupDecls = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>* fRGLocators = nullptr;
	bool fFullChecked = false;
	int32_t fSubGroupCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* fSubGroups = nullptr;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* fAnyType;
	static ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar* SG_SchemaNS;
	static ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar* SG_SchemaNSExtended;
	static ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fAnySimpleType;
	static ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar* SG_XSI;
	static const int16_t MAX_COMP_IDX = 16; // XSTypeDefinition.SIMPLE_TYPE
	static $booleans* GLOBAL_COMP;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap>* fComponents = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>* fComponentsExt = nullptr;
	::java::util::List* fDocuments = nullptr;
	::java::util::List* fLocations = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASICSET_COUNT")
#pragma pop_macro("FULLSET_COUNT")
#pragma pop_macro("GLOBAL_COMP")
#pragma pop_macro("GRAMMAR_XS")
#pragma pop_macro("GRAMMAR_XSI")
#pragma pop_macro("INC_SIZE")
#pragma pop_macro("INITIAL_SIZE")
#pragma pop_macro("MAX_COMP_IDX")
#pragma pop_macro("REDEFINED_GROUP_INIT_SIZE")
#pragma pop_macro("SG_XSI")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar_h_