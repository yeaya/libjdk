#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdPattern.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>
#include <jcpp.h>

using $IdKeyPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _IdPattern_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IdPattern, init$, void, $String*)},
	{}
};

$ClassInfo _IdPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.IdPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern",
	nullptr,
	nullptr,
	_IdPattern_MethodInfo_
};

$Object* allocate$IdPattern($Class* clazz) {
	return $of($alloc(IdPattern));
}

void IdPattern::init$($String* id) {
	$IdKeyPattern::init$("##id"_s, id);
}

IdPattern::IdPattern() {
}

$Class* IdPattern::load$($String* name, bool initialize) {
	$loadClass(IdPattern, name, initialize, &_IdPattern_ClassInfo_, allocate$IdPattern);
	return class$;
}

$Class* IdPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com