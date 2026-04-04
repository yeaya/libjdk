#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordFactGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <jcpp.h>

using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
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
								namespace util {

void NodeSortRecordFactGenerator::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$ClassGenerator::init$(className, superClassName, fileName, accessFlags, interfaces, stylesheet);
}

bool NodeSortRecordFactGenerator::isExternal() {
	return true;
}

NodeSortRecordFactGenerator::NodeSortRecordFactGenerator() {
}

$Class* NodeSortRecordFactGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(NodeSortRecordFactGenerator, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
		{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSortRecordFactGenerator, isExternal, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeSortRecordFactGenerator",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeSortRecordFactGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NodeSortRecordFactGenerator));
	});
	return class$;
}

$Class* NodeSortRecordFactGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com