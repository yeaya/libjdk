#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>

#include <com/sun/org/apache/xerces/internal/util/PrimeNumberSequenceGenerator.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable$Entry.h>
#include <jcpp.h>

#undef MAX_HASH_COLLISIONS
#undef MULTIPLIERS_MASK
#undef MULTIPLIERS_SIZE
#undef TABLE_SIZE

using $SymbolTable$EntryArray = $Array<::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry>;
using $PrimeNumberSequenceGenerator = ::com::sun::org::apache::xerces::internal::util::PrimeNumberSequenceGenerator;
using $SymbolTable$Entry = ::com::sun::org::apache::xerces::internal::util::SymbolTable$Entry;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SymbolTable_FieldInfo_[] = {
	{"TABLE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolTable, TABLE_SIZE)},
	{"MAX_HASH_COLLISIONS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolTable, MAX_HASH_COLLISIONS)},
	{"MULTIPLIERS_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolTable, MULTIPLIERS_SIZE)},
	{"MULTIPLIERS_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SymbolTable, MULTIPLIERS_MASK)},
	{"fBuckets", "[Lcom/sun/org/apache/xerces/internal/util/SymbolTable$Entry;", nullptr, $PROTECTED, $field(SymbolTable, fBuckets)},
	{"fTableSize", "I", nullptr, $PROTECTED, $field(SymbolTable, fTableSize)},
	{"fCount", "I", nullptr, $PROTECTED | $TRANSIENT, $field(SymbolTable, fCount)},
	{"fThreshold", "I", nullptr, $PROTECTED, $field(SymbolTable, fThreshold)},
	{"fLoadFactor", "F", nullptr, $PROTECTED, $field(SymbolTable, fLoadFactor)},
	{"fCollisionThreshold", "I", nullptr, $PROTECTED | $FINAL, $field(SymbolTable, fCollisionThreshold)},
	{"fHashMultipliers", "[I", nullptr, $PROTECTED, $field(SymbolTable, fHashMultipliers)},
	{}
};

$MethodInfo _SymbolTable_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(SymbolTable, init$, void, int32_t, float)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SymbolTable, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SymbolTable, init$, void)},
	{"addSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SymbolTable, addSymbol, $String*, $String*)},
	{"addSymbol", "([CII)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SymbolTable, addSymbol, $String*, $chars*, int32_t, int32_t)},
	{"addSymbol0", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(SymbolTable, addSymbol0, $String*, $String*, int32_t, int32_t)},
	{"addSymbol0", "([CIIII)Ljava/lang/String;", nullptr, $PRIVATE, $method(SymbolTable, addSymbol0, $String*, $chars*, int32_t, int32_t, int32_t, int32_t)},
	{"containsSymbol", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SymbolTable, containsSymbol, bool, $String*)},
	{"containsSymbol", "([CII)Z", nullptr, $PUBLIC, $virtualMethod(SymbolTable, containsSymbol, bool, $chars*, int32_t, int32_t)},
	{"hash", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SymbolTable, hash, int32_t, $String*)},
	{"hash", "([CII)I", nullptr, $PUBLIC, $virtualMethod(SymbolTable, hash, int32_t, $chars*, int32_t, int32_t)},
	{"hash0", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(SymbolTable, hash0, int32_t, $String*)},
	{"hash0", "([CII)I", nullptr, $PRIVATE, $method(SymbolTable, hash0, int32_t, $chars*, int32_t, int32_t)},
	{"rebalance", "()V", nullptr, $PROTECTED, $virtualMethod(SymbolTable, rebalance, void)},
	{"rehash", "()V", nullptr, $PROTECTED, $virtualMethod(SymbolTable, rehash, void)},
	{"rehashCommon", "(I)V", nullptr, $PRIVATE, $method(SymbolTable, rehashCommon, void, int32_t)},
	{}
};

$InnerClassInfo _SymbolTable_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.SymbolTable$Entry", "com.sun.org.apache.xerces.internal.util.SymbolTable", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _SymbolTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SymbolTable",
	"java.lang.Object",
	nullptr,
	_SymbolTable_FieldInfo_,
	_SymbolTable_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.SymbolTable$Entry"
};

$Object* allocate$SymbolTable($Class* clazz) {
	return $of($alloc(SymbolTable));
}

