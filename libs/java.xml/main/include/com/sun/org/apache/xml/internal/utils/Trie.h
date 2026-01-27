#ifndef _com_sun_org_apache_xml_internal_utils_Trie_h_
#define _com_sun_org_apache_xml_internal_utils_Trie_h_
//$ class com.sun.org.apache.xml.internal.utils.Trie
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
						namespace utils {
							class Trie$Node;
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
						namespace utils {

class $import Trie : public ::java::lang::Object {
	$class(Trie, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trie();
	void init$();
	virtual $Object* get($String* key);
	virtual $Object* put($String* key, Object$* value);
	static const int32_t ALPHA_SIZE = 128;
	::com::sun::org::apache::xml::internal::utils::Trie$Node* m_Root = nullptr;
	$chars* m_charBuffer = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALPHA_SIZE")

#endif // _com_sun_org_apache_xml_internal_utils_Trie_h_