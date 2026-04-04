#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser$BooleanStack.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
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
						namespace impl {
							namespace xs {
								namespace opti {

void SchemaDOMParser$BooleanStack::init$() {
}

int32_t SchemaDOMParser$BooleanStack::size() {
	return this->fDepth;
}

void SchemaDOMParser$BooleanStack::push(bool value) {
	ensureCapacity(this->fDepth + 1);
	$nc(this->fData)->set(this->fDepth++, value);
}

bool SchemaDOMParser$BooleanStack::pop() {
	return $nc(this->fData)->get(--this->fDepth);
}

void SchemaDOMParser$BooleanStack::clear() {
	this->fDepth = 0;
}

void SchemaDOMParser$BooleanStack::ensureCapacity(int32_t size) {
	if (this->fData == nullptr) {
		$set(this, fData, $new($booleans, 32));
	} else if (this->fData->length <= size) {
		$var($booleans, newdata, $new($booleans, this->fData->length * 2));
		$System::arraycopy(this->fData, 0, newdata, 0, this->fData->length);
		$set(this, fData, newdata);
	}
}

SchemaDOMParser$BooleanStack::SchemaDOMParser$BooleanStack() {
}

$Class* SchemaDOMParser$BooleanStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fDepth", "I", nullptr, $PRIVATE, $field(SchemaDOMParser$BooleanStack, fDepth)},
		{"fData", "[Z", nullptr, $PRIVATE, $field(SchemaDOMParser$BooleanStack, fData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaDOMParser$BooleanStack, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $method(SchemaDOMParser$BooleanStack, clear, void)},
		{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(SchemaDOMParser$BooleanStack, ensureCapacity, void, int32_t)},
		{"pop", "()Z", nullptr, $PUBLIC, $method(SchemaDOMParser$BooleanStack, pop, bool)},
		{"push", "(Z)V", nullptr, $PUBLIC, $method(SchemaDOMParser$BooleanStack, push, void, bool)},
		{"size", "()I", nullptr, $PUBLIC, $method(SchemaDOMParser$BooleanStack, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser$BooleanStack", "com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser", "BooleanStack", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser$BooleanStack",
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
		"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser"
	};
	$loadClass(SchemaDOMParser$BooleanStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SchemaDOMParser$BooleanStack);
	});
	return class$;
}

$Class* SchemaDOMParser$BooleanStack::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com