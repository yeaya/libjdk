#include <com/sun/org/apache/xml/internal/serializer/ToStream$BoolStack.h>

#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream$BoolStack_FieldInfo_[] = {
	{"m_values", "[Z", nullptr, $PRIVATE, $field(ToStream$BoolStack, m_values)},
	{"m_allocatedSize", "I", nullptr, $PRIVATE, $field(ToStream$BoolStack, m_allocatedSize)},
	{"m_index", "I", nullptr, $PRIVATE, $field(ToStream$BoolStack, m_index)},
	{}
};

$MethodInfo _ToStream$BoolStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToStream$BoolStack, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ToStream$BoolStack, init$, void, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, clear, void)},
	{"grow", "()V", nullptr, $PRIVATE, $method(ToStream$BoolStack, grow, void)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(ToStream$BoolStack, isEmpty, bool)},
	{"peek", "()Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, peek, bool)},
	{"peekOrFalse", "()Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, peekOrFalse, bool)},
	{"peekOrTrue", "()Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, peekOrTrue, bool)},
	{"pop", "()Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, pop, bool)},
	{"popAndTop", "()Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, popAndTop, bool)},
	{"push", "(Z)Z", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, push, bool, bool)},
	{"setTop", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, setTop, void, bool)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(ToStream$BoolStack, size, int32_t)},
	{}
};

$InnerClassInfo _ToStream$BoolStack_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$BoolStack", "com.sun.org.apache.xml.internal.serializer.ToStream", "BoolStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _ToStream$BoolStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToStream$BoolStack",
	"java.lang.Object",
	nullptr,
	_ToStream$BoolStack_FieldInfo_,
	_ToStream$BoolStack_MethodInfo_,
	nullptr,
	nullptr,
	_ToStream$BoolStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream"
};

$Object* allocate$ToStream$BoolStack($Class* clazz) {
	return $of($alloc(ToStream$BoolStack));
}

void ToStream$BoolStack::init$() {
	ToStream$BoolStack::init$(32);
}

void ToStream$BoolStack::init$(int32_t size) {
	this->m_allocatedSize = size;
	$set(this, m_values, $new($booleans, size));
	this->m_index = -1;
}

int32_t ToStream$BoolStack::size() {
	return this->m_index + 1;
}

void ToStream$BoolStack::clear() {
	this->m_index = -1;
}

bool ToStream$BoolStack::push(bool val) {
	if (this->m_index == this->m_allocatedSize - 1) {
		grow();
	}
	return ($nc(this->m_values)->set(++this->m_index, val));
}

bool ToStream$BoolStack::pop() {
	return $nc(this->m_values)->get(this->m_index--);
}

bool ToStream$BoolStack::popAndTop() {
	--this->m_index;
	return (this->m_index >= 0) ? $nc(this->m_values)->get(this->m_index) : false;
}

void ToStream$BoolStack::setTop(bool b) {
	$nc(this->m_values)->set(this->m_index, b);
}

bool ToStream$BoolStack::peek() {
	return $nc(this->m_values)->get(this->m_index);
}

bool ToStream$BoolStack::peekOrFalse() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : false;
}

bool ToStream$BoolStack::peekOrTrue() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : true;
}

bool ToStream$BoolStack::isEmpty() {
	return (this->m_index == -1);
}

void ToStream$BoolStack::grow() {
	this->m_allocatedSize *= 2;
	$var($booleans, newVector, $new($booleans, this->m_allocatedSize));
	$System::arraycopy(this->m_values, 0, newVector, 0, this->m_index + 1);
	$set(this, m_values, newVector);
}

ToStream$BoolStack::ToStream$BoolStack() {
}

$Class* ToStream$BoolStack::load$($String* name, bool initialize) {
	$loadClass(ToStream$BoolStack, name, initialize, &_ToStream$BoolStack_ClassInfo_, allocate$ToStream$BoolStack);
	return class$;
}

$Class* ToStream$BoolStack::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com