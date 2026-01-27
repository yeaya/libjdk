#ifndef _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class ChunkedIntArray$ChunksVector;
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

class ChunkedIntArray : public ::java::lang::Object {
	$class(ChunkedIntArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ChunkedIntArray();
	void init$(int32_t slotsize);
	int32_t appendSlot(int32_t w0, int32_t w1, int32_t w2, int32_t w3);
	void discardLast();
	int32_t readEntry(int32_t position, int32_t offset);
	void readSlot(int32_t position, $ints* buffer);
	int32_t slotsUsed();
	int32_t specialFind(int32_t startPos, int32_t position);
	void writeEntry(int32_t position, int32_t offset, int32_t value);
	void writeSlot(int32_t position, int32_t w0, int32_t w1, int32_t w2, int32_t w3);
	static const int32_t slotsize = 4;
	static const int32_t lowbits = 10;
	static const int32_t chunkalloc = 1024; // 1 << lowbits
	static const int32_t lowmask = 1023; // chunkalloc - 1
	::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray$ChunksVector* chunks = nullptr;
	$ints* fastArray = nullptr;
	int32_t lastUsed = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_ChunkedIntArray_h_