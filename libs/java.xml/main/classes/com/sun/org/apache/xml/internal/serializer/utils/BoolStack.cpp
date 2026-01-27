#include <com/sun/org/apache/xml/internal/serializer/utils/BoolStack.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _BoolStack_FieldInfo_[] = {
	{"m_values", "[Z", nullptr, $PRIVATE, $field(BoolStack, m_values)},
	{"m_allocatedSize", "I", nullptr, $PRIVATE, $field(BoolStack, m_allocatedSize)},
	{"m_index", "I", nullptr, $PRIVATE, $field(BoolStack, m_index)},
	{}
};

$MethodInfo _BoolStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BoolStack, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(BoolStack, init$, void, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $method(BoolStack, clear, void)},
	{"grow", "()V", nullptr, $PRIVATE, $method(BoolStack, grow, void)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(BoolStack, isEmpty, bool)},
	{"peek", "()Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, peek, bool)},
	{"peekOrFalse", "()Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, peekOrFalse, bool)},
	{"peekOrTrue", "()Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, peekOrTrue, bool)},
	{"pop", "()Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, pop, bool)},
	{"popAndTop", "()Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, popAndTop, bool)},
	{"push", "(Z)Z", nullptr, $PUBLIC | $FINAL, $method(BoolStack, push, bool, bool)},
	{"setTop", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(BoolStack, setTop, void, bool)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(BoolStack, size, int32_t)},
	{}
};

$ClassInfo _BoolStack_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.BoolStack",
	"java.lang.Object",
	nullptr,
	_BoolStack_FieldInfo_,
	_BoolStack_MethodInfo_
};

$Object* allocate$BoolStack($Class* clazz) {
	return $of($alloc(BoolStack));
}

void BoolStack::init$() {
	BoolStack::init$(32);
}

void BoolStack::init$(int32_t size) {
	this->m_allocatedSize = size;
	$set(this, m_values, $new($booleans, size));
	this->m_index = -1;
}

int32_t BoolStack::size() {
	return this->m_index + 1;
}

void BoolStack::clear() {
	this->m_index = -1;
}

bool BoolStack::push(bool val) {
	if (this->m_index == this->m_allocatedSize - 1) {
		grow();
	}
	return ($nc(this->m_values)->set(++this->m_index, val));
}

bool BoolStack::pop() {
	return $nc(this->m_values)->get(this->m_index--);
}

bool BoolStack::popAndTop() {
	--this->m_index;
	return (this->m_index >= 0) ? $nc(this->m_values)->get(this->m_index) : false;
}

void BoolStack::setTop(bool b) {
	$nc(this->m_values)->set(this->m_index, b);
}

bool BoolStack::peek() {
	return $nc(this->m_values)->get(this->m_index);
}

bool BoolStack::peekOrFalse() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : false;
}

bool BoolStack::peekOrTrue() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : true;
}

bool BoolStack::isEmpty() {
	return (this->m_index == -1);
}

void BoolStack::grow() {
	this->m_allocatedSize *= 2;
	$var($booleans, newVector, $new($booleans, this->m_allocatedSize));
	$System::arraycopy(this->m_values, 0, newVector, 0, this->m_index + 1);
	$set(this, m_values, newVector);
}

BoolStack::BoolStack() {
}

$Class* BoolStack::load$($String* name, bool initialize) {
	$loadClass(BoolStack, name, initialize, &_BoolStack_ClassInfo_, allocate$BoolStack);
	return class$;
}

$Class* BoolStack::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com