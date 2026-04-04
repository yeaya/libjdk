#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ArgumentList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

void ArgumentList::init$($Expression* arg, ArgumentList* rest) {
	$set(this, _arg, arg);
	$set(this, _rest, rest);
}

$String* ArgumentList::toString() {
	$useLocalObjectStack();
	$var($String, var$0, nullptr);
	if (this->_rest == nullptr) {
		$assign(var$0, $nc(this->_arg)->toString());
	} else {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append($($nc(this->_arg)->toString()));
		var$1->append(", "_s);
		var$1->append($($nc(this->_rest)->toString()));
		$assign(var$0, $str(var$1));
	}
	return var$0;
}

ArgumentList::ArgumentList() {
}

$Class* ArgumentList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_arg", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE | $FINAL, $field(ArgumentList, _arg)},
		{"_rest", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/ArgumentList;", nullptr, $PRIVATE | $FINAL, $field(ArgumentList, _rest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/ArgumentList;)V", nullptr, $PUBLIC, $method(ArgumentList, init$, void, $Expression*, ArgumentList*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArgumentList, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.ArgumentList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArgumentList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentList);
	});
	return class$;
}

$Class* ArgumentList::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com