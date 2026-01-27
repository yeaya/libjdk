#ifndef _com_sun_org_apache_xml_internal_utils_ElemDesc_h_
#define _com_sun_org_apache_xml_internal_utils_ElemDesc_h_
//$ class com.sun.org.apache.xml.internal.utils.ElemDesc
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ASPECIAL")
#undef ASPECIAL
#pragma push_macro("ATTREMPTY")
#undef ATTREMPTY
#pragma push_macro("ATTRURL")
#undef ATTRURL
#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("BLOCKFORM")
#undef BLOCKFORM
#pragma push_macro("BLOCKFORMFIELDSET")
#undef BLOCKFORMFIELDSET
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("FLOW")
#undef FLOW
#pragma push_macro("FONTSTYLE")
#undef FONTSTYLE
#pragma push_macro("FORMCTRL")
#undef FORMCTRL
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("HEADMISC")
#undef HEADMISC
#pragma push_macro("INLINE")
#undef INLINE
#pragma push_macro("INLINEA")
#undef INLINEA
#pragma push_macro("INLINELABEL")
#undef INLINELABEL
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("PCDATA")
#undef PCDATA
#pragma push_macro("PHRASE")
#undef PHRASE
#pragma push_macro("PREFORMATTED")
#undef PREFORMATTED
#pragma push_macro("RAW")
#undef RAW
#pragma push_macro("SPECIAL")
#undef SPECIAL
#pragma push_macro("WHITESPACESENSITIVE")
#undef WHITESPACESENSITIVE

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class ElemDesc : public ::java::lang::Object {
	$class(ElemDesc, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElemDesc();
	void init$(int32_t flags);
	virtual bool is(int32_t flags);
	virtual bool isAttrFlagSet($String* name, int32_t flags);
	virtual void setAttr($String* name, int32_t flags);
	::java::util::Map* m_attrs = nullptr;
	int32_t m_flags = 0;
	static const int32_t EMPTY = 2; // (1 << 1)
	static const int32_t FLOW = 4; // (1 << 2)
	static const int32_t BLOCK = 8; // (1 << 3)
	static const int32_t BLOCKFORM = 16; // (1 << 4)
	static const int32_t BLOCKFORMFIELDSET = 32; // (1 << 5)
	static const int32_t CDATA = 64; // (1 << 6)
	static const int32_t PCDATA = 128; // (1 << 7)
	static const int32_t RAW = 256; // (1 << 8)
	static const int32_t INLINE = 512; // (1 << 9)
	static const int32_t INLINEA = 1024; // (1 << 10)
	static const int32_t INLINELABEL = 2048; // (1 << 11)
	static const int32_t FONTSTYLE = 4096; // (1 << 12)
	static const int32_t PHRASE = 8192; // (1 << 13)
	static const int32_t FORMCTRL = 16384; // (1 << 14)
	static const int32_t SPECIAL = 32768; // (1 << 15)
	static const int32_t ASPECIAL = 65536; // (1 << 16)
	static const int32_t HEADMISC = 131072; // (1 << 17)
	static const int32_t HEAD = 262144; // (1 << 18)
	static const int32_t LIST = 524288; // (1 << 19)
	static const int32_t PREFORMATTED = 1048576; // (1 << 20)
	static const int32_t WHITESPACESENSITIVE = 2097152; // (1 << 21)
	static const int32_t ATTRURL = 2; // (1 << 1)
	static const int32_t ATTREMPTY = 4; // (1 << 2)
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ASPECIAL")
#pragma pop_macro("ATTREMPTY")
#pragma pop_macro("ATTRURL")
#pragma pop_macro("BLOCK")
#pragma pop_macro("BLOCKFORM")
#pragma pop_macro("BLOCKFORMFIELDSET")
#pragma pop_macro("CDATA")
#pragma pop_macro("EMPTY")
#pragma pop_macro("FLOW")
#pragma pop_macro("FONTSTYLE")
#pragma pop_macro("FORMCTRL")
#pragma pop_macro("HEAD")
#pragma pop_macro("HEADMISC")
#pragma pop_macro("INLINE")
#pragma pop_macro("INLINEA")
#pragma pop_macro("INLINELABEL")
#pragma pop_macro("LIST")
#pragma pop_macro("PCDATA")
#pragma pop_macro("PHRASE")
#pragma pop_macro("PREFORMATTED")
#pragma pop_macro("RAW")
#pragma pop_macro("SPECIAL")
#pragma pop_macro("WHITESPACESENSITIVE")

#endif // _com_sun_org_apache_xml_internal_utils_ElemDesc_h_