void SymbolTable::init$(int32_t initialCapacity, float loadFactor) {
	$useLocalCurrentObjectStackCache();
	$set(this, fBuckets, nullptr);
	if (initialCapacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal Capacity: "_s, $$str(initialCapacity)}));
	}
	if (loadFactor <= 0 || $Float::isNaN(loadFactor)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal Load: "_s, $$str(loadFactor)}));
	}
	if (initialCapacity == 0) {
		initialCapacity = 1;
	}
	this->fLoadFactor = loadFactor;
	this->fTableSize = initialCapacity;
	$set(this, fBuckets, $new($SymbolTable$EntryArray, this->fTableSize));
	this->fThreshold = $cast(int32_t, (this->fTableSize * loadFactor));
	this->fCollisionThreshold = $cast(int32_t, (SymbolTable::MAX_HASH_COLLISIONS * loadFactor));
	this->fCount = 0;
}

void SymbolTable::init$(int32_t initialCapacity) {
	SymbolTable::init$(initialCapacity, 0.75f);
}

void SymbolTable::init$() {
	SymbolTable::init$(SymbolTable::TABLE_SIZE, 0.75f);
}

$String* SymbolTable::addSymbol($String* symbol) {
	int32_t collisionCount = 0;
	int32_t bucket = $mod(hash(symbol), this->fTableSize);
	{
		$var($SymbolTable$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if ($nc(entry->symbol)->equals(symbol)) {
				return entry->symbol;
			}
			++collisionCount;
		}
	}
	return addSymbol0(symbol, bucket, collisionCount);
}

$String* SymbolTable::addSymbol0($String* symbol, int32_t bucket, int32_t collisionCount) {
	if (this->fCount >= this->fThreshold) {
		rehash();
		bucket = $mod(hash(symbol), this->fTableSize);
	} else if (collisionCount >= this->fCollisionThreshold) {
		rebalance();
		bucket = $mod(hash(symbol), this->fTableSize);
	}
	$var($SymbolTable$Entry, entry, $new($SymbolTable$Entry, symbol, $nc(this->fBuckets)->get(bucket)));
	$nc(this->fBuckets)->set(bucket, entry);
	++this->fCount;
	return entry->symbol;
}

$String* SymbolTable::addSymbol($chars* buffer, int32_t offset, int32_t length) {
	int32_t collisionCount = 0;
	int32_t bucket = $mod(hash(buffer, offset, length), this->fTableSize);
	bool OUTER$continue = false;
	{
		$var($SymbolTable$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if (length == $nc(entry->characters)->length) {
				for (int32_t i = 0; i < length; ++i) {
					if ($nc(buffer)->get(offset + i) != $nc(entry->characters)->get(i)) {
						++collisionCount;
						OUTER$continue = true;
						break;
					}
				}
				if (OUTER$continue) {
					OUTER$continue = false;
					continue;
				}
				return entry->symbol;
			}
			++collisionCount;
		}
	}
	return addSymbol0(buffer, offset, length, bucket, collisionCount);
}

$String* SymbolTable::addSymbol0($chars* buffer, int32_t offset, int32_t length, int32_t bucket, int32_t collisionCount) {
	if (this->fCount >= this->fThreshold) {
		rehash();
		bucket = $mod(hash(buffer, offset, length), this->fTableSize);
	} else if (collisionCount >= this->fCollisionThreshold) {
		rebalance();
		bucket = $mod(hash(buffer, offset, length), this->fTableSize);
	}
	$var($SymbolTable$Entry, entry, $new($SymbolTable$Entry, buffer, offset, length, $nc(this->fBuckets)->get(bucket)));
	$nc(this->fBuckets)->set(bucket, entry);
	++this->fCount;
	return entry->symbol;
}

int32_t SymbolTable::hash($String* symbol) {
	if (this->fHashMultipliers == nullptr) {
		return (int32_t)($nc(symbol)->hashCode() & (uint32_t)0x7FFFFFFF);
	}
	return hash0(symbol);
}

int32_t SymbolTable::hash0($String* symbol) {
	int32_t code = 0;
	int32_t length = $nc(symbol)->length();
	$var($ints, multipliers, this->fHashMultipliers);
	for (int32_t i = 0; i < length; ++i) {
		code = code * $nc(multipliers)->get((int32_t)(i & (uint32_t)SymbolTable::MULTIPLIERS_MASK)) + symbol->charAt(i);
	}
	return (int32_t)(code & (uint32_t)0x7FFFFFFF);
}

