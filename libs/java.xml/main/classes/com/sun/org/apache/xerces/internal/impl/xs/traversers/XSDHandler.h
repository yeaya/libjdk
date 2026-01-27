#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("ATTRIBUTEGROUP_TYPE")
#undef ATTRIBUTEGROUP_TYPE
#pragma push_macro("ATTRIBUTE_TYPE")
#undef ATTRIBUTE_TYPE
#pragma push_macro("CIRCULAR_CODES")
#undef CIRCULAR_CODES
#pragma push_macro("COMP_TYPE")
#undef COMP_TYPE
#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("DEBUG_NODE_POOL")
#undef DEBUG_NODE_POOL
#pragma push_macro("DISALLOW_DOCTYPE")
#undef DISALLOW_DOCTYPE
#pragma push_macro("ELEMENT_TYPE")
#undef ELEMENT_TYPE
#pragma push_macro("ELE_ERROR_CODES")
#undef ELE_ERROR_CODES
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#pragma push_macro("GROUP_TYPE")
#undef GROUP_TYPE
#pragma push_macro("HONOUR_ALL_SCHEMALOCATIONS")
#undef HONOUR_ALL_SCHEMALOCATIONS
#pragma push_macro("IDENTITYCONSTRAINT_TYPE")
#undef IDENTITYCONSTRAINT_TYPE
#pragma push_macro("INC_KEYREF_STACK_AMOUNT")
#undef INC_KEYREF_STACK_AMOUNT
#pragma push_macro("INC_STACK_SIZE")
#undef INC_STACK_SIZE
#pragma push_macro("INIT_KEYREF_STACK")
#undef INIT_KEYREF_STACK
#pragma push_macro("INIT_STACK_SIZE")
#undef INIT_STACK_SIZE
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NAMESPACE_PREFIXES")
#undef NAMESPACE_PREFIXES
#pragma push_macro("NOTATION_TYPE")
#undef NOTATION_TYPE
#pragma push_macro("NS_ERROR_CODES")
#undef NS_ERROR_CODES
#pragma push_macro("REDEF_IDENTIFIER")
#undef REDEF_IDENTIFIER
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STANDARD_URI_CONFORMANT_FEATURE")
#undef STANDARD_URI_CONFORMANT_FEATURE
#pragma push_macro("STRING_INTERNING")
#undef STRING_INTERNING
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("TYPEDECL_TYPE")
#undef TYPEDECL_TYPE
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XMLSCHEMA_VALIDATION")
#undef XMLSCHEMA_VALIDATION
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLEntityManager;
							class XMLErrorReporter;
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
							namespace dv {
								class SchemaDVFactory;
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
								class XSAttributeDecl;
								class XSAttributeGroupDecl;
								class XSComplexTypeDecl;
								class XSDDescription;
								class XSDeclarationPool;
								class XSElementDecl;
								class XSGrammarBucket;
								class XSGroupDecl;
								class XSModelGroupImpl;
								class XSNotationDecl;
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
								namespace opti {
									class SchemaDOMParser;
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
								namespace traversers {
									class SchemaContentHandler;
									class StAXSchemaParser;
									class XSAttributeChecker;
									class XSDAttributeGroupTraverser;
									class XSDAttributeTraverser;
									class XSDComplexTypeTraverser;
									class XSDElementTraverser;
									class XSDGroupTraverser;
									class XSDHandler$XSAnnotationGrammarPool;
									class XSDHandler$XSDKey;
									class XSDKeyrefTraverser;
									class XSDNotationTraverser;
									class XSDSimpleTypeTraverser;
									class XSDUniqueOrKeyTraverser;
									class XSDWildcardTraverser;
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
						namespace impl {
							namespace xs {
								namespace util {
									class SimpleLocator;
									class XSInputSource;
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
							class XML11Configuration;
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
							class DOMInputSource;
							class SAXInputSource;
							class StAXInputSource;
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
						namespace utils {
							class XMLSecurityManager;
							class XMLSecurityPropertyManager;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {
								class XMLGrammarPool;
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
							namespace parser {
								class XMLComponentManager;
								class XMLErrorHandler;
								class XMLInputSource;
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
							class XSAttributeDeclaration;
							class XSAttributeGroupDefinition;
							class XSAttributeUse;
							class XSElementDeclaration;
							class XSModelGroup;
							class XSModelGroupDefinition;
							class XSObject;
							class XSObjectList;
							class XSParticle;
							class XSSimpleTypeDefinition;
							class XSTypeDefinition;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class Map;
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

class XSDHandler : public ::java::lang::Object {
	$class(XSDHandler, 0, ::java::lang::Object)
public:
	XSDHandler();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* gBucket);
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl);
	void addGlobalAttributeDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	virtual void addGlobalAttributeGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl);
	void addGlobalAttributeGroupDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addGlobalComponent(::com::sun::org::apache::xerces::internal::xs::XSObject* component, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc);
	void addGlobalComponents(::java::util::List* components, ::java::util::Map* importDependencies);
	virtual void addGlobalElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl);
	void addGlobalElementDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	virtual void addGlobalGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* decl);
	void addGlobalGroupDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	virtual void addGlobalNotationDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* decl);
	void addGlobalNotationDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	virtual void addGlobalTypeDecl(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* decl);
	void addGlobalTypeDecls(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addGrammarComponents(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addGrammars(::java::util::List* grammars);
	virtual void addIDConstraintDecl(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* decl);
	void addImportList(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* sg, ::java::util::List* importedGrammars, ::java::util::List* namespaceList);
	void addNamespaceDependency($String* namespace1, $String* namespace2, ::java::util::List* list);
	void addNewGrammarComponents(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addNewGrammarLocations(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addNewImportedGrammars(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* srcGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* dstGrammar);
	void addRelatedAttribute(::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* decl, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void addRelatedElement(::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* decl, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void addRelatedType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	virtual void buildGlobalNameRegistries();
	bool canAddComponent(::com::sun::org::apache::xerces::internal::xs::XSObject* component, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc);
	bool canAddComponents(::java::util::List* components);
	int32_t changeRedefineGroup($String* originalQName, $String* elementSought, $String* newName, ::org::w3c::dom::Element* curr, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	virtual void checkForDuplicateNames($String* qName, int32_t declType, ::java::util::Map* registry, ::java::util::Map* registry_sub, ::org::w3c::dom::Element* currComp, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* currSchema);
	virtual void checkForDuplicateNames($String* qName, int32_t declType, ::org::w3c::dom::Element* currComp);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* constructTrees(::org::w3c::dom::Element* schemaRoot, $String* locationHint, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool nsCollision);
	bool containedImportedGrammar(::java::util::List* importedGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void createAnnotationValidator();
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* createGrammarFrom(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void createTraversers();
	$String* doc2SystemId(::org::w3c::dom::Element* ele);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* element2Locator(::org::w3c::dom::Element* e);
	virtual bool element2Locator(::org::w3c::dom::Element* e, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* l);
	$String* emptyString2Null($String* ns);
	bool existingGrammars(::java::util::List* grammars);
	::java::util::List* expandComponents($Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* components, ::java::util::Map* dependencies);
	::java::util::List* expandGrammars($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars);
	void expandImportList($String* namespace$, ::java::util::List* namespaceList);
	void expandRelatedAttributeComponents(::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* decl, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedAttributeGroupComponents(::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* attrGroup, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedAttributeUseComponents(::com::sun::org::apache::xerces::internal::xs::XSAttributeUse* component, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedAttributeUsesComponents(::com::sun::org::apache::xerces::internal::xs::XSObjectList* attrUses, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedComplexTypeComponents(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* type, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedComponents(::com::sun::org::apache::xerces::internal::xs::XSObject* component, ::java::util::List* componentList, ::java::util::Map* dependencies);
	void expandRelatedElementComponents(::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* decl, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedModelGroupComponents(::com::sun::org::apache::xerces::internal::xs::XSModelGroup* modelGroup, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedModelGroupDefinitionComponents(::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* modelGroupDef, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedParticleComponents(::com::sun::org::apache::xerces::internal::xs::XSParticle* component, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedSimpleTypeComponents(::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* type, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	void expandRelatedTypeComponents(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, ::java::util::List* componentList, $String* namespace$, ::java::util::Map* dependencies);
	virtual void fillInLocalElemInfo(::org::w3c::dom::Element* elmDecl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, int32_t allContextFlags, ::com::sun::org::apache::xerces::internal::xs::XSObject* parent, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	::java::util::List* findDependentNamespaces($String* namespace$, ::java::util::Map* table);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* findGrammar(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool ignoreConflict);
	$String* findQName($String* name, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* findXSDocumentForDecl(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* currSchema, ::org::w3c::dom::Element* decl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* decl_Doc);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory* getDVFactory();
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* getDocInfoFromMap(::java::util::Map* registry, $String* declKey);
	::org::w3c::dom::Element* getElementFromMap(::java::util::Map* registry, $String* declKey);
	::java::util::List* getFromMap(::java::util::Map* registry, $String* key);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* getGlobalAttributeDecl($String* declKey);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* getGlobalAttributeGroupDecl($String* declKey);
	virtual $Object* getGlobalDecl(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* currSchema, int32_t declType, ::com::sun::org::apache::xerces::internal::xni::QName* declToTraverse, ::org::w3c::dom::Element* elmNode);
	virtual $Object* getGlobalDecl($String* declKey, int32_t declType);
	virtual $Object* getGlobalDeclFromGrammar(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* sGrammar, int32_t declType, $String* localpart);
	virtual $Object* getGlobalDeclFromGrammar(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* sGrammar, int32_t declType, $String* localpart, $String* schemaLoc);
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl($String* declKey);
	::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* getGlobalGroupDecl($String* declKey);
	::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* getGlobalNotationDecl($String* declKey);
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getGlobalTypeDecl($String* declKey);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* getGrammar($String* tns);
	virtual $Object* getGrpOrAttrGrpRedefinedByRestriction(int32_t type, ::com::sun::org::apache::xerces::internal::xni::QName* name, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* currSchema, ::org::w3c::dom::Element* elmNode);
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIDConstraintDecl($String* declKey);
	virtual ::java::util::Map* getIDRegistry();
	virtual ::java::util::Map* getIDRegistry_sub();
	::org::w3c::dom::Element* getSchemaDocument($String* schemaNamespace, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* schemaSource, bool mustResolve, int16_t referType, ::org::w3c::dom::Element* referElement);
	::org::w3c::dom::Element* getSchemaDocument($String* schemaNamespace, ::com::sun::org::apache::xerces::internal::util::SAXInputSource* schemaSource, bool mustResolve, int16_t referType, ::org::w3c::dom::Element* referElement);
	::org::w3c::dom::Element* getSchemaDocument($String* schemaNamespace, ::com::sun::org::apache::xerces::internal::util::DOMInputSource* schemaSource, bool mustResolve, int16_t referType, ::org::w3c::dom::Element* referElement);
	::org::w3c::dom::Element* getSchemaDocument($String* schemaNamespace, ::com::sun::org::apache::xerces::internal::util::StAXInputSource* schemaSource, bool mustResolve, int16_t referType, ::org::w3c::dom::Element* referElement);
	::org::w3c::dom::Element* getSchemaDocument(::com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource* schemaSource, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc);
	::org::w3c::dom::Element* getSchemaDocument0(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler$XSDKey* key, $String* schemaId, ::org::w3c::dom::Element* schemaElement);
	::org::w3c::dom::Element* getSchemaDocument1(bool mustResolve, bool hasInput, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* schemaSource, ::org::w3c::dom::Element* referElement, ::java::io::IOException* ioe);
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* getSchemaGrammar(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc);
	bool isExistingGrammar(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool ignoreConflict);
	bool needReportTNSError($String* uri);
	bool nonAnnotationContent(::org::w3c::dom::Element* elem);
	$String* null2EmptyString($String* ns);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* parseSchema(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* is, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, ::java::util::Map* locationPairs);
	virtual void prepareForParse();
	virtual void prepareForTraverse();
	bool removeParticle(::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl* group, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	void renameRedefiningComponents(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* currSchema, ::org::w3c::dom::Element* child, $String* componentType, $String* oldName, $String* newName);
	virtual void reportSchemaErr($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele, int16_t type, ::java::lang::Exception* exception);
	virtual void reportSchemaError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reportSchemaError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele, ::java::lang::Exception* exception);
	virtual void reportSchemaFatalError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reportSchemaWarning($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reportSchemaWarning($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele, ::java::lang::Exception* exception);
	void reportSharingError($String* namespace$, $String* name);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	virtual void resolveKeyRefs();
	::org::w3c::dom::Element* resolveSchema(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool mustResolve, ::org::w3c::dom::Element* referElement, bool usePairs);
	::org::w3c::dom::Element* resolveSchema(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* schemaSource, ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool mustResolve, ::org::w3c::dom::Element* referElement);
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveSchemaSource(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, bool mustResolve, ::org::w3c::dom::Element* referElement, bool usePairs);
	virtual $String* schemaDocument2SystemId(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	virtual void setDVFactory(::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory* dvFactory);
	virtual void setDeclPool(::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* declPool);
	virtual void setGenerateSyntheticAnnotations(bool state);
	void setSchemasVisible(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* startSchema);
	virtual void storeKeyRef(::org::w3c::dom::Element* keyrefToStore, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* currElemDecl);
	virtual $Object* traverseGlobalDecl(int32_t declType, ::org::w3c::dom::Element* decl, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual void traverseLocalElements();
	virtual void traverseSchemas(::java::util::List* annotationInfo);
	void updateImportDependencies(::java::util::Map* table);
	void updateImportList(::java::util::List* importedSrc, ::java::util::List* importedDst);
	void updateImportList(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* sg, ::java::util::List* importedGrammars, ::java::util::List* namespaceList);
	void updateImportListFor(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void updateImportListWith(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* newGrammar);
	void validateAnnotations(::java::util::List* annotationInfo);
	static $String* VALIDATION;
	static $String* XMLSCHEMA_VALIDATION;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* STANDARD_URI_CONFORMANT_FEATURE;
	static $String* DISALLOW_DOCTYPE;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* NAMESPACE_PREFIXES;
	static $String* STRING_INTERNING;
	static $String* ERROR_HANDLER;
	static $String* JAXP_SCHEMA_SOURCE;
	static $String* ENTITY_RESOLVER;
	static $String* ENTITY_MANAGER;
	static $String* ERROR_REPORTER;
	static $String* XMLGRAMMAR_POOL;
	static $String* SYMBOL_TABLE;
	static $String* SECURITY_MANAGER;
	static $String* LOCALE;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static const bool DEBUG_NODE_POOL = false;
	static const int32_t ATTRIBUTE_TYPE = 1;
	static const int32_t ATTRIBUTEGROUP_TYPE = 2;
	static const int32_t ELEMENT_TYPE = 3;
	static const int32_t GROUP_TYPE = 4;
	static const int32_t IDENTITYCONSTRAINT_TYPE = 5;
	static const int32_t NOTATION_TYPE = 6;
	static const int32_t TYPEDECL_TYPE = 7;
	static $String* REDEF_IDENTIFIER;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* fDeclPool = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	$String* fAccessExternalSchema = nullptr;
	$String* fAccessExternalDTD = nullptr;
	bool registryEmpty = false;
	::java::util::Map* fUnparsedAttributeRegistry = nullptr;
	::java::util::Map* fUnparsedAttributeGroupRegistry = nullptr;
	::java::util::Map* fUnparsedElementRegistry = nullptr;
	::java::util::Map* fUnparsedGroupRegistry = nullptr;
	::java::util::Map* fUnparsedIdentityConstraintRegistry = nullptr;
	::java::util::Map* fUnparsedNotationRegistry = nullptr;
	::java::util::Map* fUnparsedTypeRegistry = nullptr;
	::java::util::Map* fUnparsedAttributeRegistrySub = nullptr;
	::java::util::Map* fUnparsedAttributeGroupRegistrySub = nullptr;
	::java::util::Map* fUnparsedElementRegistrySub = nullptr;
	::java::util::Map* fUnparsedGroupRegistrySub = nullptr;
	::java::util::Map* fUnparsedIdentityConstraintRegistrySub = nullptr;
	::java::util::Map* fUnparsedNotationRegistrySub = nullptr;
	::java::util::Map* fUnparsedTypeRegistrySub = nullptr;
	$Array<::java::util::Map>* fUnparsedRegistriesExt = nullptr;
	::java::util::Map* fDependencyMap = nullptr;
	::java::util::Map* fImportMap = nullptr;
	::java::util::List* fAllTNSs = nullptr;
	::java::util::Map* fLocationPairs = nullptr;
	::java::util::Map* fHiddenNodes = nullptr;
	::java::util::Map* fTraversed = nullptr;
	::java::util::Map* fDoc2SystemId = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* fRoot = nullptr;
	::java::util::Map* fDoc2XSDocumentMap = nullptr;
	::java::util::Map* fRedefine2XSDMap = nullptr;
	::java::util::Map* fRedefine2NSSupport = nullptr;
	::java::util::Map* fRedefinedRestrictedAttributeGroupRegistry = nullptr;
	::java::util::Map* fRedefinedRestrictedGroupRegistry = nullptr;
	bool fLastSchemaWasDuplicate = false;
	bool fValidateAnnotations = false;
	bool fHonourAllSchemaLocations = false;
	bool fNamespaceGrowth = false;
	bool fTolerateDuplicates = false;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* fErrorHandler = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* fAttributeChecker = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* fGrammarBucket = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* fSchemaGrammarDescription = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
	bool fUseCatalog = false;
	$String* fCatalogFile = nullptr;
	$String* fDefer = nullptr;
	$String* fPrefer = nullptr;
	$String* fResolve = nullptr;
	bool fOverrideDefaultParser = false;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeGroupTraverser* fAttributeGroupTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeTraverser* fAttributeTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDComplexTypeTraverser* fComplexTypeTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDElementTraverser* fElementTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDGroupTraverser* fGroupTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDKeyrefTraverser* fKeyrefTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDNotationTraverser* fNotationTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDSimpleTypeTraverser* fSimpleTypeTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDUniqueOrKeyTraverser* fUniqueOrKeyTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDWildcardTraverser* fWildCardTraverser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory* fDVFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser* fSchemaParser = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::SchemaContentHandler* fXSContentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::StAXSchemaParser* fStAXSchemaParser = nullptr;
	::com::sun::org::apache::xerces::internal::parsers::XML11Configuration* fAnnotationValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler$XSAnnotationGrammarPool* fGrammarBucketAdapter = nullptr;
	static const int32_t INIT_STACK_SIZE = 30;
	static const int32_t INC_STACK_SIZE = 10;
	int32_t fLocalElemStackPos = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>* fParticle = nullptr;
	$Array<::org::w3c::dom::Element>* fLocalElementDecl = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo>* fLocalElementDecl_schema = nullptr;
	$ints* fAllContext = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* fParent = nullptr;
	$Array<::java::lang::String, 2>* fLocalElemNamespaceContext = nullptr;
	static const int32_t INIT_KEYREF_STACK = 2;
	static const int32_t INC_KEYREF_STACK_AMOUNT = 2;
	int32_t fKeyrefStackPos = 0;
	$Array<::org::w3c::dom::Element>* fKeyrefs = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo>* fKeyrefsMapXSDocumentInfo = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* fKeyrefElems = nullptr;
	$Array<::java::lang::String, 2>* fKeyrefNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalAttrGrpDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalElemDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalGroupDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalNotationDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalIDConstraintDecls = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGlobalTypeDecls = nullptr;
	static $Array<::java::lang::String, 2>* NS_ERROR_CODES;
	static $StringArray* ELE_ERROR_CODES;
	::java::util::List* fReportedTNS = nullptr;
	static $StringArray* COMP_TYPE;
	static $StringArray* CIRCULAR_CODES;
	::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* xl = nullptr;
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

#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("ATTRIBUTEGROUP_TYPE")
#pragma pop_macro("ATTRIBUTE_TYPE")
#pragma pop_macro("CIRCULAR_CODES")
#pragma pop_macro("COMP_TYPE")
#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("DEBUG_NODE_POOL")
#pragma pop_macro("DISALLOW_DOCTYPE")
#pragma pop_macro("ELEMENT_TYPE")
#pragma pop_macro("ELE_ERROR_CODES")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("GROUP_TYPE")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("IDENTITYCONSTRAINT_TYPE")
#pragma pop_macro("INC_KEYREF_STACK_AMOUNT")
#pragma pop_macro("INC_STACK_SIZE")
#pragma pop_macro("INIT_KEYREF_STACK")
#pragma pop_macro("INIT_STACK_SIZE")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NAMESPACE_PREFIXES")
#pragma pop_macro("NOTATION_TYPE")
#pragma pop_macro("NS_ERROR_CODES")
#pragma pop_macro("REDEF_IDENTIFIER")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STANDARD_URI_CONFORMANT_FEATURE")
#pragma pop_macro("STRING_INTERNING")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("TYPEDECL_TYPE")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XMLSCHEMA_VALIDATION")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler_h_