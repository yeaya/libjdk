#include <com/sun/org/apache/xerces/internal/util/SynchronizedSymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <jcpp.h>

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void SynchronizedSymbolTable::init$($SymbolTable* symbolTable) {
	$SymbolTable::init$();
	$set(this, fSymbolTable, symbolTable);
}

void SynchronizedSymbolTable::init$() {
	$SymbolTable::init$();
	$set(this, fSymbolTable, $new($SymbolTable));
}

void SynchronizedSymbolTable::init$(int32_t size) {
	$SymbolTable::init$();
	$set(this, fSymbolTable, $new($SymbolTable, size));
}

$String* SynchronizedSymbolTable::addSymbol($String* symbol) {
	$synchronized(this->fSymbolTable) {
		return this->fSymbolTable->addSymbol(symbol);
	}
}

$String* SynchronizedSymbolTable::addSymbol($chars* buffer, int32_t offset, int32_t length) {
	$synchronized(this->fSymbolTable) {
		return this->fSymbolTable->addSymbol(buffer, offset, length);
	}
}

bool SynchronizedSymbolTable::containsSymbol($String* symbol) {
	$synchronized(this->fSymbolTable) {
		return this->fSymbolTable->containsSymbol(symbol);
	}
}

bool SynchronizedSymbolTable::containsSymbol($chars* buffer, int32_t offset, int32_t length) {
	$synchronized(this->fSymbolTable) {
		return this->fSymbolTable->containsSymbol(buffer, offset, length);
	}
}

SynchronizedSymbolTable::SynchronizedSymbolTable() {
}

$Class* SynchronizedSymbolTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(SynchronizedSymbolTable, fSymbolTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(SynchronizedSymbolTable, init$, void, $SymbolTable*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynchronizedSymbolTable, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(SynchronizedSymbolTable, init$, void, int32_t)},
		{"addSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynchronizedSymbolTable, addSymbol, $String*, $String*)},
		{"addSymbol", "([CII)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynchronizedSymbolTable, addSymbol, $String*, $chars*, int32_t, int32_t)},
		{"containsSymbol", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SynchronizedSymbolTable, containsSymbol, bool, $String*)},
		{"containsSymbol", "([CII)Z", nullptr, $PUBLIC, $virtualMethod(SynchronizedSymbolTable, containsSymbol, bool, $chars*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.SynchronizedSymbolTable",
		"com.sun.org.apache.xerces.internal.util.SymbolTable",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynchronizedSymbolTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronizedSymbolTable);
	});
	return class$;
}

$Class* SynchronizedSymbolTable::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com