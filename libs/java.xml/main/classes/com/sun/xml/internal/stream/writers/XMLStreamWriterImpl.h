#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl_h_
//$ class com.sun.xml.internal.stream.writers.XMLStreamWriterImpl
//$ extends java.util.AbstractMap
//$ implements com.sun.xml.internal.stream.writers.XMLStreamWriterBase

#include <com/sun/xml/internal/stream/writers/XMLStreamWriterBase.h>
#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("CLOSE_EMPTY_ELEMENT")
#undef CLOSE_EMPTY_ELEMENT
#pragma push_macro("CLOSE_END_TAG")
#undef CLOSE_END_TAG
#pragma push_macro("CLOSE_START_TAG")
#undef CLOSE_START_TAG
#pragma push_macro("DEFAULT_ENCODING")
#undef DEFAULT_ENCODING
#pragma push_macro("DEFAULT_PREFIX")
#undef DEFAULT_PREFIX
#pragma push_macro("DEFAULT_XMLDECL")
#undef DEFAULT_XMLDECL
#pragma push_macro("DEFAULT_XML_VERSION")
#undef DEFAULT_XML_VERSION
#pragma push_macro("END_CDATA")
#undef END_CDATA
#pragma push_macro("END_COMMENT")
#undef END_COMMENT
#pragma push_macro("OPEN_END_TAG")
#undef OPEN_END_TAG
#pragma push_macro("OPEN_START_TAG")
#undef OPEN_START_TAG
#pragma push_macro("OUTPUTSTREAM_PROPERTY")
#undef OUTPUTSTREAM_PROPERTY
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("START_CDATA")
#undef START_CDATA
#pragma push_macro("START_COMMENT")
#undef START_COMMENT
#pragma push_macro("UTF_8")
#undef UTF_8

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
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
							class NamespaceSupport;
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
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {
						class ReadOnlyIterator;
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
					namespace writers {
						class XMLStreamWriterImpl$ElementStack;
						class XMLStreamWriterImpl$NamespaceContextImpl;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Random;
		class Set;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {
				class StreamResult;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLStreamWriterImpl : public ::java::util::AbstractMap, public ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase {
	$class(XMLStreamWriterImpl, 0, ::java::util::AbstractMap, ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase)
public:
	XMLStreamWriterImpl();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::io::OutputStream* outputStream, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::java::io::OutputStream* outputStream, $String* encoding, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void init$(::javax::xml::transform::stream::StreamResult* sr, $String* encoding, ::com::sun::org::apache::xerces::internal::impl::PropertyManager* props);
	void addAttrNamespace($String* prefix, $String* uri);
	bool canReuse();
	void checkForNull(::com::sun::org::apache::xerces::internal::xni::QName* attr);
	bool checkUserNamespaceContext($String* prefix, $String* uri);
	virtual void close() override;
	void closeStartTag();
	virtual bool containsKey(Object$* key) override;
	void correctPrefix(::com::sun::org::apache::xerces::internal::xni::QName* attr, int32_t type);
	void correctPrefix(::com::sun::org::apache::xerces::internal::xni::QName* attr1, ::com::sun::org::apache::xerces::internal::xni::QName* attr2);
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* obj) override;
	virtual void flush() override;
	virtual $Object* get(Object$* key) override;
	$String* getAttrPrefix($String* uri);
	bool getEscapeCharacters();
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual $String* getPrefix($String* uri) override;
	virtual $Object* getProperty($String* str) override;
	virtual int32_t hashCode() override;
	void init();
	bool isDeclared(::com::sun::org::apache::xerces::internal::xni::QName* attr);
	bool isDefaultNamespace($String* uri);
	virtual bool isEmpty() override;
	void openStartTag();
	using ::java::util::AbstractMap::remove;
	void removeDuplicateDecls();
	void repair();
	void repairNamespaceDecl(::com::sun::org::apache::xerces::internal::xni::QName* attr);
	void reset();
	void reset(bool resetProperties);
	virtual void setDefaultNamespace($String* uri) override;
	void setEscapeCharacters(bool escape);
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* namespaceContext) override;
	void setOutput(::javax::xml::transform::stream::StreamResult* sr, $String* encoding);
	void setOutputUsingStream(::java::io::OutputStream* os, $String* encoding);
	void setOutputUsingWriter(::java::io::Writer* writer);
	virtual void setPrefix($String* prefix, $String* uri) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	void verifyEncoding($String* encoding);
	virtual void writeAttribute($String* localName, $String* value) override;
	virtual void writeAttribute($String* namespaceURI, $String* localName, $String* value) override;
	virtual void writeAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) override;
	void writeAttributeWithPrefix($String* prefix, $String* localName, $String* value);
	virtual void writeCData($String* cdata) override;
	void writeCharRef(int32_t codePoint);
	virtual void writeCharacters($String* data) override;
	virtual void writeCharacters($chars* data, int32_t start, int32_t len) override;
	virtual void writeComment($String* comment) override;
	virtual void writeDTD($String* dtd) override;
	virtual void writeDefaultNamespace($String* namespaceURI) override;
	virtual void writeEmptyElement($String* localName) override;
	virtual void writeEmptyElement($String* namespaceURI, $String* localName) override;
	virtual void writeEmptyElement($String* prefix, $String* localName, $String* namespaceURI) override;
	virtual void writeEndDocument() override;
	virtual void writeEndElement() override;
	virtual void writeEntityRef($String* refName) override;
	virtual void writeNamespace($String* prefix, $String* namespaceURI) override;
	virtual void writeProcessingInstruction($String* target) override;
	virtual void writeProcessingInstruction($String* target, $String* data) override;
	virtual void writeStartDocument() override;
	virtual void writeStartDocument($String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version, bool standalone, bool standaloneSet) override;
	virtual void writeStartElement($String* localName) override;
	virtual void writeStartElement($String* namespaceURI, $String* localName) override;
	virtual void writeStartElement($String* prefix, $String* localName, $String* namespaceURI) override;
	void writeXMLContent($chars* content, int32_t start, int32_t length, bool escapeChars);
	void writeXMLContent($String* content);
	void writeXMLContent($String* content, bool escapeChars, bool escapeDoubleQuotes);
	void writenamespace($String* prefix, $String* namespaceURI);
	static $String* START_COMMENT;
	static $String* END_COMMENT;
	static $String* DEFAULT_ENCODING;
	static $String* DEFAULT_XMLDECL;
	static $String* DEFAULT_XML_VERSION;
	static const char16_t CLOSE_START_TAG = ((char16_t)62);
	static const char16_t OPEN_START_TAG = ((char16_t)60);
	static $String* OPEN_END_TAG;
	static const char16_t CLOSE_END_TAG = ((char16_t)62);
	static $String* START_CDATA;
	static $String* END_CDATA;
	static $String* CLOSE_EMPTY_ELEMENT;
	static $String* SPACE;
	static $String* UTF_8;
	static $String* OUTPUTSTREAM_PROPERTY;
	bool fEscapeCharacters = false;
	bool fIsRepairingNamespace = false;
	::java::io::Writer* fWriter = nullptr;
	::java::io::OutputStream* fOutputStream = nullptr;
	::java::util::List* fAttributeCache = nullptr;
	::java::util::List* fNamespaceDecls = nullptr;
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$NamespaceContextImpl* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fInternalNamespaceContext = nullptr;
	::java::util::Random* fPrefixGen = nullptr;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	bool fStartTagOpened = false;
	bool fReuse = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementStack* fElementStack = nullptr;
	$String* DEFAULT_PREFIX = nullptr;
	::com::sun::xml::internal::stream::util::ReadOnlyIterator* fReadOnlyIterator = nullptr;
	::java::nio::charset::CharsetEncoder* fEncoder = nullptr;
	::java::util::Map* fAttrNamespace = nullptr;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("CLOSE_EMPTY_ELEMENT")
#pragma pop_macro("CLOSE_END_TAG")
#pragma pop_macro("CLOSE_START_TAG")
#pragma pop_macro("DEFAULT_ENCODING")
#pragma pop_macro("DEFAULT_PREFIX")
#pragma pop_macro("DEFAULT_XMLDECL")
#pragma pop_macro("DEFAULT_XML_VERSION")
#pragma pop_macro("END_CDATA")
#pragma pop_macro("END_COMMENT")
#pragma pop_macro("OPEN_END_TAG")
#pragma pop_macro("OPEN_START_TAG")
#pragma pop_macro("OUTPUTSTREAM_PROPERTY")
#pragma pop_macro("SPACE")
#pragma pop_macro("START_CDATA")
#pragma pop_macro("START_COMMENT")
#pragma pop_macro("UTF_8")

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl_h_