#include <com/sun/org/apache/xerces/internal/util/IntStack.h>
#include <jcpp.h>

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

void IntStack::init$() {
}

int32_t IntStack::size() {
	return this->fDepth;
}

void IntStack::push(int32_t value) {
	ensureCapacity(this->fDepth + 1);
	$nc(this->fData)->set(this->fDepth++, value);
}

int32_t IntStack::peek() {
	return $nc(this->fData)->get(this->fDepth - 1);
}

int32_t IntStack::elementAt(int32_t depth) {
	return $nc(this->fData)->get(depth);
}

int32_t IntStack::pop() {
	return $nc(this->fData)->get(--this->fDepth);
}

void IntStack::clear() {
	this->fDepth = 0;
}

void IntStack::print() {
	$nc($System::out)->print(u'(');
	$System::out->print(this->fDepth);
	$System::out->print(") {"_s);
	for (int32_t i = 0; i < this->fDepth; ++i) {
		if (i == 3) {
			$System::out->print(" ..."_s);
			break;
		}
		$System::out->print(u' ');
		$System::out->print($nc(this->fData)->get(i));
		if (i < this->fDepth - 1) {
			$System::out->print(u',');
		}
	}
	$System::out->print(" }"_s);
	$System::out->println();
}

void IntStack::ensureCapacity(int32_t size) {
	if (this->fData == nullptr) {
		$set(this, fData, $new($ints, 32));
	} else if (this->fData->length <= size) {
		$var($ints, newdata, $new($ints, this->fData->length * 2));
		$System::arraycopy(this->fData, 0, newdata, 0, this->fData->length);
		$set(this, fData, newdata);
	}
}

IntStack::IntStack() {
}

$Class* IntStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fDepth", "I", nullptr, $PRIVATE, $field(IntStack, fDepth)},
		{"fData", "[I", nullptr, $PRIVATE, $field(IntStack, fData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntStack, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $method(IntStack, clear, void)},
		{"elementAt", "(I)I", nullptr, $PUBLIC, $method(IntStack, elementAt, int32_t, int32_t)},
		{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(IntStack, ensureCapacity, void, int32_t)},
		{"peek", "()I", nullptr, $PUBLIC, $method(IntStack, peek, int32_t)},
		{"pop", "()I", nullptr, $PUBLIC, $method(IntStack, pop, int32_t)},
		{"print", "()V", nullptr, $PUBLIC, $method(IntStack, print, void)},
		{"push", "(I)V", nullptr, $PUBLIC, $method(IntStack, push, void, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $method(IntStack, size, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.IntStack",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntStack);
	});
	return class$;
}

$Class* IntStack::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com