#include <javax/swing/JComponent$IntVector.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void JComponent$IntVector::init$() {
	$set(this, array, nullptr);
	this->count = 0;
	this->capacity = 0;
}

int32_t JComponent$IntVector::size() {
	return this->count;
}

int32_t JComponent$IntVector::elementAt(int32_t index) {
	return $nc(this->array)->get(index);
}

void JComponent$IntVector::addElement(int32_t value) {
	if (this->count == this->capacity) {
		this->capacity = (this->capacity + 2) * 2;
		$var($ints, newarray, $new($ints, this->capacity));
		if (this->count > 0) {
			$System::arraycopy(this->array, 0, newarray, 0, this->count);
		}
		$set(this, array, newarray);
	}
	$nc(this->array)->set(this->count++, value);
}

void JComponent$IntVector::setElementAt(int32_t value, int32_t index) {
	$nc(this->array)->set(index, value);
}

JComponent$IntVector::JComponent$IntVector() {
}

$Class* JComponent$IntVector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[I", nullptr, 0, $field(JComponent$IntVector, array)},
		{"count", "I", nullptr, 0, $field(JComponent$IntVector, count)},
		{"capacity", "I", nullptr, 0, $field(JComponent$IntVector, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JComponent$IntVector, init$, void)},
		{"addElement", "(I)V", nullptr, 0, $method(JComponent$IntVector, addElement, void, int32_t)},
		{"elementAt", "(I)I", nullptr, 0, $method(JComponent$IntVector, elementAt, int32_t, int32_t)},
		{"setElementAt", "(II)V", nullptr, 0, $method(JComponent$IntVector, setElementAt, void, int32_t, int32_t)},
		{"size", "()I", nullptr, 0, $method(JComponent$IntVector, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$IntVector", "javax.swing.JComponent", "IntVector", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.JComponent$IntVector",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$IntVector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$IntVector);
	});
	return class$;
}

$Class* JComponent$IntVector::class$ = nullptr;

	} // swing
} // javax