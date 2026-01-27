#ifndef _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie_h_
#define _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALPHA_SIZE")
#undef ALPHA_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToHTMLStream$Trie$Node;
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
				namespace xml {
					namespace internal {
						namespace serializer {

class ToHTMLStream$Trie : public ::java::lang::Object {
	$class(ToHTMLStream$Trie, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToHTMLStream$Trie();
	void init$();
	void init$(bool lowerCaseOnly);
	void init$(::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* existingTrie);
	virtual $Object* get($String* key);
	virtual $Object* get2($String* key);
	virtual int32_t getLongestKeyLength();
	virtual $Object* put($String* key, Object$* value);
	static const int32_t ALPHA_SIZE = 128;
	::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie$Node* m_Root = nullptr;
	$chars* m_charBuffer = nullptr;
	bool m_lowerCaseOnly = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALPHA_SIZE")

#endif // _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie_h_