int32_t SymbolTable::hash($chars* buffer, int32_t offset, int32_t length) {
	if (this->fHashMultipliers == nullptr) {
		int32_t code = 0;
		for (int32_t i = 0; i < length; ++i) {
			code = code * 31 + $nc(buffer)->get(offset + i);
		}
		return (int32_t)(code & (uint32_t)0x7FFFFFFF);
	}
	return hash0(buffer, offset, length);
}

int32_t SymbolTable::hash0($chars* buffer, int32_t offset, int32_t length) {
	int32_t code = 0;
	$var($ints, multipliers, this->fHashMultipliers);
	for (int32_t i = 0; i < length; ++i) {
		code = code * $nc(multipliers)->get((int32_t)(i & (uint32_t)SymbolTable::MULTIPLIERS_MASK)) + $nc(buffer)->get(offset + i);
	}
	return (int32_t)(code & (uint32_t)0x7FFFFFFF);
}

void SymbolTable::rehash() {
	rehashCommon($nc(this->fBuckets)->length * 2 + 1);
}

void SymbolTable::rebalance() {
	if (this->fHashMultipliers == nullptr) {
		$set(this, fHashMultipliers, $new($ints, SymbolTable::MULTIPLIERS_SIZE));
	}
	$PrimeNumberSequenceGenerator::generateSequence(this->fHashMultipliers);
	rehashCommon($nc(this->fBuckets)->length);
}

void SymbolTable::rehashCommon(int32_t newCapacity) {
	$useLocalCurrentObjectStackCache();
	int32_t oldCapacity = $nc(this->fBuckets)->length;
	$var($SymbolTable$EntryArray, oldTable, this->fBuckets);
	$var($SymbolTable$EntryArray, newTable, $new($SymbolTable$EntryArray, newCapacity));
	this->fThreshold = $cast(int32_t, (newCapacity * this->fLoadFactor));
	$set(this, fBuckets, newTable);
	this->fTableSize = $nc(this->fBuckets)->length;
	for (int32_t i = oldCapacity; i-- > 0;) {
		{
			$var($SymbolTable$Entry, old, $nc(oldTable)->get(i));
			for (; old != nullptr;) {
				$var($SymbolTable$Entry, e, old);
				$assign(old, old->next);
				int32_t index = $mod(hash(e->symbol), newCapacity);
				$set(e, next, newTable->get(index));
				newTable->set(index, e);
			}
		}
	}
}

bool SymbolTable::containsSymbol($String* symbol) {
	int32_t bucket = $mod(hash(symbol), this->fTableSize);
	int32_t length = $nc(symbol)->length();
	bool OUTER$continue = false;
	{
		$var($SymbolTable$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if (length == $nc(entry->characters)->length) {
				for (int32_t i = 0; i < length; ++i) {
					if (symbol->charAt(i) != $nc(entry->characters)->get(i)) {
						OUTER$continue = true;
						break;
					}
				}
				if (OUTER$continue) {
					OUTER$continue = false;
					continue;
				}
				return true;
			}
		}
	}
	return false;
}

bool SymbolTable::containsSymbol($chars* buffer, int32_t offset, int32_t length) {
	int32_t bucket = $mod(hash(buffer, offset, length), this->fTableSize);
	bool OUTER$continue = false;
	{
		$var($SymbolTable$Entry, entry, $nc(this->fBuckets)->get(bucket));
		for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
			if (length == $nc(entry->characters)->length) {
				for (int32_t i = 0; i < length; ++i) {
					if ($nc(buffer)->get(offset + i) != $nc(entry->characters)->get(i)) {
						OUTER$continue = true;
						break;
					}
				}
				if (OUTER$continue) {
					OUTER$continue = false;
					continue;
				}
				return true;
			}
		}
	}
	return false;
}

SymbolTable::SymbolTable() {
}

$Class* SymbolTable::load$($String* name, bool initialize) {
	$loadClass(SymbolTable, name, initialize, &_SymbolTable_ClassInfo_, allocate$SymbolTable);
	return class$;
}

$Class* SymbolTable::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com