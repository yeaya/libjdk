#ifndef _com_sun_xml_internal_stream_dtd_nonvalidating_DTDGrammar_h_
#define _com_sun_xml_internal_stream_dtd_nonvalidating_DTDGrammar_h_
//$ class com.sun.xml.internal.stream.dtd.nonvalidating.DTDGrammar
//$ extends java.lang.Object

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
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {
							class XMLAttributeDecl;
							class XMLElementDecl;
							class XMLSimpleType;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

class DTDGrammar : public ::java::lang::Object {
	$class(DTDGrammar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTDGrammar();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual int32_t createAttributeDecl();
	virtual int32_t createElementDecl();
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	void ensureAttributeDeclCapacity(int32_t chunk);
	void ensureElementDeclCapacity(int32_t chunk);
	virtual bool getAttributeDecl(int32_t attributeDeclIndex, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl* attributeDecl);
	virtual int32_t getAttributeDeclIndex(int32_t elementDeclIndex, $String* attributeDeclName);
	virtual int16_t getContentSpecType(int32_t elementIndex);
	virtual bool getElementDecl(int32_t elementDeclIndex, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLElementDecl* elementDecl);
	virtual int32_t getElementDeclIndex($String* elementDeclName);
	virtual int32_t getElementDeclIndex(::com::sun::org::apache::xerces::internal::xni::QName* elementDeclQName);
	virtual int32_t getFirstAttributeDeclIndex(int32_t elementDeclIndex);
	virtual int32_t getFirstElementDeclIndex();
	virtual int32_t getNextAttributeDeclIndex(int32_t attributeDeclIndex);
	virtual int32_t getNextElementDeclIndex(int32_t elementDeclIndex);
	virtual ::java::util::List* getNotationDecls();
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolTable* getSymbolTable();
	virtual bool isCDATAAttribute(::com::sun::org::apache::xerces::internal::xni::QName* elName, ::com::sun::org::apache::xerces::internal::xni::QName* atName);
	bool normalizeDefaultAttrValue(::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	void printAttribute(int32_t attributeDeclIndex);
	virtual void printAttributes(int32_t elementDeclIndex);
	virtual void printElements();
	static $Array<int16_t, 2>* resize($Array<int16_t, 2>* array, int32_t newsize);
	static $Array<int32_t, 2>* resize($Array<int32_t, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* resize($Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* array, int32_t newsize);
	static $Array<::java::lang::String, 2>* resize($Array<::java::lang::String, 2>* array, int32_t newsize);
	static $Array<::java::lang::String, 3>* resize($Array<::java::lang::String, 3>* array, int32_t newsize);
	virtual void setAttributeDecl(int32_t elementDeclIndex, int32_t attributeDeclIndex, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl* attributeDecl);
	virtual void setElementDecl(int32_t elementDeclIndex, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLElementDecl* elementDecl);
	virtual void setFirstAttributeDeclIndex(int32_t elementDeclIndex, int32_t newFirstAttrIndex);
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
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
	::java::util::ArrayList* notationDecls = nullptr;
	int32_t fElementDeclCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* fElementDeclName = nullptr;
	$Array<int16_t, 2>* fElementDeclType = nullptr;
	$Array<int32_t, 2>* fElementDeclFirstAttributeDeclIndex = nullptr;
	$Array<int32_t, 2>* fElementDeclLastAttributeDeclIndex = nullptr;
	int32_t fAttributeDeclCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>* fAttributeDeclName = nullptr;
	$Array<int16_t, 2>* fAttributeDeclType = nullptr;
	$Array<::java::lang::String, 3>* fAttributeDeclEnumeration = nullptr;
	$Array<int16_t, 2>* fAttributeDeclDefaultType = nullptr;
	$Array<::java::lang::String, 2>* fAttributeDeclDefaultValue = nullptr;
	$Array<::java::lang::String, 2>* fAttributeDeclNonNormalizedDefaultValue = nullptr;
	$Array<int32_t, 2>* fAttributeDeclNextAttributeDeclIndex = nullptr;
	::java::util::Map* fElementIndexMap = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl* fAttributeDecl = nullptr;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLElementDecl* fElementDecl = nullptr;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* fSimpleType = nullptr;
	::java::util::Map* fElementDeclTab = nullptr;
};

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
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

#endif // _com_sun_xml_internal_stream_dtd_nonvalidating_DTDGrammar_h_