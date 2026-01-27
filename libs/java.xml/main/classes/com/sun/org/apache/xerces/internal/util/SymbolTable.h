#ifndef _com_sun_org_apache_xerces_internal_util_SymbolTable_h_
#define _com_sun_org_apache_xerces_internal_util_SymbolTable_h_
//$ class com.sun.org.apache.xerces.internal.util.SymbolTable
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
							class SymbolTable$Entry;
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

class SymbolTable : public ::java::lang::Object {
	$class(SymbolTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolTable();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	virtual $String* addSymbol($String* symbol);
	virtual $String* addSymbol($chars* buffer, int32_t offset, int32_t length);
	$String* addSymbol0($String* symbol, int32_t bucket, int32_t collisionCount);
	$String* addSymbol0($chars* buffer, int32_t offset, int32_t length, int32_t bucket, int32_t collisionCount);
	virtual bool containsSymbol($String* symbol);
	virtual bool containsSymbol($chars* buffer, int32_t offset, int32_t length);
	virtual int32_t hash($String* symbol);
	virtual int32_t hash($chars* buffer, int32_t offset, int32_t length);
	int32_t hash0($String* symbol);
	int32_t hash0($chars* buffer, int32_t offset, int32_t length);
	virtual void rebalance();
	virtual void rehash();
	void rehashCommon(int32_t newCapacity);
	static const int32_t TABLE_SIZE = 101;
	static const int32_t MAX_HASH_COLLISIONS = 40;
	static const int32_t MULTIPLIERS_SIZE = 32; // 1 << 5
	static const int32_t MULTIPLIERS_MASK = 31; // MULTIPLIERS_SIZE - 1
	$Array<::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry>* fBuckets = nullptr;
	int32_t fTableSize = 0;
	int32_t fCount = 0;
	int32_t fThreshold = 0;
	float fLoadFactor = 0.0;
	int32_t fCollisionThreshold = 0;
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

#endif // _com_sun_org_apache_xerces_internal_util_SymbolTable_h_