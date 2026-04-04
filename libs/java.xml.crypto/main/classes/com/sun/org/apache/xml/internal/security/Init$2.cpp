#include <com/sun/org/apache/xml/internal/security/Init$2.h>
#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

void Init$2::init$() {
}

bool Init$2::hasMoreElements() {
	return false;
}

$Object* Init$2::nextElement() {
	return nullptr;
}

Init$2::Init$2() {
}

$Class* Init$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Init$2, init$, void)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Init$2, hasMoreElements, bool)},
		{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Init$2, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.Init",
		"getResources",
		"(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.Init$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.Init$2",
		"java.lang.Object",
		"java.util.Enumeration",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.Init"
	};
	$loadClass(Init$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Init$2);
	});
	return class$;
}

$Class* Init$2::class$ = nullptr;

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com