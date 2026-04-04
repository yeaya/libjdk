#include <sun/security/jgss/GSSUtil$1.h>
#include <java/security/AccessControlContext.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <javax/security/auth/Subject.h>
#include <org/ietf/jgss/GSSException.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/GSSCredentialImpl.h>
#include <sun/security/jgss/GSSUtil.h>
#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $Subject = ::javax::security::auth::Subject;
using $GSSException = ::org::ietf::jgss::GSSException;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSCredentialImpl = ::sun::security::jgss::GSSCredentialImpl;
using $GSSUtil = ::sun::security::jgss::GSSUtil;
using $GSSCredentialSpi = ::sun::security::jgss::spi::GSSCredentialSpi;
using $GSSNameSpi = ::sun::security::jgss::spi::GSSNameSpi;

namespace sun {
	namespace security {
		namespace jgss {

void GSSUtil$1::init$($AccessControlContext* val$acc, $Oid* val$mech, bool val$initiate, $Class* val$credCls, $GSSNameSpi* val$name) {
	$set(this, val$acc, val$acc);
	$set(this, val$mech, val$mech);
	this->val$initiate = val$initiate;
	$set(this, val$credCls, val$credCls);
	$set(this, val$name, val$name);
}

$Object* GSSUtil$1::run() {
	$useLocalObjectStack();
	$var($Subject, accSubj, $Subject::getSubject(this->val$acc));
	$var($Vector, result, nullptr);
	if (accSubj != nullptr) {
		$assign(result, $new($Vector));
		$load($GSSCredentialImpl);
		$var($Iterator, iterator, $$nc(accSubj->getPrivateCredentials($GSSCredentialImpl::class$))->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($GSSCredentialImpl, cred, $cast($GSSCredentialImpl, iterator->next()));
			$GSSUtil::debug($$str({"...Found cred"_s, cred}));
			try {
				$var($GSSCredentialSpi, ce, $nc(cred)->getElement(this->val$mech, this->val$initiate));
				$GSSUtil::debug($$str({"......Found element: "_s, ce}));
				bool var$0 = $nc(ce)->getClass()->equals(this->val$credCls);
				if (var$0 && (this->val$name == nullptr || this->val$name->equals($$of(ce->getName())))) {
					result->add($$cast($GSSCredentialSpi, $nc(this->val$credCls)->cast(ce)));
				} else {
					$GSSUtil::debug("......Discard element"_s);
				}
			} catch ($GSSException& ge) {
				$GSSUtil::debug($$str({"...Discard cred ("_s, ge, ")"_s}));
			}
		}
	} else {
		$GSSUtil::debug("No Subject"_s);
	}
	return $of(result);
}

GSSUtil$1::GSSUtil$1() {
}

$Class* GSSUtil$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $FINAL | $SYNTHETIC, $field(GSSUtil$1, val$name)},
		{"val$credCls", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(GSSUtil$1, val$credCls)},
		{"val$initiate", "Z", nullptr, $FINAL | $SYNTHETIC, $field(GSSUtil$1, val$initiate)},
		{"val$mech", "Lorg/ietf/jgss/Oid;", nullptr, $FINAL | $SYNTHETIC, $field(GSSUtil$1, val$mech)},
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(GSSUtil$1, val$acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/AccessControlContext;Lorg/ietf/jgss/Oid;ZLjava/lang/Class;Lsun/security/jgss/spi/GSSNameSpi;)V", "()V", 0, $method(GSSUtil$1, init$, void, $AccessControlContext*, $Oid*, bool, $Class*, $GSSNameSpi*)},
		{"run", "()Ljava/util/Vector;", "()Ljava/util/Vector<TT;>;", $PUBLIC, $virtualMethod(GSSUtil$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jgss.GSSUtil",
		"searchSubject",
		"(Lsun/security/jgss/spi/GSSNameSpi;Lorg/ietf/jgss/Oid;ZLjava/lang/Class;)Ljava/util/Vector;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.GSSUtil$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.GSSUtil$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/util/Vector<TT;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.GSSUtil"
	};
	$loadClass(GSSUtil$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GSSUtil$1);
	});
	return class$;
}

$Class* GSSUtil$1::class$ = nullptr;

		} // jgss
	} // security
} // sun