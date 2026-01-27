#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyPattern.h>

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

$MethodInfo _KeyPattern_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyPattern, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _KeyPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.KeyPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern",
	nullptr,
	nullptr,
	_KeyPattern_MethodInfo_
};

$Object* allocate$KeyPattern($Class* clazz) {
	return $of($alloc(KeyPattern));
}

void KeyPattern::init$($String* index, $String* value) {
	$IdKeyPattern::init$(index, value);
}

KeyPattern::KeyPattern() {
}

$Class* KeyPattern::load$($String* name, bool initialize) {
	$loadClass(KeyPattern, name, initialize, &_KeyPattern_ClassInfo_, allocate$KeyPattern);
	return class$;
}

$Class* KeyPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com