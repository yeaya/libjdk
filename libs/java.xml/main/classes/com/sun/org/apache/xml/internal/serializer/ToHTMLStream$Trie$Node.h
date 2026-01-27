#ifndef _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie$Node_h_
#define _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie$Node_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToHTMLStream$Trie;
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

class ToHTMLStream$Trie$Node : public ::java::lang::Object {
	$class(ToHTMLStream$Trie$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToHTMLStream$Trie$Node();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* this$0);
	::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* this$0 = nullptr;
	$Array<::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie$Node>* m_nextChar = nullptr;
	$Object* m_Value = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToHTMLStream$Trie$Node_h_