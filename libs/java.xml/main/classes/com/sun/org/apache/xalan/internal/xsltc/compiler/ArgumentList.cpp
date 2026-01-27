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

$FieldInfo _ArgumentList_FieldInfo_[] = {
	{"_arg", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE | $FINAL, $field(ArgumentList, _arg)},
	{"_rest", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/ArgumentList;", nullptr, $PRIVATE | $FINAL, $field(ArgumentList, _rest)},
	{}
};

$MethodInfo _ArgumentList_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/ArgumentList;)V", nullptr, $PUBLIC, $method(ArgumentList, init$, void, $Expression*, ArgumentList*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArgumentList, toString, $String*)},
	{}
};

$ClassInfo _ArgumentList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ArgumentList",
	"java.lang.Object",
	nullptr,
	_ArgumentList_FieldInfo_,
	_ArgumentList_MethodInfo_
};

$Object* allocate$ArgumentList($Class* clazz) {
	return $of($alloc(ArgumentList));
}

void ArgumentList::init$($Expression* arg, ArgumentList* rest) {
	$set(this, _arg, arg);
	$set(this, _rest, rest);
}

$String* ArgumentList::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, nullptr);
	if (this->_rest == nullptr) {
		$assign(var$0, $nc(this->_arg)->toString());
	} else {
		$var($String, var$1, $$str({$($nc(this->_arg)->toString()), ", "_s}));
		$assign(var$0, $concat(var$1, $($nc(this->_rest)->toString())));
	}
	return var$0;
}

ArgumentList::ArgumentList() {
}

$Class* ArgumentList::load$($String* name, bool initialize) {
	$loadClass(ArgumentList, name, initialize, &_ArgumentList_ClassInfo_, allocate$ArgumentList);
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