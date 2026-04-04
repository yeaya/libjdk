#include <com/sun/jmx/remote/security/SubjectDelegator$1.h>
#include <com/sun/jmx/remote/security/SubjectDelegator.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $SubjectDelegator = ::com::sun::jmx::remote::security::SubjectDelegator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void SubjectDelegator$1::init$($SubjectDelegator* this$0, $Collection* val$permissions) {
	$set(this, this$0, this$0);
	$set(this, val$permissions, val$permissions);
}

$Object* SubjectDelegator$1::run() {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->val$permissions)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Permission, sdp, $cast($Permission, i$->next()));
		{
			$AccessController::checkPermission(sdp);
		}
	}
	return nullptr;
}

SubjectDelegator$1::SubjectDelegator$1() {
}

$Class* SubjectDelegator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/security/SubjectDelegator;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDelegator$1, this$0)},
		{"val$permissions", "Ljava/util/Collection;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDelegator$1, val$permissions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/security/SubjectDelegator;Ljava/util/Collection;)V", "()V", 0, $method(SubjectDelegator$1, init$, void, $SubjectDelegator*, $Collection*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SubjectDelegator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.security.SubjectDelegator",
		"delegatedContext",
		"(Ljava/security/AccessControlContext;Ljavax/security/auth/Subject;Z)Ljava/security/AccessControlContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.SubjectDelegator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.security.SubjectDelegator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.SubjectDelegator"
	};
	$loadClass(SubjectDelegator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectDelegator$1);
	});
	return class$;
}

$Class* SubjectDelegator$1::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com