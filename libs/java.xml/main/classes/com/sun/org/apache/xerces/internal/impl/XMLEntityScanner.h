#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLEntityScanner
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("DEBUG_BUFFER")
#undef DEBUG_BUFFER
#pragma push_macro("DEBUG_ENCODINGS")
#undef DEBUG_ENCODINGS
#pragma push_macro("DEBUG_SKIP_STRING")
#undef DEBUG_SKIP_STRING
#pragma push_macro("END_OF_DOCUMENT_ENTITY")
#undef END_OF_DOCUMENT_ENTITY
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALID_NAMES")
#undef VALID_NAMES

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLEntityManager;
							class XMLErrorReporter;
							class XMLScanner$NameType;
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
							class XMLStringBuffer;
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
							class XMLLimitAnalyzer;
							class XMLSecurityManager;
							class XMLSecurityManager$Limit;
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
								class XMLComponentManager;
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
					class Entity$ScannedEntity;
					class XMLBufferListener;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class EOFException;
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLEntityScanner : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(XMLEntityScanner, 0, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	XMLEntityScanner();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager);
	virtual bool arrangeCapacity(int32_t length);
	virtual bool arrangeCapacity(int32_t length, bool changeEntity);
	virtual int32_t checkBeforeLoad(::com::sun::xml::internal::stream::Entity$ScannedEntity* entity, int32_t offset, int32_t nameOffset);
	virtual void checkEntityLimit(::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt, ::com::sun::xml::internal::stream::Entity$ScannedEntity* entity, int32_t offset, int32_t length);
	virtual void checkLimit(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, ::com::sun::xml::internal::stream::Entity$ScannedEntity* entity, int32_t offset, int32_t length);
	virtual void checkNodeCount(::com::sun::xml::internal::stream::Entity$ScannedEntity* entity);
	virtual ::java::io::Reader* createReader(::java::io::InputStream* inputStream, $String* encoding, ::java::lang::Boolean* isBigEndian);
	virtual $String* getBaseSystemId() override;
	virtual int32_t getChar(int32_t relative);
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual ::com::sun::xml::internal::stream::Entity$ScannedEntity* getCurrentEntity();
	virtual $String* getEncoding() override;
	virtual $ObjectArray* getEncodingName($bytes* b4, int32_t count);
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getPublicId() override;
	virtual $String* getVersion();
	virtual $String* getXMLVersion() override;
	virtual void invokeListeners(int32_t loadPos);
	bool isExternal();
	virtual bool isSpace(char16_t ch);
	bool load(int32_t offset, bool changeEntity, bool notify);
	virtual int32_t peekChar();
	void print();
	virtual void registerListener(::com::sun::xml::internal::stream::XMLBufferListener* listener);
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	void reset(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* reporter);
	void resetCommon();
	virtual int32_t scanChar(::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt);
	virtual int32_t scanContent(::com::sun::org::apache::xerces::internal::xni::XMLString* content);
	virtual bool scanData($String* delimiter, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buffer, int32_t chunkLimit);
	virtual int32_t scanLiteral(int32_t quote, ::com::sun::org::apache::xerces::internal::xni::XMLString* content, bool isNSURI);
	virtual $String* scanName(::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt);
	virtual $String* scanNmtoken();
	virtual bool scanQName(::com::sun::org::apache::xerces::internal::xni::QName* qname, ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt);
	virtual void setBaseSystemId($String* systemId);
	void setBufferSize(int32_t size);
	virtual void setColumnNumber(int32_t col);
	void setCurrentEntity(::com::sun::xml::internal::stream::Entity$ScannedEntity* scannedEntity);
	void setEncoding($String* encoding);
	virtual void setExpandedSystemId($String* systemId);
	virtual void setLineNumber(int32_t line);
	virtual void setLiteralSystemId($String* systemId);
	virtual void setPublicId($String* publicId);
	virtual void setVersion($String* version);
	void setXMLVersion($String* xmlVersion);
	virtual bool skipChar(int32_t c, ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* nt);
	bool skipDeclSpaces();
	virtual bool skipSpaces();
	virtual bool skipString($String* s);
	virtual bool skipString($chars* s);
	void storeWhiteSpace(int32_t whiteSpacePos);
	::com::sun::xml::internal::stream::Entity$ScannedEntity* fCurrentEntity = nullptr;
	int32_t fBufferSize = 0;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* fLimitAnalyzer = nullptr;
	static const bool DEBUG_ENCODINGS = false;
	::java::util::ArrayList* listeners = nullptr;
	static $booleans* VALID_NAMES;
	static const bool DEBUG_BUFFER = false;
	static const bool DEBUG_SKIP_STRING = false;
	static ::java::io::EOFException* END_OF_DOCUMENT_ENTITY;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	$ints* whiteSpaceLookup = nullptr;
	int32_t whiteSpaceLen = 0;
	bool whiteSpaceInfoNeeded = false;
	bool fAllowJavaEncodings = false;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ALLOW_JAVA_ENCODINGS;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	bool isExternal$ = false;
	bool xmlVersionSetExplicitly = false;
	bool detectingVersion = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("DEBUG_BUFFER")
#pragma pop_macro("DEBUG_ENCODINGS")
#pragma pop_macro("DEBUG_SKIP_STRING")
#pragma pop_macro("END_OF_DOCUMENT_ENTITY")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALID_NAMES")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner_h_