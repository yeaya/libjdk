#include <com/sun/jmx/remote/security/JMXSubjectDomainCombiner.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/DomainCombiner.h>
#include <java/security/Permissions.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/cert/Certificate.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $Permissions = ::java::security::Permissions;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$CodeSource* JMXSubjectDomainCombiner::nullCodeSource = nullptr;
$ProtectionDomain* JMXSubjectDomainCombiner::pdNoPerms = nullptr;

void JMXSubjectDomainCombiner::init$($Subject* s) {
	$SubjectDomainCombiner::init$(s);
}

$ProtectionDomainArray* JMXSubjectDomainCombiner::combine($ProtectionDomainArray* current, $ProtectionDomainArray* assigned) {
	$var($ProtectionDomainArray, newCurrent, nullptr);
	if (current == nullptr || current->length == 0) {
		$assign(newCurrent, $new($ProtectionDomainArray, 1));
		newCurrent->set(0, JMXSubjectDomainCombiner::pdNoPerms);
	} else {
		$assign(newCurrent, $new($ProtectionDomainArray, current->length + 1));
		for (int32_t i = 0; i < current->length; ++i) {
			newCurrent->set(i, current->get(i));
		}
		newCurrent->set(current->length, JMXSubjectDomainCombiner::pdNoPerms);
	}
	return $SubjectDomainCombiner::combine(newCurrent, assigned);
}

$AccessControlContext* JMXSubjectDomainCombiner::getContext($Subject* subject) {
	$init(JMXSubjectDomainCombiner);
	$useLocalObjectStack();
	$var($AccessControlContext, var$0, $AccessController::getContext());
	return $new($AccessControlContext, var$0, $$new(JMXSubjectDomainCombiner, subject));
}

$AccessControlContext* JMXSubjectDomainCombiner::getDomainCombinerContext($Subject* subject) {
	$init(JMXSubjectDomainCombiner);
	$useLocalObjectStack();
	$var($AccessControlContext, var$0, $new($AccessControlContext, $$new($ProtectionDomainArray, 0)));
	return $new($AccessControlContext, var$0, $$new(JMXSubjectDomainCombiner, subject));
}

void JMXSubjectDomainCombiner::clinit$($Class* clazz) {
	$assignStatic(JMXSubjectDomainCombiner::nullCodeSource, $new($CodeSource, nullptr, ($CertificateArray*)nullptr));
	$assignStatic(JMXSubjectDomainCombiner::pdNoPerms, $new($ProtectionDomain, JMXSubjectDomainCombiner::nullCodeSource, $$new($Permissions), nullptr, nullptr));
}

JMXSubjectDomainCombiner::JMXSubjectDomainCombiner() {
}

$Class* JMXSubjectDomainCombiner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nullCodeSource", "Ljava/security/CodeSource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXSubjectDomainCombiner, nullCodeSource)},
		{"pdNoPerms", "Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXSubjectDomainCombiner, pdNoPerms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC, $method(JMXSubjectDomainCombiner, init$, void, $Subject*)},
		{"combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(JMXSubjectDomainCombiner, combine, $ProtectionDomainArray*, $ProtectionDomainArray*, $ProtectionDomainArray*)},
		{"getContext", "(Ljavax/security/auth/Subject;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $STATIC, $staticMethod(JMXSubjectDomainCombiner, getContext, $AccessControlContext*, $Subject*)},
		{"getDomainCombinerContext", "(Ljavax/security/auth/Subject;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $STATIC, $staticMethod(JMXSubjectDomainCombiner, getDomainCombinerContext, $AccessControlContext*, $Subject*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.remote.security.JMXSubjectDomainCombiner",
		"javax.security.auth.SubjectDomainCombiner",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMXSubjectDomainCombiner, name, initialize, &classInfo$$, JMXSubjectDomainCombiner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JMXSubjectDomainCombiner);
	});
	return class$;
}

$Class* JMXSubjectDomainCombiner::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com