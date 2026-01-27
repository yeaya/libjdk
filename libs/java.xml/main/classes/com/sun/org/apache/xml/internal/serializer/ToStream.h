#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream
//$ extends com.sun.org.apache.xml.internal.serializer.SerializerBase

#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <java/lang/Array.h>

#pragma push_macro("COMMENT_BEGIN")
#undef COMMENT_BEGIN
#pragma push_macro("COMMENT_END")
#undef COMMENT_END

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class CharInfo;
							class EncodingInfo;
							class ToStream$BoolStack;
							class ToStream$CharacterBuffer;
						}
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
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Transformer;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ToStream : public ::com::sun::org::apache::xml::internal::serializer::SerializerBase {
	$class(ToStream, 0, ::com::sun::org::apache::xml::internal::serializer::SerializerBase)
public:
	ToStream();
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::comment;
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::characters;
	void init$();
	void init$(::javax::xml::transform::ErrorListener* l);
	void DTDprolog();
	virtual int32_t accumDefaultEntity(::java::io::Writer* writer, char16_t ch, int32_t i, $chars* chars, int32_t len, bool fromTextNode, bool escLF);
	virtual int32_t accumDefaultEscape(::java::io::Writer* writer, char16_t ch, int32_t i, $chars* chars, int32_t len, bool fromTextNode, bool escLF);
	virtual bool addAttributeAlways($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool xslAttribute) override;
	void addCdataSectionElement($String* URI_and_localName, ::java::util::List* al);
	virtual void addCdataSectionElements($String* URI_and_localNames);
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual void cdata($chars* ch, int32_t start, int32_t length);
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void characters($String* s) override;
	virtual void charactersRaw($chars* ch, int32_t start, int32_t length);
	virtual void closeCDATA();
	virtual void closeStartTag();
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	bool doAddAttributeAlways($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool xslAttribute);
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* name) override;
	virtual void endElement($String* name) override;
	virtual void endNonEscaping();
	virtual void endPrefixMapping($String* prefix) override;
	virtual $String* ensureAttributesNamespaceIsDeclared($String* ns, $String* localName, $String* rawName);
	virtual void ensurePrefixIsDeclared($String* ns, $String* rawName);
	virtual bool escapingNotNeeded(char16_t ch);
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void firePseudoAttributes();
	void flushCharactersBuffer(bool isText);
	virtual void flushPending() override;
	void flushWriter();
	virtual bool getIndent() override;
	virtual int32_t getIndentAmount() override;
	virtual ::java::util::Properties* getOutputFormat() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::io::Writer* getWriter() override;
	int32_t handleEscaping(::java::io::Writer* writer, char16_t c, $chars* ch, int32_t i, int32_t end);
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void indent(int32_t depth);
	virtual void indent();
	virtual void internalEntityDecl($String* name, $String* value) override;
	static bool isCharacterInC0orC1Range(char16_t ch);
	bool isEscapingDisabled();
	static bool isNELorLSEPCharacter(char16_t ch);
	static bool isUTF16Surrogate(char16_t c);
	virtual void notationDecl($String* name, $String* pubID, $String* sysID) override;
	void outputCharacters($chars* chars, int32_t start, int32_t length);
	virtual void outputDocTypeDecl($String* name, bool closeDecl);
	virtual void outputEntityDecl($String* name, $String* value);
	void outputEntityReference($String* name);
	void outputLineSep();
	void printSpace(int32_t n);
	virtual void processAttributes(::java::io::Writer* writer, int32_t nAttrs);
	int32_t processDirty($chars* chars, int32_t end, int32_t i, char16_t ch, int32_t lastDirty, bool fromTextNode);
	virtual bool reset() override;
	void resetToStream();
	virtual void serialize(::org::w3c::dom::Node* node) override;
	void setCdataSectionElements($String* key, ::java::util::Properties* props);
	virtual void setCdataSectionElements(::java::util::List* URI_and_localNames) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* ch) override;
	virtual void setDTDEntityExpansion(bool expand) override;
	virtual void setEncoding($String* encoding) override;
	virtual bool setEscaping(bool escape) override;
	virtual void setIndentAmount(int32_t m_indentAmount) override;
	virtual bool setLineSepUse(bool use_sytem_line_break);
	virtual void setOutputFormat(::java::util::Properties* format) override;
	virtual void setOutputStream(::java::io::OutputStream* output) override;
	void setOutputStreamInternal(::java::io::OutputStream* output, bool setByUser);
	virtual void setProp($String* name, $String* val, bool defaultVal) override;
	virtual void setTransformer(::javax::xml::transform::Transformer* transformer) override;
	virtual void setWriter(::java::io::Writer* writer) override;
	void setWriterInternal(::java::io::Writer* writer, bool setByUser);
	virtual bool shouldFormatOutput();
	virtual bool shouldIndent();
	virtual bool shouldIndentForText();
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* name, ::org::xml::sax::Attributes* atts) override;
	virtual void startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) override;
	virtual void startElement($String* elementName) override;
	virtual void startEntity($String* name) override;
	virtual void startNonEscaping();
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) override;
	void throwIOE(char16_t ch, char16_t next);
	virtual void unparsedEntityDecl($String* name, $String* pubID, $String* sysID, $String* notationName) override;
	virtual void writeAttrString(::java::io::Writer* writer, $String* string, $String* encoding);
	void writeCharRef(::java::io::Writer* writer, char16_t c);
	int32_t writeCharRef(::java::io::Writer* writer, char16_t high, char16_t low);
	virtual void writeNormalizedChars($chars* ch, int32_t start, int32_t length, bool isCData, bool useSystemLineSeparator);
	virtual int32_t writeUTF16Surrogate(char16_t c, $chars* ch, int32_t i, int32_t end);
	static $String* COMMENT_BEGIN;
	static $String* COMMENT_END;
	::com::sun::org::apache::xml::internal::serializer::ToStream$BoolStack* m_disableOutputEscapingStates = nullptr;
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo* m_encodingInfo = nullptr;
	::java::lang::reflect::Method* m_canConvertMeth = nullptr;
	bool m_triedToGetConverter = false;
	$Object* m_charToByteConverter = nullptr;
	::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* m_charactersBuffer = nullptr;
	::java::util::List* m_childNodeNumStack = nullptr;
	int32_t m_childNodeNum = 0;
	::com::sun::org::apache::xml::internal::serializer::ToStream$BoolStack* m_preserveSpaces = nullptr;
	bool m_ispreserveSpace = false;
	bool m_isprevtext = false;
	int32_t m_maxCharacter = 0;
	$chars* m_lineSep = nullptr;
	bool m_lineSepUse = false;
	int32_t m_lineSepLen = 0;
	::com::sun::org::apache::xml::internal::serializer::CharInfo* m_charInfo = nullptr;
	bool m_shouldFlush = false;
	bool m_spaceBeforeClose = false;
	bool m_startNewLine = false;
	bool m_inDoctype = false;
	bool m_isUTF8 = false;
	bool m_cdataStartCalled = false;
	bool m_expandDTDEntities = false;
	char16_t m_highSurrogate = 0;
	bool m_escaping = false;
	::java::io::OutputStream* m_outputStream = nullptr;
	bool m_writer_set_by_user = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("COMMENT_BEGIN")
#pragma pop_macro("COMMENT_END")

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream_h_