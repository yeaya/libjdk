#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void XMLDSigRI$1::init$() {
}

$Object* XMLDSigRI$1::run() {
	return $of($System::getProperty("java.specification.version"_s));
}

XMLDSigRI$1::XMLDSigRI$1() {
}

$Class* XMLDSigRI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XMLDSigRI$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDSigRI$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.jcp.xml.dsig.internal.dom.XMLDSigRI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.XMLDSigRI$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.XMLDSigRI"
	};
	$loadClass(XMLDSigRI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDSigRI$1);
	});
	return class$;
}

$Class* XMLDSigRI$1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org