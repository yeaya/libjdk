#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>

#include <com/sun/org/apache/xerces/internal/util/PrimeNumberSequenceGenerator.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash$Entry.h>
#include <jcpp.h>

#undef MAX_HASH_COLLISIONS
#undef MULTIPLIERS_MASK
#undef MULTIPLIERS_SIZE
#undef TABLE_SIZE

using $SymbolHash$EntryArray = $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry>;
using $PrimeNumberSequenceGenerator = ::com::sun::org::apache::xerces::internal::util::PrimeNumberSequenceGenerator;
using $SymbolHash$Entry = ::com::sun::org::apache::xerces::internal::util::SymbolHash$Entry;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SymbolHash_FieldInfo_[] = {
	{"TABLE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolHash, TABLE_SIZE)},
	{"MAX_HASH_COLLISIONS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolHash, MAX_HASH_COLLISIONS)},
	{"MULTIPLIERS_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolHash, MULTIPLIERS_SIZE)},
	{"MULTIPLIERS_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolHash, MULTIPLIERS_MASK)},
	{"fTableSize", "I", nullptr, $PROTECTED, $field(SymbolHash, fTableSize)},
	{"fBuckets", "[Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PROTECTED, $field(SymbolHash, fBuckets)},
	{"fNum", "I", nullptr, $PROTECTED, $field(SymbolHash, fNum)},
	{"fHashMultipliers", "[I", nullptr, $PROTECTED, $field(SymbolHash, fHashMultipliers)},
	{}
};

$MethodInfo _SymbolHash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SymbolHash, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SymbolHash, init$, void, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(SymbolHash, clear, void)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SymbolHash, get, $Object*, Object$*)},
	{"getEntries", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SymbolHash, getEntries, $ObjectArray*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(SymbolHash, getLength, int32_t)},
	{"getValues", "([Ljava/lang/Object;I)I", nullptr, $PUBLIC, $virtualMethod(SymbolHash, getValues, int32_t, $ObjectArray*, int32_t)},
	{"hash", "(Ljava/lang/Object;)I", nullptr, $PROTECTED, $virtualMethod(SymbolHash, hash, int32_t, Object$*)},
	{"hash0", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(SymbolHash, hash0, int32_t, $String*)},
	{"makeClone", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC, $virtualMethod(SymbolHash, makeClone, SymbolHash*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SymbolHash, put, void, Object$*, Object$*)},
	{"rebalance", "()V", nullptr, $PROTECTED, $virtualMethod(SymbolHash, rebalance, void)},
	{"rehash", "()V", nullptr, $PROTECTED, $virtualMethod(SymbolHash, rehash, void)},
	{"rehashCommon", "(I)V", nullptr, $PRIVATE, $method(SymbolHash, rehashCommon, void, int32_t)},
	{"search", "(Ljava/lang/Object;I)Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PROTECTED, $virtualMethod(SymbolHash, search, $SymbolHash$Entry*, Object$*, int32_t)},
	{}
};

$InnerClassInfo _SymbolHash_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry", "com.sun.org.apache.xerces.internal.util.SymbolHash", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _SymbolHash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SymbolHash",
	"java.lang.Object",
	nullptr,
	_SymbolHash_FieldInfo_,
	_SymbolHash_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry"
};

$Object* allocate$SymbolHash($Class* clazz) {
	return $of($alloc(SymbolHash));
}

void SymbolHash::init$() {
	SymbolHash::init$(SymbolHash::TABLE_SIZE);
}

void SymbolHash::init$(int32_t size) {
	this->fNum = 0;
	this->fTableSize = size;
	$set(this, fBuckets, $new($SymbolHash$EntryArray, this->fTableSize));
}

void SymbolHash::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	int32_t collisionCount = 0;
	int32_t hash = this->hash(key);
	int32_t bucket = $mod(hash, this->fTableSize);
	{
		$var($SymbolHash$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if ($nc($of(key))->equals(entry->key)) {
				$set(entry, value, value);
				return;
			}
			++collisionCount;
		}
	}
	if (this->fNum >= this->fTableSize) {
		rehash();
		bucket = $mod(hash, this->fTableSize);
	} else if (collisionCount >= SymbolHash::MAX_HASH_COLLISIONS && $instanceOf($String, key)) {
		rebalance();
		bucket = $mod(this->hash(key), this->fTableSize);
	}
	$var($SymbolHash$Entry, entry, $new($SymbolHash$Entry, key, value, $nc(this->fBuckets)->get(bucket)));
	$nc(this->fBuckets)->set(bucket, entry);
	++this->fNum;
}

$Object* SymbolHash::get(Object$* key) {
	int32_t bucket = $mod(hash(key), this->fTableSize);
	$var($SymbolHash$Entry, entry, search(key, bucket));
	if (entry != nullptr) {
		return $of(entry->value);
	}
	return $of(nullptr);
}

int32_t SymbolHash::getLength() {
	return this->fNum;
}

int32_t SymbolHash::getValues($ObjectArray* elements, int32_t from) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < this->fTableSize && j < this->fNum; ++i) {
			{
				$var($SymbolHash$Entry, entry, $nc(this->fBuckets)->get(i));
				for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
					$nc(elements)->set(from + j, entry->value);
					++j;
				}
			}
		}
	}
	return this->fNum;
}

