#ifndef _com_sun_org_apache_xerces_internal_util_SymbolHash_h_
#define _com_sun_org_apache_xerces_internal_util_SymbolHash_h_
//$ class com.sun.org.apache.xerces.internal.util.SymbolHash
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_HASH_COLLISIONS")
#undef MAX_HASH_COLLISIONS
#pragma push_macro("MULTIPLIERS_MASK")
#undef MULTIPLIERS_MASK
#pragma push_macro("MULTIPLIERS_SIZE")
#undef MULTIPLIERS_SIZE
#pragma push_macro("TABLE_SIZE")
#undef TABLE_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolHash$Entry;
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
				namespace xerces {
					namespace internal {
						namespace util {

class SymbolHash : public ::java::lang::Object {
	$class(SymbolHash, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolHash();
	void init$();
	void init$(int32_t size);
	virtual void clear();
	virtual $Object* get(Object$* key);
	virtual $ObjectArray* getEntries();
	virtual int32_t getLength();
	virtual int32_t getValues($ObjectArray* elements, int32_t from);
	virtual int32_t hash(Object$* key);
	int32_t hash0($String* symbol);
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolHash* makeClone();
	virtual void put(Object$* key, Object$* value);
	virtual void rebalance();
	virtual void rehash();
	void rehashCommon(int32_t newCapacity);
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry* search(Object$* key, int32_t bucket);
	static const int32_t TABLE_SIZE = 101;
	static const int32_t MAX_HASH_COLLISIONS = 40;
	static const int32_t MULTIPLIERS_SIZE = 32; // 1 << 5
	static const int32_t MULTIPLIERS_MASK = 31; // MULTIPLIERS_SIZE - 1
	int32_t fTableSize = 0;
	$Array<::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry>* fBuckets = nullptr;
	int32_t fNum = 0;
	$ints* fHashMultipliers = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MAX_HASH_COLLISIONS")
#pragma pop_macro("MULTIPLIERS_MASK")
#pragma pop_macro("MULTIPLIERS_SIZE")
#pragma pop_macro("TABLE_SIZE")

#endif // _com_sun_org_apache_xerces_internal_util_SymbolHash_h_