#ifndef _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray$ChunksVector_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray$ChunksVector_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray$ChunksVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCKSIZE")
#undef BLOCKSIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class ChunkedIntArray;
							}
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
						namespace dtm {
							namespace ref {

class ChunkedIntArray$ChunksVector : public ::java::lang::Object {
	$class(ChunkedIntArray$ChunksVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ChunkedIntArray$ChunksVector();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray* this$0);
	virtual void addElement($ints* value);
	$ints* elementAt(int32_t pos);
	int32_t size();
	::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray* this$0 = nullptr;
	static const int32_t BLOCKSIZE = 64;
	$Array<int32_t, 2>* m_map = nullptr;
	int32_t m_mapSize = 0;
	int32_t pos = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BLOCKSIZE")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray$ChunksVector_h_