#ifndef _com_sun_xml_internal_stream_writers_WriterUtility_h_
#define _com_sun_xml_internal_stream_writers_WriterUtility_h_
//$ class com.sun.xml.internal.stream.writers.WriterUtility
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLOSE_EMPTY_ELEMENT")
#undef CLOSE_EMPTY_ELEMENT
#pragma push_macro("CLOSE_END_TAG")
#undef CLOSE_END_TAG
#pragma push_macro("CLOSE_START_TAG")
#undef CLOSE_START_TAG
#pragma push_macro("DEBUG_XML_CONTENT")
#undef DEBUG_XML_CONTENT
#pragma push_macro("DEFAULT_ENCODING")
#undef DEFAULT_ENCODING
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
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("START_CDATA")
#undef START_CDATA
#pragma push_macro("START_COMMENT")
#undef START_COMMENT
#pragma push_macro("UTF_8")
#undef UTF_8

namespace java {
	namespace io {
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

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class WriterUtility : public ::java::lang::Object {
	$class(WriterUtility, 0, ::java::lang::Object)
public:
	WriterUtility();
	void init$();
	void init$(::java::io::Writer* writer);
	::java::nio::charset::CharsetEncoder* getDefaultEncoder();
	virtual bool getEscapeCharacters();
	virtual void setEscapeCharacters(bool escape);
	virtual void setWriter(::java::io::Writer* writer);
	virtual void writeXMLAttributeValue($String* value);
	virtual void writeXMLContent($chars* content, int32_t start, int32_t length);
	void writeXMLContent($chars* content, int32_t start, int32_t length, bool escapeCharacter);
	virtual void writeXMLContent($String* content);
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
	static const bool DEBUG_XML_CONTENT = false;
	bool fEscapeCharacters = false;
	::java::io::Writer* fWriter = nullptr;
	::java::nio::charset::CharsetEncoder* fEncoder = nullptr;
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
#pragma pop_macro("DEBUG_XML_CONTENT")
#pragma pop_macro("DEFAULT_ENCODING")
#pragma pop_macro("DEFAULT_XMLDECL")
#pragma pop_macro("DEFAULT_XML_VERSION")
#pragma pop_macro("END_CDATA")
#pragma pop_macro("END_COMMENT")
#pragma pop_macro("OPEN_END_TAG")
#pragma pop_macro("OPEN_START_TAG")
#pragma pop_macro("SPACE")
#pragma pop_macro("START_CDATA")
#pragma pop_macro("START_COMMENT")
#pragma pop_macro("UTF_8")

#endif // _com_sun_xml_internal_stream_writers_WriterUtility_h_