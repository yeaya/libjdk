#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMStringPool_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMStringPool_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HASHPRIME")
#undef HASHPRIME
#pragma push_macro("NULL")
#undef NULL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class IntVector;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMStringPool : public ::java::lang::Object {
	$class(DTMStringPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTMStringPool();
	void init$(int32_t chainSize);
	void init$();
	static void _main($StringArray* args);
	virtual $String* indexToString(int32_t i);
	virtual void removeAllElements();
	virtual int32_t stringToIndex($String* s);
	::java::util::List* m_intToString = nullptr;
	static const int32_t HASHPRIME = 101;
	$ints* m_hashStart = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntVector* m_hashChain = nullptr;
	static const int32_t NULL = (-1);
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("HASHPRIME")
#pragma pop_macro("NULL")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMStringPool_h_