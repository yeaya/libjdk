#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringStack.h>

#include <java/util/Stack.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _StringStack_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StringStack, serialVersionUID)},
	{}
};

$MethodInfo _StringStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringStack, init$, void)},
	{"peekString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(StringStack, peekString, $String*)},
	{"popString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(StringStack, popString, $String*)},
	{"pushString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(StringStack, pushString, $String*, $String*)},
	{}
};

$ClassInfo _StringStack_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.StringStack",
	"java.util.Stack",
	nullptr,
	_StringStack_FieldInfo_,
	_StringStack_MethodInfo_,
	"Ljava/util/Stack<Ljava/lang/String;>;"
};

$Object* allocate$StringStack($Class* clazz) {
	return $of($alloc(StringStack));
}

void StringStack::init$() {
	$Stack::init$();
}

$String* StringStack::peekString() {
	return $cast($String, $Stack::peek());
}

$String* StringStack::popString() {
	return $cast($String, $Stack::pop());
}

$String* StringStack::pushString($String* val) {
	return $cast($String, $Stack::push(val));
}

StringStack::StringStack() {
}

$Class* StringStack::load$($String* name, bool initialize) {
	$loadClass(StringStack, name, initialize, &_StringStack_ClassInfo_, allocate$StringStack);
	return class$;
}

$Class* StringStack::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com