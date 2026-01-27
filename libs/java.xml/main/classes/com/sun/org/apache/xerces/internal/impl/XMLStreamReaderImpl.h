#ifndef _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl
//$ extends javax.xml.stream.XMLStreamReader

#include <java/lang/Array.h>
#include <javax/xml/stream/XMLStreamReader.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("READER_IN_DEFINED_STATE")
#undef READER_IN_DEFINED_STATE
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLDocumentScannerImpl;
							class XMLEntityManager;
							class XMLEntityScanner;
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
							class NamespaceContextWrapper;
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
							namespace parser {
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
		namespace xml {
			namespace internal {
				namespace stream {
					class StaxErrorReporter;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
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

class XMLStreamReaderImpl : public ::javax::xml::stream::XMLStreamReader {
	$class(XMLStreamReaderImpl, 0, ::javax::xml::stream::XMLStreamReader)
public:
	XMLStreamReaderImpl();
	void init$(::java::io::InputStream* inputStream, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$($String* systemid, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::java::io::InputStream* inputStream, $String* encoding, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::java::io::Reader* reader, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	virtual bool canReuse();
	virtual void close() override;
	virtual ::javax::xml::namespace$::QName* convertXNIQNametoJavaxQName(::com::sun::org::apache::xerces::internal::xni::QName* qname);
	virtual int32_t getAttributeCount() override;
	virtual $String* getAttributeLocalName(int32_t index) override;
	virtual ::javax::xml::namespace$::QName* getAttributeName(int32_t index) override;
	virtual $String* getAttributeNamespace(int32_t index) override;
	virtual $String* getAttributePrefix(int32_t index) override;
	virtual ::javax::xml::namespace$::QName* getAttributeQName(int32_t index);
	virtual $String* getAttributeType(int32_t index) override;
	virtual $String* getAttributeValue(int32_t index) override;
	virtual $String* getAttributeValue($String* namespaceURI, $String* localName) override;
	virtual $String* getCharacterEncodingScheme() override;
	virtual int32_t getColumnNumber();
	virtual $String* getElementText() override;
	virtual $String* getEncoding() override;
	virtual ::java::util::List* getEntityDecls();
	virtual int32_t getEventType() override;
	static $String* getEventTypeString(int32_t eventType);
	virtual int32_t getLineNumber();
	virtual $String* getLocalName() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getName() override;
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual int32_t getNamespaceCount() override;
	virtual $String* getNamespacePrefix(int32_t index) override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getNamespaceURI(int32_t index) override;
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual ::java::util::List* getNotationDecls();
	virtual $String* getPIData() override;
	virtual $String* getPITarget() override;
	virtual $String* getPrefix() override;
	virtual $Object* getProperty($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::PropertyManager* getPropertyManager();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* getScanner();
	virtual $String* getText() override;
	virtual $chars* getTextCharacters() override;
	virtual int32_t getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) override;
	virtual int32_t getTextLength() override;
	virtual int32_t getTextStart() override;
	virtual $String* getValue();
	virtual $String* getVersion() override;
	virtual bool hasAttributes();
	virtual bool hasName() override;
	virtual bool hasNext() override;
	virtual bool hasText() override;
	virtual bool hasValue();
	void init(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual bool isAttributeSpecified(int32_t index) override;
	virtual bool isCharacters() override;
	virtual bool isEndElement() override;
	virtual bool isStandalone() override;
	virtual bool isStartElement() override;
	virtual bool isWhiteSpace() override;
	virtual int32_t next() override;
	virtual int32_t nextTag() override;
	static void pr($String* str);
	virtual void require(int32_t type, $String* namespaceURI, $String* localName) override;
	virtual void reset();
	void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource);
	virtual void setPropertyManager(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual bool standaloneSet() override;
	void switchToXML11Scanner();
	static $String* ENTITY_MANAGER;
	static $String* ERROR_REPORTER;
	static $String* SYMBOL_TABLE;
	static $String* READER_IN_DEFINED_STATE;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* fScanner = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper* fNamespaceContextWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::xml::internal::stream::StaxErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* fEntityScanner = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fInputSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	int32_t fEventType = 0;
	static const bool DEBUG = false;
	bool fReuse = false;
	bool fReaderInDefinedState = false;
	$String* fDTDDecl = nullptr;
	$String* versionStr = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("READER_IN_DEFINED_STATE")
#pragma pop_macro("SYMBOL_TABLE")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLStreamReaderImpl_h_