$ObjectArray* SymbolHash::getEntries() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, entries, $new($ObjectArray, this->fNum << 1));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < this->fTableSize && j < this->fNum << 1; ++i) {
			{
				$var($SymbolHash$Entry, entry, $nc(this->fBuckets)->get(i));
				for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
					entries->set(j, entry->key);
					entries->set(++j, entry->value);
					++j;
				}
			}
		}
	}
	return entries;
}

SymbolHash* SymbolHash::makeClone() {
	$useLocalCurrentObjectStackCache();
	$var(SymbolHash, newTable, $new(SymbolHash, this->fTableSize));
	newTable->fNum = this->fNum;
	$set(newTable, fHashMultipliers, this->fHashMultipliers != nullptr ? $cast($ints, $nc(this->fHashMultipliers)->clone()) : ($ints*)nullptr);
	for (int32_t i = 0; i < this->fTableSize; ++i) {
		if ($nc(this->fBuckets)->get(i) != nullptr) {
			$nc(newTable->fBuckets)->set(i, $($nc($nc(this->fBuckets)->get(i))->makeClone()));
		}
	}
	return newTable;
}

void SymbolHash::clear() {
	for (int32_t i = 0; i < this->fTableSize; ++i) {
		$nc(this->fBuckets)->set(i, nullptr);
	}
	this->fNum = 0;
	$set(this, fHashMultipliers, nullptr);
}

$SymbolHash$Entry* SymbolHash::search(Object$* key, int32_t bucket) {
	{
		$var($SymbolHash$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if ($nc($of(key))->equals(entry->key)) {
				return entry;
			}
		}
	}
	return nullptr;
}

int32_t SymbolHash::hash(Object$* key) {
	if (this->fHashMultipliers == nullptr || !($instanceOf($String, key))) {
		return (int32_t)($nc($of(key))->hashCode() & (uint32_t)0x7FFFFFFF);
	}
	return hash0($cast($String, key));
}

int32_t SymbolHash::hash0($String* symbol) {
	int32_t code = 0;
	int32_t length = $nc(symbol)->length();
	$var($ints, multipliers, this->fHashMultipliers);
	for (int32_t i = 0; i < length; ++i) {
		code = code * $nc(multipliers)->get((int32_t)(i & (uint32_t)SymbolHash::MULTIPLIERS_MASK)) + symbol->charAt(i);
	}
	return (int32_t)(code & (uint32_t)0x7FFFFFFF);
}

void SymbolHash::rehash() {
	rehashCommon(($nc(this->fBuckets)->length << 1) + 1);
}

void SymbolHash::rebalance() {
	if (this->fHashMultipliers == nullptr) {
		$set(this, fHashMultipliers, $new($ints, SymbolHash::MULTIPLIERS_SIZE));
	}
	$PrimeNumberSequenceGenerator::generateSequence(this->fHashMultipliers);
	rehashCommon($nc(this->fBuckets)->length);
}

void SymbolHash::rehashCommon(int32_t newCapacity) {
	$useLocalCurrentObjectStackCache();
	int32_t oldCapacity = $nc(this->fBuckets)->length;
	$var($SymbolHash$EntryArray, oldTable, this->fBuckets);
	$var($SymbolHash$EntryArray, newTable, $new($SymbolHash$EntryArray, newCapacity));
	$set(this, fBuckets, newTable);
	this->fTableSize = $nc(this->fBuckets)->length;
	for (int32_t i = oldCapacity; i-- > 0;) {
		{
			$var($SymbolHash$Entry, old, $nc(oldTable)->get(i));
			for (; old != nullptr;) {
				$var($SymbolHash$Entry, e, old);
				$assign(old, old->next);
				int32_t index = $mod(hash(e->key), newCapacity);
				$set(e, next, newTable->get(index));
				newTable->set(index, e);
			}
		}
	}
}

SymbolHash::SymbolHash() {
}

$Class* SymbolHash::load$($String* name, bool initialize) {
	$loadClass(SymbolHash, name, initialize, &_SymbolHash_ClassInfo_, allocate$SymbolHash);
	return class$;
}

$Class* SymbolHash::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com