#include <com/sun/org/apache/xalan/internal/xsltc/CollatorFactory.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$Class* CollatorFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCollator", "(Ljava/lang/String;Ljava/lang/String;)Ljava/text/Collator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CollatorFactory, getCollator, $Collator*, $String*, $String*)},
		{"getCollator", "(Ljava/util/Locale;)Ljava/text/Collator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CollatorFactory, getCollator, $Collator*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.CollatorFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollatorFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollatorFactory);
	});
	return class$;
}

$Class* CollatorFactory::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com