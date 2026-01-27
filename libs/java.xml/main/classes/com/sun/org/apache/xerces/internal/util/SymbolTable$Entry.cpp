#include <com/sun/org/apache/xerces/internal/util/SymbolTable$Entry.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <jcpp.h>

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

$FieldInfo _SymbolTable$Entry_FieldInfo_[] = {
	{"symbol", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(SymbolTable$Entry, symbol)},
	{"characters", "[C", nullptr, $PUBLIC | $FINAL, $field(SymbolTable$Entry, characters)},
	{"next", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable$Entry;", nullptr, $PUBLIC, $field(SymbolTable$Entry, next)},
	{}
};

$MethodInfo _SymbolTable$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolTable$Entry;)V", nullptr, $PUBLIC, $method(SymbolTable$Entry, init$, void, $String*, SymbolTable$Entry*)},
	{"<init>", "([CIILcom/sun/org/apache/xerces/internal/util/SymbolTable$Entry;)V", nullptr, $PUBLIC, $method(SymbolTable$Entry, init$, void, $chars*, int32_t, int32_t, SymbolTable$Entry*)},
	{}
};

$InnerClassInfo _SymbolTable$Entry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.SymbolTable$Entry", "com.sun.org.apache.xerces.internal.util.SymbolTable", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _SymbolTable$Entry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SymbolTable$Entry",
	"java.lang.Object",
	nullptr,
	_SymbolTable$Entry_FieldInfo_,
	_SymbolTable$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolTable$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.SymbolTable"
};

$Object* allocate$SymbolTable$Entry($Class* clazz) {
	return $of($alloc(SymbolTable$Entry));
}

void SymbolTable$Entry::init$($String* symbol, SymbolTable$Entry* next) {
	$set(this, symbol, $nc(symbol)->intern());
	$set(this, characters, $new($chars, symbol->length()));
	symbol->getChars(0, $nc(this->characters)->length, this->characters, 0);
	$set(this, next, next);
}

void SymbolTable$Entry::init$($chars* ch, int32_t offset, int32_t length, SymbolTable$Entry* next) {
	$set(this, characters, $new($chars, length));
	$System::arraycopy(ch, offset, this->characters, 0, length);
	$set(this, symbol, $$new($String, this->characters)->intern());
	$set(this, next, next);
}

SymbolTable$Entry::SymbolTable$Entry() {
}

$Class* SymbolTable$Entry::load$($String* name, bool initialize) {
	$loadClass(SymbolTable$Entry, name, initialize, &_SymbolTable$Entry_ClassInfo_, allocate$SymbolTable$Entry);
	return class$;
}

$Class* SymbolTable$Entry::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com