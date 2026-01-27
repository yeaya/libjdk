#ifndef _com_sun_org_apache_xml_internal_utils_FastStringBuffer_h_
#define _com_sun_org_apache_xml_internal_utils_FastStringBuffer_h_
//$ class com.sun.org.apache.xml.internal.utils.FastStringBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CARRY_WS")
#undef CARRY_WS
#pragma push_macro("DEBUG_FORCE_FIXED_CHUNKSIZE")
#undef DEBUG_FORCE_FIXED_CHUNKSIZE
#pragma push_macro("DEBUG_FORCE_INIT_BITS")
#undef DEBUG_FORCE_INIT_BITS
#pragma push_macro("SINGLE_SPACE")
#undef SINGLE_SPACE
#pragma push_macro("SUPPRESS_BOTH")
#undef SUPPRESS_BOTH
#pragma push_macro("SUPPRESS_LEADING_WS")
#undef SUPPRESS_LEADING_WS
#pragma push_macro("SUPPRESS_TRAILING_WS")
#undef SUPPRESS_TRAILING_WS

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export FastStringBuffer : public ::java::lang::Object {
	$class(FastStringBuffer, 0, ::java::lang::Object)
public:
	FastStringBuffer();
	void init$(int32_t initChunkBits, int32_t maxChunkBits, int32_t rebundleBits);
	void init$(int32_t initChunkBits, int32_t maxChunkBits);
	void init$(int32_t initChunkBits);
	void init$();
	void init$(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* source);
	void append(char16_t value);
	void append($String* value);
	void append(::java::lang::StringBuffer* value);
	void append($chars* chars, int32_t start, int32_t length);
	void append(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* value);
	virtual char16_t charAt(int32_t pos);
	void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin);
	virtual $String* getOneChunkString(int32_t startChunk, int32_t startColumn, int32_t length);
	virtual $String* getString(int32_t start, int32_t length);
	virtual ::java::lang::StringBuffer* getString(::java::lang::StringBuffer* sb, int32_t start, int32_t length);
	virtual ::java::lang::StringBuffer* getString(::java::lang::StringBuffer* sb, int32_t startChunk, int32_t startColumn, int32_t length);
	virtual bool isWhitespace(int32_t start, int32_t length);
	int32_t length();
	void reset();
	virtual int32_t sendNormalizedSAXcharacters(::org::xml::sax::ContentHandler* ch, int32_t start, int32_t length);
	static int32_t sendNormalizedSAXcharacters($chars* ch, int32_t start, int32_t length, ::org::xml::sax::ContentHandler* handler, int32_t edgeTreatmentFlags);
	static void sendNormalizedSAXcharacters($chars* ch, int32_t start, int32_t length, ::org::xml::sax::ContentHandler* handler);
	virtual void sendSAXComment(::org::xml::sax::ext::LexicalHandler* ch, int32_t start, int32_t length);
	virtual void sendSAXcharacters(::org::xml::sax::ContentHandler* ch, int32_t start, int32_t length);
	void setLength(int32_t l);
	void setLength(int32_t l, ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* rootFSB);
	int32_t size();
	virtual $String* toString() override;
	static const int32_t DEBUG_FORCE_INIT_BITS = 0;
	static const bool DEBUG_FORCE_FIXED_CHUNKSIZE = true;
	static const int32_t SUPPRESS_LEADING_WS = 1;
	static const int32_t SUPPRESS_TRAILING_WS = 2;
	static const int32_t SUPPRESS_BOTH = 3; // SUPPRESS_LEADING_WS | SUPPRESS_TRAILING_WS
	static const int32_t CARRY_WS = 4;
	int32_t m_chunkBits = 0;
	int32_t m_maxChunkBits = 0;
	int32_t m_rebundleBits = 0;
	int32_t m_chunkSize = 0;
	int32_t m_chunkMask = 0;
	$Array<char16_t, 2>* m_array = nullptr;
	int32_t m_lastChunk = 0;
	int32_t m_firstFree = 0;
	::com::sun::org::apache::xml::internal::utils::FastStringBuffer* m_innerFSB = nullptr;
	static $chars* SINGLE_SPACE;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CARRY_WS")
#pragma pop_macro("DEBUG_FORCE_FIXED_CHUNKSIZE")
#pragma pop_macro("DEBUG_FORCE_INIT_BITS")
#pragma pop_macro("SINGLE_SPACE")
#pragma pop_macro("SUPPRESS_BOTH")
#pragma pop_macro("SUPPRESS_LEADING_WS")
#pragma pop_macro("SUPPRESS_TRAILING_WS")

#endif // _com_sun_org_apache_xml_internal_utils_FastStringBuffer_h_