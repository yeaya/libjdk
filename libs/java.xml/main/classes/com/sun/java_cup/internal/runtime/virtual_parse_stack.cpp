#include <com/sun/java_cup/internal/runtime/virtual_parse_stack.h>

#include <com/sun/java_cup/internal/runtime/Symbol.h>
#include <java/util/Stack.h>
#include <jcpp.h>

using $Symbol = ::com::sun::java_cup::internal::runtime::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

$FieldInfo _virtual_parse_stack_FieldInfo_[] = {
	{"real_stack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/java_cup/internal/runtime/Symbol;>;", $PROTECTED, $field(virtual_parse_stack, real_stack)},
	{"real_next", "I", nullptr, $PROTECTED, $field(virtual_parse_stack, real_next)},
	{"vstack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Integer;>;", $PROTECTED, $field(virtual_parse_stack, vstack)},
	{}
};

$MethodInfo _virtual_parse_stack_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Stack;)V", "(Ljava/util/Stack<Lcom/sun/java_cup/internal/runtime/Symbol;>;)V", $PUBLIC, $method(virtual_parse_stack, init$, void, $Stack*), "java.lang.Exception"},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(virtual_parse_stack, empty, bool)},
	{"get_from_real", "()V", nullptr, $PROTECTED, $virtualMethod(virtual_parse_stack, get_from_real, void)},
	{"pop", "()V", nullptr, $PUBLIC, $virtualMethod(virtual_parse_stack, pop, void), "java.lang.Exception"},
	{"push", "(I)V", nullptr, $PUBLIC, $virtualMethod(virtual_parse_stack, push, void, int32_t)},
	{"top", "()I", nullptr, $PUBLIC, $virtualMethod(virtual_parse_stack, top, int32_t), "java.lang.Exception"},
	{}
};

$ClassInfo _virtual_parse_stack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java_cup.internal.runtime.virtual_parse_stack",
	"java.lang.Object",
	nullptr,
	_virtual_parse_stack_FieldInfo_,
	_virtual_parse_stack_MethodInfo_
};

$Object* allocate$virtual_parse_stack($Class* clazz) {
	return $of($alloc(virtual_parse_stack));
}

void virtual_parse_stack::init$($Stack* shadowing_stack) {
	if (shadowing_stack == nullptr) {
		$throwNew($Exception, "Internal parser error: attempt to create null virtual stack"_s);
	}
	$set(this, real_stack, shadowing_stack);
	$set(this, vstack, $new($Stack));
	this->real_next = 0;
	get_from_real();
}

void virtual_parse_stack::get_from_real() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, stack_sym, nullptr);
	if (this->real_next >= $nc(this->real_stack)->size()) {
		return;
	}
	$assign(stack_sym, $cast($Symbol, $nc(this->real_stack)->get($nc(this->real_stack)->size() - 1 - this->real_next)));
	++this->real_next;
	$nc(this->vstack)->push($($Integer::valueOf($nc(stack_sym)->parse_state)));
}

bool virtual_parse_stack::empty() {
	return $nc(this->vstack)->empty();
}

int32_t virtual_parse_stack::top() {
	if ($nc(this->vstack)->empty()) {
		$throwNew($Exception, "Internal parser error: top() called on empty virtual stack"_s);
	}
	return $nc(($cast($Integer, $($nc(this->vstack)->peek()))))->intValue();
}

void virtual_parse_stack::pop() {
	if ($nc(this->vstack)->empty()) {
		$throwNew($Exception, "Internal parser error: pop from empty virtual stack"_s);
	}
	$nc(this->vstack)->pop();
	if ($nc(this->vstack)->empty()) {
		get_from_real();
	}
}

void virtual_parse_stack::push(int32_t state_num) {
	$nc(this->vstack)->push($($Integer::valueOf(state_num)));
}

virtual_parse_stack::virtual_parse_stack() {
}

$Class* virtual_parse_stack::load$($String* name, bool initialize) {
	$loadClass(virtual_parse_stack, name, initialize, &_virtual_parse_stack_ClassInfo_, allocate$virtual_parse_stack);
	return class$;
}

$Class* virtual_parse_stack::class$ = nullptr;

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com