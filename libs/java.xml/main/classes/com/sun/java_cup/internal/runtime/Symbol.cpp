#include <com/sun/java_cup/internal/runtime/Symbol.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

$FieldInfo _Symbol_FieldInfo_[] = {
	{"sym", "I", nullptr, $PUBLIC, $field(Symbol, sym)},
	{"parse_state", "I", nullptr, $PUBLIC, $field(Symbol, parse_state)},
	{"used_by_parser", "Z", nullptr, 0, $field(Symbol, used_by_parser)},
	{"left", "I", nullptr, $PUBLIC, $field(Symbol, left)},
	{"right", "I", nullptr, $PUBLIC, $field(Symbol, right)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symbol, value)},
	{}
};

$MethodInfo _Symbol_MethodInfo_[] = {
	{"<init>", "(IIILjava/lang/Object;)V", nullptr, $PUBLIC, $method(Symbol, init$, void, int32_t, int32_t, int32_t, Object$*)},
	{"<init>", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $method(Symbol, init$, void, int32_t, Object$*)},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(Symbol, init$, void, int32_t, int32_t, int32_t)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(Symbol, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(Symbol, init$, void, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Symbol, toString, $String*)},
	{}
};

$ClassInfo _Symbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java_cup.internal.runtime.Symbol",
	"java.lang.Object",
	nullptr,
	_Symbol_FieldInfo_,
	_Symbol_MethodInfo_
};

$Object* allocate$Symbol($Class* clazz) {
	return $of($alloc(Symbol));
}

void Symbol::init$(int32_t id, int32_t l, int32_t r, Object$* o) {
	Symbol::init$(id);
	this->left = l;
	this->right = r;
	$set(this, value, o);
}

void Symbol::init$(int32_t id, Object$* o) {
	Symbol::init$(id);
	this->left = -1;
	this->right = -1;
	$set(this, value, o);
}

void Symbol::init$(int32_t sym_num, int32_t l, int32_t r) {
	this->used_by_parser = false;
	this->sym = sym_num;
	this->left = l;
	this->right = r;
	$set(this, value, nullptr);
}

void Symbol::init$(int32_t sym_num) {
	Symbol::init$(sym_num, -1);
	this->left = -1;
	this->right = -1;
	$set(this, value, nullptr);
}

void Symbol::init$(int32_t sym_num, int32_t state) {
	this->used_by_parser = false;
	this->sym = sym_num;
	this->parse_state = state;
}

$String* Symbol::toString() {
	return $str({"#"_s, $$str(this->sym)});
}

Symbol::Symbol() {
}

$Class* Symbol::load$($String* name, bool initialize) {
	$loadClass(Symbol, name, initialize, &_Symbol_ClassInfo_, allocate$Symbol);
	return class$;
}

$Class* Symbol::class$ = nullptr;

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com