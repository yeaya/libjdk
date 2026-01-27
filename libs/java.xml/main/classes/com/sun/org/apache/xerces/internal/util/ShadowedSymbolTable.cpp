#include <com/sun/org/apache/xerces/internal/util/ShadowedSymbolTable.h>

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

$FieldInfo _ShadowedSymbolTable_FieldInfo_[] = {
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(ShadowedSymbolTable, fSymbolTable)},
	{}
};

$MethodInfo _ShadowedSymbolTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(ShadowedSymbolTable, init$, void, $SymbolTable*)},
	{"addSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ShadowedSymbolTable, addSymbol, $String*, $String*)},
	{"addSymbol", "([CII)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ShadowedSymbolTable, addSymbol, $String*, $chars*, int32_t, int32_t)},
	{"hash", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ShadowedSymbolTable, hash, int32_t, $String*)},
	{"hash", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ShadowedSymbolTable, hash, int32_t, $chars*, int32_t, int32_t)},
	{}
};

$ClassInfo _ShadowedSymbolTable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.ShadowedSymbolTable",
	"com.sun.org.apache.xerces.internal.util.SymbolTable",
	nullptr,
	_ShadowedSymbolTable_FieldInfo_,
	_ShadowedSymbolTable_MethodInfo_
};

$Object* allocate$ShadowedSymbolTable($Class* clazz) {
	return $of($alloc(ShadowedSymbolTable));
}

void ShadowedSymbolTable::init$($SymbolTable* symbolTable) {
	$SymbolTable::init$();
	$set(this, fSymbolTable, symbolTable);
}

$String* ShadowedSymbolTable::addSymbol($String* symbol) {
	if ($nc(this->fSymbolTable)->containsSymbol(symbol)) {
		return $nc(this->fSymbolTable)->addSymbol(symbol);
	}
	return $SymbolTable::addSymbol(symbol);
}

$String* ShadowedSymbolTable::addSymbol($chars* buffer, int32_t offset, int32_t length) {
	if ($nc(this->fSymbolTable)->containsSymbol(buffer, offset, length)) {
		return $nc(this->fSymbolTable)->addSymbol(buffer, offset, length);
	}
	return $SymbolTable::addSymbol(buffer, offset, length);
}

int32_t ShadowedSymbolTable::hash($String* symbol) {
	return $nc(this->fSymbolTable)->hash(symbol);
}

int32_t ShadowedSymbolTable::hash($chars* buffer, int32_t offset, int32_t length) {
	return $nc(this->fSymbolTable)->hash(buffer, offset, length);
}

ShadowedSymbolTable::ShadowedSymbolTable() {
}

$Class* ShadowedSymbolTable::load$($String* name, bool initialize) {
	$loadClass(ShadowedSymbolTable, name, initialize, &_ShadowedSymbolTable_ClassInfo_, allocate$ShadowedSymbolTable);
	return class$;
}

$Class* ShadowedSymbolTable::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com