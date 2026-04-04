#include <com/sun/org/apache/bcel/internal/util/ClassStack.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <java/util/Stack.h>
#include <jcpp.h>

using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

void ClassStack::init$() {
	$set(this, stack, $new($Stack));
}

void ClassStack::push($JavaClass* clazz) {
	this->stack->push(clazz);
}

$JavaClass* ClassStack::pop() {
	return $cast($JavaClass, this->stack->pop());
}

$JavaClass* ClassStack::top() {
	return $cast($JavaClass, this->stack->peek());
}

bool ClassStack::empty() {
	return this->stack->empty();
}

ClassStack::ClassStack() {
}

$Class* ClassStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassStack, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassStack, init$, void)},
		{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassStack, empty, bool)},
		{"pop", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassStack, pop, $JavaClass*)},
		{"push", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(ClassStack, push, void, $JavaClass*)},
		{"top", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassStack, top, $JavaClass*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.util.ClassStack",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassStack);
	});
	return class$;
}

$Class* ClassStack::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com