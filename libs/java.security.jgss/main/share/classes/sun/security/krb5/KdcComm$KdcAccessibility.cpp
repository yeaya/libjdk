#include <sun/security/krb5/KdcComm$KdcAccessibility.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <sun/security/krb5/KdcComm$BpType.h>
#include <sun/security/krb5/KdcComm.h>
#include <jcpp.h>

#undef DEBUG
#undef TRY_LAST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $KdcComm = ::sun::security::krb5::KdcComm;
using $KdcComm$BpType = ::sun::security::krb5::KdcComm$BpType;

namespace sun {
	namespace security {
		namespace krb5 {

$Set* KdcComm$KdcAccessibility::bads = nullptr;

void KdcComm$KdcAccessibility::init$() {
}

void KdcComm$KdcAccessibility::addBad($String* kdc) {
	$init(KdcComm$KdcAccessibility);
	$synchronized(class$) {
		$init($KdcComm);
		if ($KdcComm::DEBUG) {
			$nc($System::out)->println($$str({">>> KdcAccessibility: add "_s, kdc}));
		}
		$nc(KdcComm$KdcAccessibility::bads)->add(kdc);
	}
}

void KdcComm$KdcAccessibility::removeBad($String* kdc) {
	$init(KdcComm$KdcAccessibility);
	$synchronized(class$) {
		$init($KdcComm);
		if ($KdcComm::DEBUG) {
			$nc($System::out)->println($$str({">>> KdcAccessibility: remove "_s, kdc}));
		}
		$nc(KdcComm$KdcAccessibility::bads)->remove(kdc);
	}
}

bool KdcComm$KdcAccessibility::isBad($String* kdc) {
	$init(KdcComm$KdcAccessibility);
	$synchronized(class$) {
		return $nc(KdcComm$KdcAccessibility::bads)->contains(kdc);
	}
}

void KdcComm$KdcAccessibility::reset() {
	$init(KdcComm$KdcAccessibility);
	$synchronized(class$) {
		$init($KdcComm);
		if ($KdcComm::DEBUG) {
			$nc($System::out)->println(">>> KdcAccessibility: reset"_s);
		}
		$nc(KdcComm$KdcAccessibility::bads)->clear();
	}
}

$List* KdcComm$KdcAccessibility::list($String* kdcList) {
	$init(KdcComm$KdcAccessibility);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($StringTokenizer, st, $new($StringTokenizer, kdcList));
		$var($List, list, $new($ArrayList));
		$init($KdcComm);
		$init($KdcComm$BpType);
		if ($KdcComm::badPolicy == $KdcComm$BpType::TRY_LAST) {
			$var($List, badkdcs, $new($ArrayList));
			while (st->hasMoreTokens()) {
				$var($String, t, st->nextToken());
				if ($nc(KdcComm$KdcAccessibility::bads)->contains(t)) {
					badkdcs->add(t);
				} else {
					list->add(t);
				}
			}
			list->addAll(badkdcs);
		} else {
			while (st->hasMoreTokens()) {
				list->add($(st->nextToken()));
			}
		}
		return list;
	}
}

void KdcComm$KdcAccessibility::clinit$($Class* clazz) {
	$assignStatic(KdcComm$KdcAccessibility::bads, $new($HashSet));
}

KdcComm$KdcAccessibility::KdcComm$KdcAccessibility() {
}

$Class* KdcComm$KdcAccessibility::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bads", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(KdcComm$KdcAccessibility, bads)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KdcComm$KdcAccessibility, init$, void)},
		{"addBad", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(KdcComm$KdcAccessibility, addBad, void, $String*)},
		{"isBad", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(KdcComm$KdcAccessibility, isBad, bool, $String*)},
		{"list", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(KdcComm$KdcAccessibility, list, $List*, $String*)},
		{"removeBad", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(KdcComm$KdcAccessibility, removeBad, void, $String*)},
		{"reset", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(KdcComm$KdcAccessibility, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.KdcComm$KdcAccessibility", "sun.security.krb5.KdcComm", "KdcAccessibility", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.KdcComm$KdcAccessibility",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.KdcComm"
	};
	$loadClass(KdcComm$KdcAccessibility, name, initialize, &classInfo$$, KdcComm$KdcAccessibility::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KdcComm$KdcAccessibility);
	});
	return class$;
}

$Class* KdcComm$KdcAccessibility::class$ = nullptr;

		} // krb5
	} // security
} // sun