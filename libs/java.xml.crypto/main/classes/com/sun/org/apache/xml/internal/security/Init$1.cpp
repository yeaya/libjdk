#include <com/sun/org/apache/xml/internal/security/Init$1.h>
#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <jcpp.h>

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $KeyResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
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

void Init$1::init$() {
}

$Object* Init$1::run() {
	$ElementProxy::registerDefaultPrefixes();
	$Transform::registerDefaultAlgorithms();
	$SignatureAlgorithm::registerDefaultAlgorithms();
	$JCEMapper::registerDefaultAlgorithms();
	$Canonicalizer::registerDefaultAlgorithms();
	$ResourceResolver::registerDefaultResolvers();
	$KeyResolver::registerDefaultResolvers();
	return nullptr;
}

Init$1::Init$1() {
}

$Class* Init$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Init$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Init$1, run, $Object*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.Init",
		"dynamicInit",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.Init$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.Init$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.Init"
	};
	$loadClass(Init$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Init$1);
	});
	return class$;
}

$Class* Init$1::class$ = nullptr;

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com