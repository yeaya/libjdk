#ifndef _com_sun_org_apache_xml_internal_utils_Trie$Node_h_
#define _com_sun_org_apache_xml_internal_utils_Trie$Node_h_
//$ class com.sun.org.apache.xml.internal.utils.Trie$Node
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class Trie;
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

class $import Trie$Node : public ::java::lang::Object {
	$class(Trie$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trie$Node();
	void init$(::com::sun::org::apache::xml::internal::utils::Trie* this$0);
	::com::sun::org::apache::xml::internal::utils::Trie* this$0 = nullptr;
	$Array<::com::sun::org::apache::xml::internal::utils::Trie$Node>* m_nextChar = nullptr;
	$Object* m_Value = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_Trie$Node_h_