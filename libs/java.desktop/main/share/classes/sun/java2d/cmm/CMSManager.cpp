#include <sun/java2d/cmm/CMSManager.h>
#include <java/awt/color/CMMException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <sun/java2d/cmm/CMMServiceProvider.h>
#include <sun/java2d/cmm/CMSManager$CMMTracer.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/lcms/LcmsServiceProvider.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $CMMException = ::java::awt::color::CMMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $AccessController = ::java::security::AccessController;
using $CMMServiceProvider = ::sun::java2d::cmm::CMMServiceProvider;
using $CMSManager$CMMTracer = ::sun::java2d::cmm::CMSManager$CMMTracer;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $LcmsServiceProvider = ::sun::java2d::cmm::lcms::LcmsServiceProvider;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace cmm {

$volatile($PCMM*) CMSManager::cmmImpl = nullptr;

void CMSManager::init$() {
}

$PCMM* CMSManager::getModule() {
	$init(CMSManager);
	$var($PCMM, loc, CMSManager::cmmImpl);
	return loc != nullptr ? loc : createModule();
}

$PCMM* CMSManager::createModule() {
	$load(CMSManager);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$init(CMSManager);
		if (CMSManager::cmmImpl != nullptr) {
			return CMSManager::cmmImpl;
		}
		$var($GetPropertyAction, gpa, $new($GetPropertyAction, "sun.java2d.cmm"_s));
		$var($String, cmmProviderClass, $cast($String, $AccessController::doPrivileged(gpa)));
		$var($CMMServiceProvider, provider, nullptr);
		if (cmmProviderClass != nullptr) {
			try {
				$Class* cls = $Class::forName(cmmProviderClass);
				$assign(provider, $cast($CMMServiceProvider, $$nc(cls->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
			} catch ($ReflectiveOperationException& e) {
			}
		}
		if (provider == nullptr) {
			$assign(provider, $new($LcmsServiceProvider));
		}
		$assignStatic(CMSManager::cmmImpl, $nc(provider)->getColorManagementModule());
		if (CMSManager::cmmImpl == nullptr) {
			$throwNew($CMMException, "Cannot initialize Color Management System.No CM module found"_s);
		}
		$assign(gpa, $new($GetPropertyAction, "sun.java2d.cmm.trace"_s));
		$var($String, cmmTrace, $cast($String, $AccessController::doPrivileged(gpa)));
		if (cmmTrace != nullptr) {
			$assignStatic(CMSManager::cmmImpl, $new($CMSManager$CMMTracer, CMSManager::cmmImpl));
		}
		return CMSManager::cmmImpl;
	}
}

bool CMSManager::canCreateModule() {
	$load(CMSManager);
	$synchronized(class$) {
		$init(CMSManager);
		return (CMSManager::cmmImpl == nullptr);
	}
}

CMSManager::CMSManager() {
}

$Class* CMSManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cmmImpl", "Lsun/java2d/cmm/PCMM;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CMSManager, cmmImpl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CMSManager, init$, void)},
		{"canCreateModule", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CMSManager, canCreateModule, bool)},
		{"createModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(CMSManager, createModule, $PCMM*)},
		{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PUBLIC | $STATIC, $staticMethod(CMSManager, getModule, $PCMM*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.CMSManager$CMMTracer", "sun.java2d.cmm.CMSManager", "CMMTracer", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.cmm.CMSManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.cmm.CMSManager$CMMTracer"
	};
	$loadClass(CMSManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMSManager);
	});
	return class$;
}

$Class* CMSManager::class$ = nullptr;

		} // cmm
	} // java2d
} // sun