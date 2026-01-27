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

$FieldInfo _ClassStack_FieldInfo_[] = {
	{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassStack, stack)},
	{}
};

$MethodInfo _ClassStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassStack, init$, void)},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassStack, empty, bool)},
	{"pop", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassStack, pop, $JavaClass*)},
	{"push", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(ClassStack, push, void, $JavaClass*)},
	{"top", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassStack, top, $JavaClass*)},
	{}
};

$ClassInfo _ClassStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ClassStack",
	"java.lang.Object",
	nullptr,
	_ClassStack_FieldInfo_,
	_ClassStack_MethodInfo_
};

$Object* allocate$ClassStack($Class* clazz) {
	return $of($alloc(ClassStack));
}

void ClassStack::init$() {
	$set(this, stack, $new($Stack));
}

void ClassStack::push($JavaClass* clazz) {
	$nc(this->stack)->push(clazz);
}

$JavaClass* ClassStack::pop() {
	return $cast($JavaClass, $nc(this->stack)->pop());
}

$JavaClass* ClassStack::top() {
	return $cast($JavaClass, $nc(this->stack)->peek());
}

bool ClassStack::empty() {
	return $nc(this->stack)->empty();
}

ClassStack::ClassStack() {
}

$Class* ClassStack::load$($String* name, bool initialize) {
	$loadClass(ClassStack, name, initialize, &_ClassStack_ClassInfo_, allocate$ClassStack);
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