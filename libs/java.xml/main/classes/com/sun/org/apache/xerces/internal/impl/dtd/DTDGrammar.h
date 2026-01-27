#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDTDHandler
//$ implements com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler,com.sun.org.apache.xerces.internal.impl.validation.EntityState,com.sun.org.apache.xerces.internal.xni.grammars.Grammar

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SHIFT")
#undef CHUNK_SHIFT
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("INITIAL_CHUNK_COUNT")
#undef INITIAL_CHUNK_COUNT
#pragma push_macro("LIST_FLAG")
#undef LIST_FLAG
#pragma push_macro("LIST_MASK")
#undef LIST_MASK
#pragma push_macro("TOP_LEVEL_SCOPE")
#undef TOP_LEVEL_SCOPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class DTDGrammar$ChildrenList;
								class XMLAttributeDecl;
								class XMLContentSpec;
								class XMLDTDDescription;
								class XMLElementDecl;
								class XMLEntityDecl;
								class XMLNotationDecl;
								class XMLSimpleType;
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
							namespace dtd {
								namespace models {
									class CMNode;
									class ContentModelValidator;
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
							namespace dv {
								class DatatypeValidator;
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
						namespace xni {
							class Augmentations;
							class QName;
							class XMLLocator;
							class XMLResourceIdentifier;
							class XMLString;
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
						namespace xni {
							namespace parser {
								class XMLDTDContentModelSource;
								class XMLDTDSource;
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
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class DTDGrammar : public ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, public ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler, public ::com::sun::org::apache::xerces::internal::impl::validation::EntityState, public ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar {
	$class(DTDGrammar, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler, ::com::sun::org::apache::xerces::internal::impl::validation::EntityState, ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar)
public:
	DTDGrammar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription* desc);
	virtual int32_t addContentSpecNode(int16_t nodeType, $String* nodeValue);
	virtual int32_t addContentSpecNode(int16_t nodeType, int32_t leftNodeIndex, int32_t rightNodeIndex);
	virtual void addContentSpecToElement(::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* elementDecl);
	virtual int32_t addUniqueLeafNode($String* elementName);
	virtual void any(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void appendContentSpec(::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec, ::java::lang::StringBuffer* str, bool parens, int32_t parentContentSpecType);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* buildSyntaxTree(int32_t startNode, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void contentSpecTree(int32_t contentSpecIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec, ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar$ChildrenList* children);
	virtual int32_t createAttributeDecl();
	::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator* createChildModel(int32_t contentSpecIndex);
	virtual int32_t createContentSpec();
	virtual int32_t createElementDecl();
	virtual int32_t createEntityDecl();
	virtual int32_t createNotationDecl();
	virtual void element($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void empty(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endContentModel(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void ensureAttributeDeclCapacity(int32_t chunk);
	void ensureContentSpecCapacity(int32_t chunk);
	void ensureElementDeclCapacity(int32_t chunk);
	void ensureEntityDeclCapacity(int32_t chunk);
	void ensureNotationDeclCapacity(int32_t chunk);
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual bool getAttributeDecl(int32_t attributeDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* attributeDecl);
	virtual int32_t getAttributeDeclIndex(int32_t elementDeclIndex, $String* attributeDeclName);
	virtual bool getAttributeDeclIsExternal(int32_t attributeDeclIndex);
	virtual bool getContentSpec(int32_t contentSpecIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	virtual $String* getContentSpecAsString(int32_t elementDeclIndex);
	virtual int32_t getContentSpecIndex(int32_t elementDeclIndex);
	virtual int16_t getContentSpecType(int32_t elementIndex);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* getDTDContentModelSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* getDTDSource() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator* getElementContentModelValidator(int32_t elementDeclIndex);
	virtual bool getElementDecl(int32_t elementDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* elementDecl);
	virtual int32_t getElementDeclIndex($String* elementDeclName);
	virtual int32_t getElementDeclIndex(::com::sun::org::apache::xerces::internal::xni::QName* elementDeclQName);
	virtual bool getElementDeclIsExternal(int32_t elementDeclIndex);
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getElementDeclName(int32_t elementDeclIndex);
	virtual bool getEntityDecl(int32_t entityDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* entityDecl);
	virtual int32_t getEntityDeclIndex($String* entityDeclName);
	virtual int32_t getFirstAttributeDeclIndex(int32_t elementDeclIndex);
	virtual int32_t getFirstElementDeclIndex();
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* getGrammarDescription() override;
	virtual int32_t getNextAttributeDeclIndex(int32_t attributeDeclIndex);
	virtual int32_t getNextElementDeclIndex(int32_t elementDeclIndex);
	virtual bool getNotationDecl(int32_t notationDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLNotationDecl* notationDecl);
	virtual int32_t getNotationDeclIndex($String* notationDeclName);
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolTable* getSymbolTable();
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void initializeContentModelStack();
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual bool isCDATAAttribute(::com::sun::org::apache::xerces::internal::xni::QName* elName, ::com::sun::org::apache::xerces::internal::xni::QName* atName);
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual bool isImmutable();
	virtual bool isNamespaceAware();
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void occurrence(int16_t occurrence, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void pcdata(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void printAttribute(int32_t attributeDeclIndex);
	virtual void printAttributes(int32_t elementDeclIndex);
	virtual void printElements();
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void putElementNameMapping(::com::sun::org::apache::xerces::internal::xni::QName* name, int32_t scope, int32_t elementDeclIndex);
	static $Array<int8_t, 2>* resize($Array<int8_t, 2>* array, int32_t newsize);
	static $Array<int16_t, 2>* resize($Array<int16_t, 2>* array, int32_t newsize);
	static $Array<int32_t, 2>* resize($Array<int32_t, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator, 2>* array, int32_t newsize);
	static $Array<::java::lang::Object, 2>* resize($Array<::java::lang::Object, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* resize($Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* array, int32_t newsize);
	static $Array<::java::lang::String, 2>* resize($Array<::java::lang::String, 2>* array, int32_t newsize);
	static $Array<::java::lang::String, 3>* resize($Array<::java::lang::String, 3>* array, int32_t newsize);
	virtual void separator(int16_t separator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setAttributeDecl(int32_t elementDeclIndex, int32_t attributeDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* attributeDecl);
	virtual void setContentSpec(int32_t contentSpecIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	virtual void setContentSpecIndex(int32_t elementDeclIndex, int32_t contentSpecIndex);
	virtual void setDTDContentModelSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* source) override;
	virtual void setDTDSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* source) override;
	virtual void setElementDecl(int32_t elementDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* elementDecl);
	virtual void setEntityDecl(int32_t entityDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* entityDecl);
	virtual void setFirstAttributeDeclIndex(int32_t elementDeclIndex, int32_t newFirstAttrIndex);
	virtual void setNotationDecl(int32_t notationDeclIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLNotationDecl* notationDecl);
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startContentModel($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static const int32_t TOP_LEVEL_SCOPE = (-1);
	static const int32_t CHUNK_SHIFT = 8;
	static const int32_t CHUNK_SIZE = 256; // (1 << CHUNK_SHIFT)
	static const int32_t CHUNK_MASK = 255; // CHUNK_SIZE - 1
	static const int32_t INITIAL_CHUNK_COUNT = 4; // (1 << (10 - CHUNK_SHIFT))
	static const int16_t LIST_FLAG = 128;
	static const int16_t LIST_MASK = ~LIST_FLAG;
	static const bool DEBUG = false;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* fDTDSource = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* fDTDContentModelSource = nullptr;
	int32_t fCurrentElementIndex = 0;
	int32_t fCurrentAttributeIndex = 0;
	bool fReadingExternalDTD = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription* fGrammarDescription = nullptr;
	int32_t fElementDeclCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* fElementDeclName = nullptr;
	$Array<int16_t, 2>* fElementDeclType = nullptr;
	$Array<int32_t, 2>* fElementDeclContentSpecIndex = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator, 2>* fElementDeclContentModelValidator = nullptr;
	$Array<int32_t, 2>* fElementDeclFirstAttributeDeclIndex = nullptr;
	$Array<int32_t, 2>* fElementDeclLastAttributeDeclIndex = nullptr;
	int32_t fAttributeDeclCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* fAttributeDeclName = nullptr;
	bool fIsImmutable = false;
	$Array<int16_t, 2>* fAttributeDeclType = nullptr;
	$Array<::java::lang::String, 3>* fAttributeDeclEnumeration = nullptr;
	$Array<int16_t, 2>* fAttributeDeclDefaultType = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator, 2>* fAttributeDeclDatatypeValidator = nullptr;
	$Array<::java::lang::String, 2>* fAttributeDeclDefaultValue = nullptr;
	$Array<::java::lang::String, 2>* fAttributeDeclNonNormalizedDefaultValue = nullptr;
	$Array<int32_t, 2>* fAttributeDeclNextAttributeDeclIndex = nullptr;
	int32_t fContentSpecCount = 0;
	$Array<int16_t, 2>* fContentSpecType = nullptr;
	$Array<::java::lang::Object, 2>* fContentSpecValue = nullptr;
	$Array<::java::lang::Object, 2>* fContentSpecOtherValue = nullptr;
	int32_t fEntityCount = 0;
	$Array<::java::lang::String, 2>* fEntityName = nullptr;
	$Array<::java::lang::String, 2>* fEntityValue = nullptr;
	$Array<::java::lang::String, 2>* fEntityPublicId = nullptr;
	$Array<::java::lang::String, 2>* fEntitySystemId = nullptr;
	$Array<::java::lang::String, 2>* fEntityBaseSystemId = nullptr;
	$Array<::java::lang::String, 2>* fEntityNotation = nullptr;
	$Array<int8_t, 2>* fEntityIsPE = nullptr;
	$Array<int8_t, 2>* fEntityInExternal = nullptr;
	int32_t fNotationCount = 0;
	$Array<::java::lang::String, 2>* fNotationName = nullptr;
	$Array<::java::lang::String, 2>* fNotationPublicId = nullptr;
	$Array<::java::lang::String, 2>* fNotationSystemId = nullptr;
	$Array<::java::lang::String, 2>* fNotationBaseSystemId = nullptr;
	::java::util::Map* fElementIndexMap = nullptr;
	::java::util::Map* fEntityIndexMap = nullptr;
	::java::util::Map* fNotationIndexMap = nullptr;
	bool fMixed = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName2 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* fAttributeDecl = nullptr;
	int32_t fLeafCount = 0;
	int32_t fEpsilonIndex = 0;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* fElementDecl = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* fEntityDecl = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType* fSimpleType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* fContentSpec = nullptr;
	::java::util::Map* fElementDeclTab = nullptr;
	$shorts* fOpStack = nullptr;
	$ints* fNodeIndexStack = nullptr;
	$ints* fPrevNodeIndexStack = nullptr;
	int32_t fDepth = 0;
	$booleans* fPEntityStack = nullptr;
	int32_t fPEDepth = 0;
	$Array<int32_t, 2>* fElementDeclIsExternal = nullptr;
	$Array<int32_t, 2>* fAttributeDeclIsExternal = nullptr;
	int32_t valueIndex = 0;
	int32_t prevNodeIndex = 0;
	int32_t nodeIndex = 0;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SHIFT")
#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("DEBUG")
#pragma pop_macro("INITIAL_CHUNK_COUNT")
#pragma pop_macro("LIST_FLAG")
#pragma pop_macro("LIST_MASK")
#pragma pop_macro("TOP_LEVEL_SCOPE")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar_h_